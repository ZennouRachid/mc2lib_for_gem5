#include "sim/init.hh"

extern "C" {
    void init_param_LRUReplacementPolicy();
}

EmbeddedSwig embed_swig_param_LRUReplacementPolicy(init_param_LRUReplacementPolicy);
