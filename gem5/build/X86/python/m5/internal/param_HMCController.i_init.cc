#include "sim/init.hh"

extern "C" {
    void init_param_HMCController();
}

EmbeddedSwig embed_swig_param_HMCController(init_param_HMCController);
