#include "sim/init.hh"

extern "C" {
    void init_param_ThermalCapacitor();
}

EmbeddedSwig embed_swig_param_ThermalCapacitor(init_param_ThermalCapacitor);
