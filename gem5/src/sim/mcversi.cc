/*
 * Copyright (c) 2014-2016 Marco Elver
 * Copyright (c) 2016 The University of Edinburgh
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Marco Elver
 */

#include <cstdlib>
#include <memory>
#include <numeric>
#include <string>
#include <vector>

#include "base/misc.hh"
#include "base/output.hh"
#include "base/trace.hh"
#include "base/types.hh"
#include "config/the_isa.hh"
#include "debug/McVerSi.hh"
#include "sim/mcversi.hh"
#include "sim/sim_exit.hh"

namespace mc2lib {
namespace types {

// Specialize types; this must only be done once in the entire codebase.
template <bool>
struct Types;
template <>
struct Types<true>
{
    typedef uint16_t Poi;
    typedef uint16_t Pid;
    typedef ::Addr Addr;

    typedef Addr InstPtr;

// See comment on TEST_SIZE below.
#if THE_ISA == ARM_ISA
    typedef uint8_t WriteID;
#else // if THE_ISA == X86_ISA
    typedef uint16_t WriteID;
#endif
};

} // namespace types
} // namespace mc2lib

#include "mc2lib/codegen/compiler.hpp"
#include "mc2lib/codegen/rit.hpp"
#include "mc2lib/mcversi.hpp"
#include "mc2lib/memconsistency/cats.hpp"
#include "mc2lib/simplega.hpp"

#if THE_ISA == ARM_ISA
#include "mc2lib/codegen/ops/armv7.hpp"
#else // if THE_ISA == X86_ISA
// Fallback option for unsupported ISAs; it goes without saying that using an
// unsupported ISA with this will not work.
#include "mc2lib/codegen/ops/x86_64.hpp"
#endif

namespace {

namespace mc = mc2lib::memconsistency;
namespace codegen = mc2lib::codegen;

typedef std::mt19937_64 URNG;

#if THE_ISA == ARM_ISA
typedef mc::cats::Arch_ARMv7 Arch;
typedef codegen::armv7::RandomFactory RandomFactory;
typedef codegen::armv7::MemOperation MemOperation;
typedef codegen::armv7::Return ReturnOp;
typedef codegen::Compiler<codegen::armv7::Operation, codegen::armv7::Backend>
  Compiler;
#else // if THE_ISA == X86_ISA
typedef mc::cats::Arch_TSO Arch;
typedef codegen::strong::RandomFactory RandomFactory;
typedef codegen::strong::MemOperation MemOperation;
typedef codegen::strong::Return ReturnOp;
typedef codegen::Compiler<codegen::strong::Operation,
                          codegen::strong::Backend_X86_64> Compiler;
#endif

typedef codegen::RandInstTest<URNG, RandomFactory> RIT;
typedef mc2lib::simplega::GenePool<RIT> GenePool;

void
writeDotGraph(const mc::cats::Architecture& arch,
              const mc::cats::ExecWitness& ew, const mc::EventRel::Path& path,
              const std::string& name)
{
    auto os = simout.create(name + ".dot");
    auto stream = os->stream();

    *stream << "digraph " << name << " {\n";
    *stream << "init [style=invisible, label=\"\", width=0, height=0];\n";

    const mc::Event* prev = nullptr;
    for (const auto& e : path) {
        const auto& from_write =
          e.AnyType(arch.EventTypeRead()) ? ew.rf : ew.co;
        // Use raw(), to keep graph limited (including transitive edges
        // would blow up the graph).
        for (const auto& w : from_write.get()) {
            if (w.second.Contains(e)) {
                *stream << "\"" << static_cast<std::string>(w.first)
                        << "\" -> \"" << static_cast<std::string>(e)
                        << "\";\n";
            }
        }

        *stream << "\"" << (prev ? static_cast<std::string>(*prev) : "init")
                << "\" -> \"" << static_cast<std::string>(e) << "\";\n";

        prev = &e;
    }

    *stream << "}\n";
    simout.close(os);
}

void
writeDotGraph(const mc::cats::Architecture& arch,
              const mc::cats::ExecWitness& ew, const mc::EventRel& rel,
              const std::string& name)
{
    auto os = simout.create(name + ".dot");
    auto stream = os->stream();

    *stream << "digraph " << name << " {\n";

    const auto domain = rel.Domain();
    for (const auto& e1 : domain.get()) {
        const auto writes = rel.Reachable(e1);
        for (const auto& e2 : writes.get()) {
            *stream << "\"" << static_cast<std::string>(e1) << "\" -> \""
                    << static_cast<std::string>(e2) << "\";\n";
        }
    }

    *stream << "}\n";
    simout.close(os);
}

// This class implements the interface to mc2lib, and maintains all relevant
// state. The exposed interface (in mcversi.hh), does not rely on mc2lib, but
// rather just makes calls to McVerSi_State. This separation helps with keeping
// the overheads introduced by mc2lib to a minimum.
class McVerSi_State
{
  public:
    static constexpr double MCVERSI_P_BFA = 0.05;
    static constexpr double MCVERSI_P_USEL = 0.2;
    static constexpr float GP_MUTATION_PROB = 0.005f;
    static constexpr size_t GP_MATES = 2;
    static constexpr size_t GP_POPULATION_SIZE = 100; // 1 for pseudo-random
    static constexpr size_t GP_TOURNAMENT_SIZE = 2;
    static constexpr size_t GP_SELECTION_SIZE = GP_TOURNAMENT_SIZE * GP_MATES;

