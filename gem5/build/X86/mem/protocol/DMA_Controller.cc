/** \file DMA_Controller.cc
 *
 * Auto generated C++ code started by /home/rachid/Documents/gem5-e1/src/mem/slicc/symbols/StateMachine.py:464
 * Created by slicc definition of Module "DMA Controller"
 */

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <sstream>
#include <string>
#include <typeinfo>

#include "base/compiler.hh"
#include "base/cprintf.hh"

#include "debug/RubySlicc.hh"
#include "debug/RubyGenerated.hh"
#include "mem/protocol/DMA_Controller.hh"
#include "mem/protocol/DMA_Event.hh"
#include "mem/protocol/DMA_State.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"

using namespace std;
#include "mem/protocol/DMA_State.hh"
DMA_Controller *
DMA_ControllerParams::create()
{
    return new DMA_Controller(this);
}

int DMA_Controller::m_num_controllers = 0;
std::vector<Stats::Vector *>  DMA_Controller::eventVec;
std::vector<std::vector<Stats::Vector *> >  DMA_Controller::transVec;

// for adding information to the protocol debug trace
stringstream DMA_transitionComment;

#ifndef NDEBUG
#define APPEND_TRANSITION_COMMENT(str) (DMA_transitionComment << str)
#else
#define APPEND_TRANSITION_COMMENT(str) do {} while (0)
#endif

/** \brief constructor */
DMA_Controller::DMA_Controller(const Params *p)
    : AbstractController(p)
{
    m_machineID.type = MachineType_DMA;
    m_machineID.num = m_version;
    m_num_controllers++;

    m_in_ports = 2;
    m_dma_sequencer_ptr = p->dma_sequencer;
    if (m_dma_sequencer_ptr != NULL) {
        m_dma_sequencer_ptr->setController(this);
    }
    m_request_latency = p->request_latency;
    m_responseFromDir_ptr = p->responseFromDir;
    m_requestToDir_ptr = p->requestToDir;
    m_mandatoryQueue_ptr = p->mandatoryQueue;

    for (int state = 0; state < DMA_State_NUM; state++) {
        for (int event = 0; event < DMA_Event_NUM; event++) {
            m_possible[state][event] = false;
            m_counters[state][event] = 0;
        }
    }
    for (int event = 0; event < DMA_Event_NUM; event++) {
        m_event_counters[event] = 0;
    }
}

void
DMA_Controller::initNetQueues()
{
    MachineType machine_type = string_to_MachineType("DMA");
    int base M5_VAR_USED = MachineType_base_number(machine_type);

    assert(m_responseFromDir_ptr != NULL);
    m_net_ptr->setFromNetQueue(m_version + base, m_responseFromDir_ptr->getOrdered(), 1,
                                     "response", m_responseFromDir_ptr);
    assert(m_requestToDir_ptr != NULL);
    m_net_ptr->setToNetQueue(m_version + base, m_requestToDir_ptr->getOrdered(), 0,
                                     "request", m_requestToDir_ptr);
}

void
DMA_Controller::init()
{
    // initialize objects
    m_cur_state_ptr  = new DMA_State();
    assert(m_cur_state_ptr != NULL);
    *m_cur_state_ptr = DMA_State_READY; // Type State default


    (*m_mandatoryQueue_ptr).setConsumer(this);
    (*m_responseFromDir_ptr).setConsumer(this);

    possibleTransition(DMA_State_READY, DMA_Event_ReadRequest);
    possibleTransition(DMA_State_READY, DMA_Event_WriteRequest);
    possibleTransition(DMA_State_BUSY_RD, DMA_Event_Data);
    possibleTransition(DMA_State_BUSY_WR, DMA_Event_Ack);
    AbstractController::init();
    resetStats();
}

Sequencer*
DMA_Controller::getCPUSequencer() const
{
    return NULL;
}

GPUCoalescer*
DMA_Controller::getGPUCoalescer() const
{
    return NULL;
}

void
DMA_Controller::regStats()
{
    AbstractController::regStats();

    if (m_version == 0) {
        for (DMA_Event event = DMA_Event_FIRST;
             event < DMA_Event_NUM; ++event) {
            Stats::Vector *t = new Stats::Vector();
            t->init(m_num_controllers);
            t->name(params()->ruby_system->name() + ".DMA_Controller." +
                DMA_Event_to_string(event));
            t->flags(Stats::pdf | Stats::total | Stats::oneline |
                     Stats::nozero);

            eventVec.push_back(t);
        }

        for (DMA_State state = DMA_State_FIRST;
             state < DMA_State_NUM; ++state) {

            transVec.push_back(std::vector<Stats::Vector *>());

            for (DMA_Event event = DMA_Event_FIRST;
                 event < DMA_Event_NUM; ++event) {

                Stats::Vector *t = new Stats::Vector();
                t->init(m_num_controllers);
                t->name(params()->ruby_system->name() + ".DMA_Controller." +
                        DMA_State_to_string(state) +
                        "." + DMA_Event_to_string(event));

                t->flags(Stats::pdf | Stats::total | Stats::oneline |
                         Stats::nozero);
                transVec[state].push_back(t);
            }
        }
    }
}

