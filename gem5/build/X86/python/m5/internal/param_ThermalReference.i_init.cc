#include "sim/init.hh"

extern "C" {
    void init_param_ThermalReference();
}

EmbeddedSwig embed_swig_param_ThermalReference(init_param_ThermalReference);
