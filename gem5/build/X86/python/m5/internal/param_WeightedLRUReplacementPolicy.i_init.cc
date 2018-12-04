#include "sim/init.hh"

extern "C" {
    void init_param_WeightedLRUReplacementPolicy();
}

EmbeddedSwig embed_swig_param_WeightedLRUReplacementPolicy(init_param_WeightedLRUReplacementPolicy);
