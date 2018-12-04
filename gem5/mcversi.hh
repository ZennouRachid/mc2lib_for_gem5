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

#ifndef __SIM_MCVERSI_HH__
#define __SIM_MCVERSI_HH__

#include <functional>
#include <vector>

#include "base/types.hh"

/**
 * This implements the simulator-specific aspects of the McVerSi framework,
 * which relies on ext/mc2lib (simulator-independent portion, which provides
 * memory consistency models and checker, code generator, etc.).
 *
 * This interface is primarily to be used by the pseudo instructions, that are
 * used by the guest-workload to drive the test-generation, execution and
 * verification loop.
 *
 * For more details see the paper (available from
 * http://ac.marcoelver.com/research/mcversi):
 *
 *   Marco Elver and Vijay Nagarajan. "McVerSi: A Test Generation Framework for
 *   Fast Memory Consistency Verification in Simulation." In IEEE International
 *   Symposium on High Performance Computer Architecture (HPCA). Barcelona,
 *   Spain, March 2016.
 */
namespace McVerSi {

/**
 * Configures the test generator.
 *
 * @param min_pid Minimum processor/thread ID.
 * @param max_pid Maximum processor/thread ID.
 * @param min_vaddr Minimum virtual address.
 * @param max_vaddr Maximum virtual address.
 * @param addr_mask Address mask; use to let test generator and checker know
 *                  which addresses (synonyms) map to same physical address.
 */
void setRanges(unsigned min_pid, unsigned max_pid, Addr min_vaddr,
               Addr max_vaddr, size_t stride, Addr addr_mask);

/**
 * Emit code for thread.
 *
 * @param pid The processor/thread ID for which to emit code.
 * @param base The code offset.
 * @param[out] code Where code generator should write the code.
 * @param len Maximum length of to be emitted code.
 * @return Bytes written to code.
 */
uint64_t emitThread(unsigned pid, Addr base, void* code, size_t len);

/**
 * Verify execution after test iteration.
 *
 * @return Valid execution or not.
 */
bool verify();

/**
 * Reset all relations (static orders and conflict orders of checker), set up
 * next test and provide information of which addresses were used by the test
 * to speed up resetting (in case of guest side operation needed for reset,
 * e.g. cache flush instructions).
 *
 * @param block_size_bytes The cache block size of the system.
 * @return all used addresses of the test modulo block_size_bytes.
 */
std::vector<Addr> resetAll(size_t block_size_bytes);

/**
 * Reset only conflict order relations (but keep static relations), as the same
 * test is to be run again. nd provide information of which addresses were used
 * by the test.
 *
 * @param block_size_bytes The cache block size of the system.
 * @return all used addresses of the test modulo block_size_bytes.
 */
std::vector<Addr> resetConflict(size_t block_size_bytes);

/**
 * Iterators over all address ranges used in the test. Used for host-assisted
 * resetting of test memory.
 *
 * @param fun Function to be called with address range.
 */
void forEachAddrRangeOnce(std::function<void(Addr min, Addr max)> fun);

/**
 * Check if instruction belongs to a test.
 *
 * @param ip The instruction pointer of the instruction.
 * @return True if instruction is part of current test, false otherwise.
 */
bool isValidInstPtr(Addr ip);

/**
 * Check if virtual memory address belongs to a test.
 *
 * @param vaddr The virtual memory address.
 * @param True if address if part of current test, false otherwise.
 */
bool isValidAddr(Addr vaddr);

/**
 * Update observation.
 *
 * @param ip The instruction pointer for this observation.
 * @param part The part of the instruction (microcode counter), e.g. for RMWs.
 * @param from_id Pointer to observed bytes.
 * @param size Size of observed bytes.
 */
void updateObs(Addr ip, int part, Addr vaddr, const void* from_id, size_t size);

} // namespace McVerSi

#endif // __SIM_MCVERSI_HH__
