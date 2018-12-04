#include "sim/init.hh"

extern "C" {
    void init_param_ThermalDomain();
}

EmbeddedSwig embed_swig_param_ThermalDomain(init_param_ThermalDomain);
