#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimPoint[] = {
    120,156,181,82,223,139,211,64,16,158,164,109,122,87,68,252,
    129,143,194,62,73,42,152,32,220,9,7,114,72,240,69,16,
    61,90,45,216,151,144,110,166,205,158,217,108,216,221,200,221,
    189,158,255,168,127,132,207,58,179,189,162,224,179,75,118,152,
    153,204,126,243,205,183,43,225,110,141,104,191,161,237,78,200,
    212,244,69,208,2,124,98,47,134,54,2,29,195,58,134,168,
    30,1,198,176,141,160,30,195,119,128,91,128,47,235,17,212,
    19,88,166,9,29,84,191,104,165,17,121,158,205,243,189,251,
    152,204,133,53,27,124,175,156,199,14,237,199,205,37,74,239,
    143,40,191,84,250,194,168,206,203,191,137,20,76,228,156,12,
    2,172,35,166,67,189,137,17,183,34,30,99,192,9,92,38,
    64,100,136,198,45,101,166,33,115,196,68,234,36,100,142,97,
    177,76,167,140,115,118,232,46,182,198,10,105,218,150,122,171,
    110,39,14,173,69,81,57,37,69,209,26,249,85,172,232,167,
    177,78,164,69,177,114,243,108,17,51,196,83,50,178,31,114,
    167,116,223,98,222,51,154,11,17,159,207,154,70,193,143,159,
    19,247,132,202,222,117,30,237,183,170,37,244,27,20,169,234,
    156,119,115,119,159,81,14,229,155,77,182,187,113,15,121,206,
    98,37,82,51,248,126,240,115,177,85,45,166,51,214,139,117,
    41,203,174,210,88,150,126,22,2,109,234,161,229,112,26,194,
    218,72,242,199,92,124,221,99,168,145,87,87,101,131,85,141,
    214,79,120,226,202,86,218,243,157,124,38,74,175,78,2,168,
    186,35,23,242,75,111,73,5,127,143,92,26,136,187,151,129,
    2,95,194,31,227,248,81,228,141,209,152,219,74,54,170,206,
    223,26,57,104,236,188,203,119,168,79,95,224,203,220,89,153,
    255,43,207,65,222,172,191,14,42,206,25,141,153,38,81,18,
    243,126,20,125,72,195,8,199,100,244,105,214,51,101,183,103,
    207,16,11,126,60,225,232,255,224,20,4,121,189,215,245,252,
    25,163,50,151,89,244,32,254,13,164,233,189,170,
};

EmbeddedPython embedded_m5_objects_SimPoint(
    "m5/objects/SimPoint.py",
    "/home/rachid/Documents/gem5-e1/src/cpu/simple/probes/SimPoint.py",
    "m5.objects.SimPoint",
    data_m5_objects_SimPoint,
    461,
    788);

} // anonymous namespace