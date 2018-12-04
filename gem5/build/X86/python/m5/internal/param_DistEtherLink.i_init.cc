#include "sim/init.hh"

extern "C" {
    void init_param_DistEtherLink();
}

EmbeddedSwig embed_swig_param_DistEtherLink(init_param_DistEtherLink);
