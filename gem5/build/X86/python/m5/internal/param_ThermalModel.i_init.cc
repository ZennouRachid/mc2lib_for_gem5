#include "sim/init.hh"

extern "C" {
    void init_param_ThermalModel();
}

EmbeddedSwig embed_swig_param_ThermalModel(init_param_ThermalModel);
