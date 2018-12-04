#include "sim/init.hh"

namespace {

const uint8_t data_m5_core[] = {
    120,156,165,79,177,10,194,48,16,189,84,7,135,142,46,14,
    226,218,69,131,96,55,17,65,103,5,187,185,149,52,216,150,
    38,41,233,117,16,220,244,191,245,46,84,252,0,143,220,203,
    187,187,188,187,139,130,193,34,242,61,121,55,35,40,232,8,
    104,0,174,68,34,120,17,17,156,201,146,17,85,171,55,217,
    73,9,162,98,80,30,88,57,37,64,128,90,64,29,193,3,
    224,41,64,80,167,44,225,87,167,32,197,9,235,45,106,111,
    243,6,199,20,40,231,53,198,44,215,120,238,177,237,241,88,
    249,160,64,22,20,20,240,122,1,186,13,129,44,157,209,210,
    231,170,172,10,121,116,170,55,218,98,39,111,218,164,75,189,
    150,157,87,178,189,99,233,172,52,169,228,238,171,246,126,225,
    29,23,220,129,9,136,132,175,11,211,80,249,77,248,111,76,
    248,221,214,184,162,111,244,110,254,29,23,71,31,134,103,73,
    40,
};

EmbeddedPython embedded_m5_core(
    "m5/core.py",
    "/home/rachid/Documents/gem5-e1/src/python/m5/core.py",
    "m5.core",
    data_m5_core,
    209,
    357);

} // anonymous namespace