    // With WriteID size of only 1 byte, and a bias of slightly fewer writes
    // than other operations, 500 operations is a reasonable limit without
    // incurring frequent WriteID exhaustion. Increase WriteID size to increase
    // test-size (e.g. in McVerSi paper WriteID size used was 2 and test size
    // of 1000; prerequesite is that the code generation backend supports the
    // selected WriteID size).
#if THE_ISA == ARM_ISA
    static constexpr size_t TEST_SIZE = 500;
#else // if THE_ISA == X86_ISA
    static constexpr size_t TEST_SIZE = 1000;
#endif

    void setRanges(mc2lib::types::Pid min_pid, mc2lib::types::Pid max_pid,
                   mc2lib::types::Addr min_vaddr,
                   mc2lib::types::Addr max_vaddr, size_t stride,
                   mc2lib::types::Addr addr_mask)
    {
        DPRINTF(McVerSi,
                "McVerSi::setRanges(%d, %d, 0x%x, 0x%x, 0x%x, 0x%x)\n",
                min_pid, max_pid, min_vaddr, max_vaddr, stride, addr_mask);

        randomFactory.Reset(min_pid, max_pid, min_vaddr, max_vaddr, stride);

        if (addr_mask) {
            compiler.evts()->set_addr_mask(addr_mask);
        }

        updateCoverage();
        initGenePool();
    }

    uint64_t emitThread(mc2lib::types::Pid pid, mc2lib::types::InstPtr base,
                        void* code, size_t len)
    {
        DPRINTF(McVerSi, "McVerSi::emitThread(%d, 0x%x, ...)\n", pid, base);

        size_t emit_len = compiler.Emit(pid, base, code, len);
        emit_len += compiler.Emit(base + emit_len, &returnOp,
                                  static_cast<char*>(code) + emit_len,
                                  len - emit_len, nullptr, nullptr);

        if (compiler.evts()->Exhausted()) {
            warn("McVerSi_State: exhausted!\n");
        }

        // events accumulates all events that compiler emits; assume that all
        // threads are emitted before the first updateObs is called.
        nonInitEventCount = execWitness.events.size();

#ifndef NDEBUG
        // Write out generated code for this thread.
        auto os = simout.create(csprintf("mcversi_code-%d.bin", pid));
        os->stream()->write((char*)code, emit_len);
        simout.close(os);
#endif

        return emit_len;
    }

    void updateObs(mc2lib::types::InstPtr ip, int part,
                   mc2lib::types::Addr vaddr,
                   const mc2lib::types::WriteID* from_id, size_t size)
    {
        if (isValidAddr(vaddr) && isValidInstPtr(ip)) {
            DPRINTF(McVerSi, "McVerSi::updateObs(0x%x, %d, 0x%x, 0x%x, %d)\n",
                    ip, part, vaddr, *from_id, size);

            compiler.UpdateObs(ip, part, vaddr, from_id, size);
        }
    }