void
DMA_Controller::collateStats()
{
    for (DMA_Event event = DMA_Event_FIRST;
         event < DMA_Event_NUM; ++event) {
        for (unsigned int i = 0; i < m_num_controllers; ++i) {
            RubySystem *rs = params()->ruby_system;
            std::map<uint32_t, AbstractController *>::iterator it =
                     rs->m_abstract_controls[MachineType_DMA].find(i);
            assert(it != rs->m_abstract_controls[MachineType_DMA].end());
            (*eventVec[event])[i] =
                ((DMA_Controller *)(*it).second)->getEventCount(event);
        }
    }

    for (DMA_State state = DMA_State_FIRST;
         state < DMA_State_NUM; ++state) {

        for (DMA_Event event = DMA_Event_FIRST;
             event < DMA_Event_NUM; ++event) {

            for (unsigned int i = 0; i < m_num_controllers; ++i) {
                RubySystem *rs = params()->ruby_system;
                std::map<uint32_t, AbstractController *>::iterator it =
                         rs->m_abstract_controls[MachineType_DMA].find(i);
                assert(it != rs->m_abstract_controls[MachineType_DMA].end());
                (*transVec[state][event])[i] =
                    ((DMA_Controller *)(*it).second)->getTransitionCount(state, event);
            }
        }
    }
}

void
DMA_Controller::countTransition(DMA_State state, DMA_Event event)
{
    assert(m_possible[state][event]);
    m_counters[state][event]++;
    m_event_counters[event]++;
}
void
DMA_Controller::possibleTransition(DMA_State state,
                             DMA_Event event)
{
    m_possible[state][event] = true;
}

uint64_t
DMA_Controller::getEventCount(DMA_Event event)
{
    return m_event_counters[event];
}

bool
DMA_Controller::isPossible(DMA_State state, DMA_Event event)
{
    return m_possible[state][event];
}

uint64_t
DMA_Controller::getTransitionCount(DMA_State state,
                             DMA_Event event)
{
    return m_counters[state][event];
}

int
DMA_Controller::getNumControllers()
{
    return m_num_controllers;
}

MessageBuffer*
DMA_Controller::getMandatoryQueue() const
{
    return m_mandatoryQueue_ptr;
}

MessageBuffer*
DMA_Controller::getMemoryQueue() const
{
    return NULL;
}

void
DMA_Controller::print(ostream& out) const
{
    out << "[DMA_Controller " << m_version << "]";
}

void DMA_Controller::resetStats()
{
    for (int state = 0; state < DMA_State_NUM; state++) {
        for (int event = 0; event < DMA_Event_NUM; event++) {
            m_counters[state][event] = 0;
        }
    }

    for (int event = 0; event < DMA_Event_NUM; event++) {
        m_event_counters[event] = 0;
    }

    AbstractController::resetStats();
}

void
DMA_Controller::recordCacheTrace(int cntrl, CacheRecorder* tr)
{
}

