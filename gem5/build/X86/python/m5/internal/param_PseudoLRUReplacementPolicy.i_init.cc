#include "sim/init.hh"

extern "C" {
    void init_param_PseudoLRUReplacementPolicy();
}

EmbeddedSwig embed_swig_param_PseudoLRUReplacementPolicy(init_param_PseudoLRUReplacementPolicy);
