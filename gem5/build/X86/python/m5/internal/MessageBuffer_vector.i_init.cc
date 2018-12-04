#include "sim/init.hh"

extern "C" {
    void init_MessageBuffer_vector();
}

EmbeddedSwig embed_swig_MessageBuffer_vector(init_MessageBuffer_vector);
