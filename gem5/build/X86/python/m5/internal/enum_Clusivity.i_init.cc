#include "sim/init.hh"

extern "C" {
    void init_enum_Clusivity();
}

EmbeddedSwig embed_swig_enum_Clusivity(init_enum_Clusivity);
