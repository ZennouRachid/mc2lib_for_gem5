#include "sim/init.hh"

extern "C" {
    void init_param_StackDistProbe();
}

EmbeddedSwig embed_swig_param_StackDistProbe(init_param_StackDistProbe);