    bool verify()
    {
        DPRINTF(McVerSi, "McVerSi::verify()\n");

        if (outstanding() > 0) {
            panic("Outstanding memory operations (%d) in flight!\n",
                  outstanding());
            return false;
        }

        // Temporarily set required properties; outstanding() relies on
        // properties unset.
        execWitness.po.set_props(mc::EventRel::kTransitiveClosure);
        execWitness.co.set_props(mc::EventRel::kTransitiveClosure);

        // Instantiate memoization proxy and checker.
        mc::cats::ArchProxy<decltype(arch)> arch_proxy(&arch);
        arch_proxy.Memoize(execWitness);
        auto checker = arch_proxy.MakeChecker(&execWitness);

        mc::EventRel::Path cyclic;

        // Verify!
        try {
            checker->valid_exec(&cyclic);
        } catch (const mc::Error& e) {
            execWitness.co.clear_props();

            writeDotGraph(arch, execWitness, execWitness.rf, "mcversi_rf");
            writeDotGraph(arch, execWitness, execWitness.co, "mcversi_co");
            writeDotGraph(arch, execWitness, cyclic, "mcversi_cycle");

            warn("Memory consistency violation: %s!\n", e.what());
            exitSimLoop("MCM bug found!", curTick() + 1);
        }

        execWitness.po.clear_props();
        execWitness.co.clear_props();

        return true;
    }

    std::vector<Addr> resetAll(size_t block_size_bytes)
    {
        assert(outstanding() == 0);
        ++resetCount;

        DPRINTF(McVerSi, "%llu: McVerSi::resetAll(): reset_count = %d, "
                         "iteration = %d, sys_coverage = %.2f%%\n",
                curTick(), getResetCount(), getIteration(),
                getSystemCoverage() * 100.0f);

        observations |= execWitness.rf;
        observations |= execWitness.co;

        auto result = getUsedAddrs(block_size_bytes);
        updateCoverage();
        evalCurrentTest();
        nextTest();

        iteration = 1;

        return result;
    }

    std::vector<Addr> resetConflict(size_t block_size_bytes)
    {
        DPRINTF(McVerSi, "McVerSi::resetConflict()\n");

        observations |= execWitness.rf;
        observations |= execWitness.co;

        auto result = getUsedAddrs(block_size_bytes);
        execWitness.rf.Clear();
        execWitness.co.Clear();

        ++iteration;

        return result;
    }

    bool isValidInstPtr(mc2lib::types::InstPtr ip) const
    {
        const auto op_ptr = compiler.IpToOp(ip);
        return op_ptr != nullptr && op_ptr != &returnOp;
    }

    bool isValidAddr(mc2lib::types::Addr vaddr) const
    {
        return randomFactory.min_addr() <= vaddr &&
               randomFactory.max_addr() >= vaddr;
    }

    size_t outstanding() const
    {
        return nonInitEventCount -
               (execWitness.rf.size() + execWitness.co.size());
    }

    size_t getResetCount() const { return resetCount; }

    size_t getIteration() const { return iteration; }

    RandomFactory* getRandomFactory() { return &randomFactory; }

    Compiler* getCompiler() { return &compiler; }

    // Get singleton instance.
    static McVerSi_State* get()
    {
        if (!instance) {
            instance.reset(new McVerSi_State);
        }

        return instance.get();
    }

  private:
    // Only supports singleton usage.
    McVerSi_State()
      : urng(1234)
      , randomFactory(0, 0, 0, 0)
      , genePool(nullptr)
      , compiler(std::unique_ptr<codegen::EvtStateCats>(
          new codegen::EvtStateCats(&execWitness, &arch)))
      , nonInitEventCount(0)
      , resetCount(0)
      , iteration(1)
      , crossoverMutate(MCVERSI_P_USEL, MCVERSI_P_BFA)
    {
    }

    // Disallow copy and assignment.
    McVerSi_State(const McVerSi_State& rhs) = delete;
    McVerSi_State& operator=(McVerSi_State& rhs) = delete;

    void updateCoverage()
    {
        // FIXME: Implement coverage computation here and update current
        // test's individual coverage (to be returned by getTestCoverage).
        // Although using without coverage is also useful, as results are
        // likely better than random tests---especially as there is a
        // correlation between the racyness of a test and the corner cases
        // that are triggered---however without coverage we're effectively
        // "flying blind", and very likely some corner cases won't be
        // explored or will take longer to find.
        //
        // For example: in the McVerSi paper, the coherence protocol's
        // covered state transitions (by a single test) are used as coverage;
        // each test's reported coverage changes over time to focus on
        // uncovered transitions in order to avoid local maxima.
    }