// Actions
/** \brief Send a DMA read request to memory */
void
DMA_Controller::s_sendReadRequest(Addr addr)
{
    DPRINTF(RubyGenerated, "executing s_sendReadRequest\n");
    {
    // Declare message
    const SequencerMsg* in_msg_ptr M5_VAR_USED;
    in_msg_ptr = dynamic_cast<const SequencerMsg *>(((*m_mandatoryQueue_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<DMARequestMsg> out_msg = std::make_shared<DMARequestMsg>(clockEdge());
    (*out_msg).m_PhysicalAddress = ((*in_msg_ptr)).m_PhysicalAddress;
    (*out_msg).m_LineAddress = ((*in_msg_ptr)).m_LineAddress;
    (*out_msg).m_Type = DMARequestType_READ;
    (*out_msg).m_Requestor = m_machineID;
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (*out_msg).m_Len = ((*in_msg_ptr)).m_Len;
    (((*out_msg).m_Destination).add((map_Address_to_Directory(addr))));
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Control;
    ((*m_requestToDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_request_latency)));
}
}

}

/** \brief Send a DMA write request to memory */
void
DMA_Controller::s_sendWriteRequest(Addr addr)
{
    DPRINTF(RubyGenerated, "executing s_sendWriteRequest\n");
    {
    // Declare message
    const SequencerMsg* in_msg_ptr M5_VAR_USED;
    in_msg_ptr = dynamic_cast<const SequencerMsg *>(((*m_mandatoryQueue_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
{
    std::shared_ptr<DMARequestMsg> out_msg = std::make_shared<DMARequestMsg>(clockEdge());
    (*out_msg).m_PhysicalAddress = ((*in_msg_ptr)).m_PhysicalAddress;
    (*out_msg).m_LineAddress = ((*in_msg_ptr)).m_LineAddress;
    (*out_msg).m_Type = DMARequestType_WRITE;
    (*out_msg).m_Requestor = m_machineID;
    (*out_msg).m_DataBlk = ((*in_msg_ptr)).m_DataBlk;
    (*out_msg).m_Len = ((*in_msg_ptr)).m_Len;
    (((*out_msg).m_Destination).add((map_Address_to_Directory(addr))));
    (*out_msg).m_MessageSize = MessageSizeType_Writeback_Control;
    ((*m_requestToDir_ptr)).enqueue(out_msg, clockEdge(), cyclesToTicks(Cycles(m_request_latency)));
}
}

}

/** \brief Notify dma controller that write request completed */
void
DMA_Controller::a_ackCallback(Addr addr)
{
    DPRINTF(RubyGenerated, "executing a_ackCallback\n");
    {
    // Declare message
    const DMAResponseMsg* in_msg_ptr M5_VAR_USED;
    in_msg_ptr = dynamic_cast<const DMAResponseMsg *>(((*m_responseFromDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
(((*m_dma_sequencer_ptr)).ackCallback());
}

}

/** \brief Write data to dma sequencer */
void
DMA_Controller::d_dataCallback(Addr addr)
{
    DPRINTF(RubyGenerated, "executing d_dataCallback\n");
    {
    // Declare message
    const DMAResponseMsg* in_msg_ptr M5_VAR_USED;
    in_msg_ptr = dynamic_cast<const DMAResponseMsg *>(((*m_responseFromDir_ptr)).peek());
    if (in_msg_ptr == NULL) {
        // If the cast fails, this is the wrong inport (wrong message type).
        // Throw an exception, and the caller will decide to either try a
        // different inport or punt.
        throw RejectException();
    }
(((*m_dma_sequencer_ptr)).dataCallback(((*in_msg_ptr)).m_DataBlk));
}

}

/** \brief Pop request queue */
void
DMA_Controller::p_popRequestQueue(Addr addr)
{
    DPRINTF(RubyGenerated, "executing p_popRequestQueue\n");
    (((*m_mandatoryQueue_ptr)).dequeue((clockEdge())));

}

/** \brief Pop request queue */
void
DMA_Controller::p_popResponseQueue(Addr addr)
{
    DPRINTF(RubyGenerated, "executing p_popResponseQueue\n");
    (((*m_responseFromDir_ptr)).dequeue((clockEdge())));

}

DMA_State
DMA_Controller::getState(const Addr& param_addr)
{
return (*m_cur_state_ptr);

}
void
DMA_Controller::setState(const Addr& param_addr, const DMA_State& param_state)
{
(*m_cur_state_ptr) = param_state;

}
AccessPermission
DMA_Controller::getAccessPermission(const Addr& param_addr)
{
return AccessPermission_NotPresent;

}
void
DMA_Controller::setAccessPermission(const Addr& param_addr, const DMA_State& param_state)
{

}
void
DMA_Controller::functionalRead(const Addr& param_addr, Packet* param_pkt)
{
panic("Runtime Error at MI_example-dma.sm:74: %s.\n", ("DMA does not support functional read."));
;

}
int
DMA_Controller::functionalWrite(const Addr& param_addr, Packet* param_pkt)
{
panic("Runtime Error at MI_example-dma.sm:78: %s.\n", ("DMA does not support functional write."));
;

}
int
DMA_Controller::functionalWriteBuffers(PacketPtr& pkt)
{
    int num_functional_writes = 0;
num_functional_writes += m_responseFromDir_ptr->functionalWrite(pkt);
num_functional_writes += m_requestToDir_ptr->functionalWrite(pkt);
num_functional_writes += m_mandatoryQueue_ptr->functionalWrite(pkt);
    return num_functional_writes;
}
