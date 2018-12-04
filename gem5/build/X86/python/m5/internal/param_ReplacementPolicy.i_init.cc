#include "sim/init.hh"

extern "C" {
    void init_param_ReplacementPolicy();
}

EmbeddedSwig embed_swig_param_ReplacementPolicy(init_param_ReplacementPolicy);