    float getTestCoverage()
    {
        // FIXME: return current test's individual coverage.
        return 0.1f;
    }

    float getSystemCoverage()
    {
        // FIXME: Get system's total coverage.
        return 0.1f;
    }

    void setThreads(RIT* rit)
    {
        nonInitEventCount = 0;

        // resets execWitness and arch
        compiler.Reset(rit->threads());
        observations.Clear();
    }

    void initGenePool()
    {
        GenePool::Population initial_population;

        for (size_t i = 0; i < GP_POPULATION_SIZE; ++i) {
            initial_population.emplace_back(urng, &randomFactory, TEST_SIZE);
        }

        genePool.reset(new GenePool(initial_population, GP_MUTATION_PROB));

        if (GP_POPULATION_SIZE == 1) { // Pseudo-random
            curSelection = genePool->SelectAll();
        } else {
            curSelection = genePool->SelectUniform(urng, GP_SELECTION_SIZE);
        }

        curTest = curSelection.begin();

        assert(curTest != curSelection.end());
        setThreads(*curTest);
    }

    void evalCurrentTest()
    {
        // NDt -- average non-determinism of test.
        float non_det_test = static_cast<float>(observations.size()) /
                             static_cast<float>(nonInitEventCount);

        // Compute fitaddrs.
        assert((*curTest)->fitaddrsptr()->empty());
        const auto obs_inv = observations.Inverse();
        for (const auto& obs : obs_inv.get()) {
            if (obs.second.size() > // NDe
                static_cast<size_t>(non_det_test + 0.5f)) {
                (*curTest)->fitaddrsptr()->Insert(obs.first.addr);
            }
        }

        (*curTest)->set_fitness(getTestCoverage());

        DPRINTF(McVerSi, "%llu: McVerSi::evalCurrentTest(): "
                         "NDt = %.4f, fitness = %.4f\n",
                curTick(), non_det_test, (*curTest)->Fitness());
    }

    void nextTest()
    {
        assert(genePool != nullptr);

        for (;;) {
            curTest++;

            if (curTest == curSelection.end()) {
                DPRINTF(McVerSi, "McVerSi::nextTest(): steps = %d, "
                                 "avg_fitness = %.4f\n",
                        genePool->steps(), averageFitness());

                if (GP_POPULATION_SIZE == 1) {
                    // Pseudo-random
                    assert(genePool->get_ptr()->size() == 1);
                    genePool->get_ptr()->clear();

                    // Make new test
                    genePool->get_ptr()->emplace_back(urng, &randomFactory,
                                                     TEST_SIZE);
                    curSelection = genePool->SelectAll();
                    assert(curSelection.size() == 1);
                } else {
                    GenePool::Selection mate_selection;

                    //
                    // Implements Steady-State GA, with Tournament Selection,
                    // the oldest genome being replaced by the child.
                    //

                    // Select tournament winners.
                    for (size_t i = 0; i < curSelection.size();
                         i += GP_TOURNAMENT_SIZE) {
                        auto winner = curSelection[i];

                        for (size_t j = 1; j < GP_TOURNAMENT_SIZE; ++j) {
                            if (*(curSelection[j]) < *winner) {
                                winner = curSelection[j];
                            }
                        }

                        mate_selection.push_back(winner);
                    }

                    assert(mate_selection.size() == GP_MATES);

                    // Delete oldest
                    mate_selection.push_back(&genePool->get_ptr()->front());

                    genePool->Step(urng, crossoverMutate, mate_selection,
                                   GP_MATES, GP_MATES);

                    assert(genePool->population_size() == GP_POPULATION_SIZE);
                    curSelection =
                      genePool->SelectUniform(urng, GP_SELECTION_SIZE);
                }

                curTest = curSelection.begin();
            }

            if ((*curTest)->Fitness() > 0.0f ||
                !(*curTest)->fitaddrs().empty()) {
                // Do not re-evaluate.
                continue;
            }

            break;
        }

        assert((*curTest)->fitaddrs().empty());
        assert(curTest != curSelection.end());
        assert((*curTest)->get().size() == TEST_SIZE);

        setThreads(*curTest);
    }

    float averageFitness() const
    {
        float sum = 0.0f;

        size_t count = 0;
        for (const auto& genome : genePool->get()) {
            if (genome.Fitness() > 0.0f) {
                sum += genome.Fitness();
                ++count;
            }
        }

        return sum / static_cast<float>(count);
    }

