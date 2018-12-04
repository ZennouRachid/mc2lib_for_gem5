#include "sim/init.hh"

extern "C" {
    void init_param_EtherSwitch();
}

EmbeddedSwig embed_swig_param_EtherSwitch(init_param_EtherSwitch);
