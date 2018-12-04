#include "sim/init.hh"

extern "C" {
    void init_SimObject_vector();
}

EmbeddedSwig embed_swig_SimObject_vector(init_SimObject_vector);