    // Copy addresses used by current test, so that the guest-workload does not
    // have to iterate through entire allocated memory (significant performance
    // improvements if we allocate several MB of memory to be used by tests).
    std::vector<Addr> getUsedAddrs(size_t block_size_bytes)
    {
        std::unordered_set<Addr> used;

        for (const auto& obs : observations.get()) {
            auto addr =
              obs.first.addr - (obs.first.addr % block_size_bytes);

            // Events store only the masked out address for the set of
            // possible synonyms. Use the lowest address as base.
            Addr base =
              randomFactory.min_addr() & (~compiler.evts()->addr_mask());

            used.insert(base + addr);
        }

        std::vector<Addr> result(used.begin(), used.end());
        // end marker
        result.push_back(0);

        return result;
    }

  private:
    ReturnOp returnOp;

    URNG urng;
    RandomFactory randomFactory;

    // Gene-pool initialized lazily (on first use).
    std::unique_ptr<GenePool> genePool;

    GenePool::Selection curSelection;
    GenePool::Selection::iterator curTest;

    mc::cats::ExecWitness execWitness;

    Arch arch;
    Compiler compiler;

    // Observations across entire test-run.
    mc::EventRel observations;

    // The number of events without the initial events being generated on the
    // fly.
    size_t nonInitEventCount;

    // The number of tests run.
    size_t resetCount;

    // Current iteration.
    size_t iteration;

    mc2lib::mcversi::CrossoverMutate<URNG, RIT, MemOperation> crossoverMutate;

    // Singleton instance.
    static std::unique_ptr<McVerSi_State> instance;
};

constexpr double McVerSi_State::MCVERSI_P_BFA;
constexpr double McVerSi_State::MCVERSI_P_USEL;
constexpr float McVerSi_State::GP_MUTATION_PROB;
constexpr size_t McVerSi_State::GP_MATES;
constexpr size_t McVerSi_State::GP_POPULATION_SIZE;
constexpr size_t McVerSi_State::GP_TOURNAMENT_SIZE;
constexpr size_t McVerSi_State::GP_SELECTION_SIZE;
constexpr size_t McVerSi_State::TEST_SIZE;
std::unique_ptr<McVerSi_State> McVerSi_State::instance;

} // namespace

namespace McVerSi {

void
setRanges(unsigned min_pid, unsigned max_pid, Addr min_vaddr, Addr max_vaddr,
          size_t stride, Addr addr_mask)
{
    McVerSi_State::get()->setRanges(min_pid, max_pid, min_vaddr, max_vaddr,
                                    stride, addr_mask);
}

uint64_t
emitThread(unsigned pid, Addr base, void* code, size_t len)
{
    return McVerSi_State::get()->emitThread(pid, base, code, len);
}

bool
verify()
{
    return McVerSi_State::get()->verify();
}

std::vector<Addr>
resetAll(size_t block_size_bytes)
{
    return McVerSi_State::get()->resetAll(block_size_bytes);
}

std::vector<Addr>
resetConflict(size_t block_size_bytes)
{
    return McVerSi_State::get()->resetConflict(block_size_bytes);
}

void
forEachAddrRangeOnce(std::function<void(Addr min, Addr max)> fun)
{
    // RandomFactory is oblivious to addr-mask, but since this function
    // should only be used to zero out test memory (see pseudo_inst.cc), we
    // do not want to iterate through virtual address synonyms.
    Addr max_max_masked = 0;
    McVerSi_State::get()->getRandomFactory()->for_each_AddrRange(
      [&fun, &max_max_masked](Addr min, Addr max) {
          auto max_masked =
            (max & McVerSi_State::get()->getCompiler()->evts()->addr_mask());
          if (max_max_masked < max_masked) {
              max_max_masked = max_masked;
              fun(min, max);
          }
      });
}

bool
isValidInstPtr(Addr ip)
{
    return McVerSi_State::get()->isValidInstPtr(ip);
}

bool
isValidAddr(Addr vaddr)
{
    return McVerSi_State::get()->isValidAddr(vaddr);
}

void
updateObs(Addr ip, int part, Addr vaddr, const void* from_id, size_t size)
{
    McVerSi_State::get()->updateObs(
      ip, part, vaddr, static_cast<const mc2lib::types::WriteID*>(from_id),
      size);
}

} // namespace McVerSi
