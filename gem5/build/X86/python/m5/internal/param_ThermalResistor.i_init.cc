#include "sim/init.hh"

extern "C" {
    void init_param_ThermalResistor();
}

EmbeddedSwig embed_swig_param_ThermalResistor(init_param_ThermalResistor);
