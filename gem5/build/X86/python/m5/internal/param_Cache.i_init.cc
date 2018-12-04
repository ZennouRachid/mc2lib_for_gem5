#include "sim/init.hh"

extern "C" {
    void init_param_Cache();
}

EmbeddedSwig embed_swig_param_Cache(init_param_Cache);
