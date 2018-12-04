#include "sim/init.hh"

extern "C" {
    void init_param_SerialLink();
}

EmbeddedSwig embed_swig_param_SerialLink(init_param_SerialLink);
