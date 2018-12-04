#include "sim/init.hh"

extern "C" {
    void init_X86LocalApic_vector();
}

EmbeddedSwig embed_swig_X86LocalApic_vector(init_X86LocalApic_vector);
