#include "sim/init.hh"

extern "C" {
    void init_param_BaseMemProbe();
}

EmbeddedSwig embed_swig_param_BaseMemProbe(init_param_BaseMemProbe);
