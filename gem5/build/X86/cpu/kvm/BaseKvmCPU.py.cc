#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BaseKvmCPU[] = {
    120,156,181,85,219,110,219,70,16,29,82,23,91,242,69,142,
    115,233,229,161,216,38,64,64,23,169,136,4,48,16,32,69,
    211,88,117,154,160,149,98,208,78,208,234,133,96,150,35,75,
    49,201,85,184,75,69,12,250,150,126,98,63,164,127,208,206,
    44,197,218,53,250,18,212,37,181,163,157,179,183,51,103,118,
    151,18,86,79,131,202,119,84,244,136,76,76,63,7,18,128,
    147,85,205,169,106,46,36,46,164,46,140,93,112,216,111,64,
    210,128,180,1,227,6,249,77,64,23,38,14,196,45,248,13,
    224,3,192,47,227,38,196,109,56,246,214,104,202,217,159,244,
    120,14,213,12,155,175,170,42,183,28,68,26,7,71,47,43,
    160,69,230,199,69,250,106,104,186,171,38,242,168,85,94,228,
    121,192,60,127,39,131,0,99,135,217,18,33,162,73,52,176,
    9,227,22,96,155,185,50,11,2,215,172,219,168,221,117,235,
    54,107,183,99,221,86,237,118,173,219,174,221,13,192,77,120,
    179,5,184,13,111,122,16,175,193,7,10,126,199,130,215,0,
    119,33,94,183,200,245,11,72,199,34,55,46,32,93,139,220,
    180,200,45,136,55,32,222,180,200,39,22,249,20,226,45,136,
    183,45,242,25,4,199,94,143,2,11,56,76,205,53,57,47,
    252,179,69,234,191,38,41,250,211,169,116,9,171,203,128,59,
    109,147,249,213,225,240,137,48,103,229,216,227,182,145,254,156,
    236,157,89,38,147,34,70,113,251,210,60,183,61,22,211,246,
    52,188,150,76,180,105,242,191,138,177,106,98,163,31,146,241,
    167,42,69,63,143,228,116,22,251,223,43,89,164,152,25,237,
    159,98,186,255,53,222,247,117,46,253,122,242,243,124,245,231,
    165,97,2,184,156,171,220,132,41,154,169,138,67,185,92,134,
    243,28,99,164,229,238,243,252,188,62,184,31,25,84,87,216,
    103,161,102,177,136,139,116,238,237,9,169,50,109,30,117,207,
    131,10,56,152,160,85,7,114,5,209,108,95,142,70,239,243,
    156,77,27,65,195,149,188,125,235,50,168,91,40,128,21,115,
    115,141,108,100,84,58,147,97,166,50,201,4,178,211,138,156,
    83,19,190,42,174,27,52,56,197,84,229,101,152,82,66,31,
    93,144,250,95,105,26,22,152,145,209,249,41,124,26,37,26,
    175,158,26,203,152,227,219,98,150,99,200,34,160,126,252,177,
    236,24,59,201,139,255,129,28,231,72,23,115,155,100,19,157,
    97,168,22,152,15,206,249,233,59,124,61,189,26,10,250,121,
    179,62,246,239,9,61,141,104,67,139,74,109,17,171,52,154,
    101,123,250,75,234,247,82,35,237,203,40,65,45,169,195,112,
    248,252,133,240,14,127,62,58,12,158,15,15,71,39,79,126,
    218,211,254,170,215,28,243,137,192,5,145,20,188,224,36,81,
    239,104,100,145,25,204,245,229,49,123,52,230,73,242,46,42,
    181,208,101,38,133,153,230,24,197,124,0,12,46,141,22,42,
    19,52,79,94,250,184,156,25,43,213,131,31,158,189,215,55,
    168,242,76,105,35,100,162,228,153,152,112,10,48,147,229,105,
    117,171,254,241,88,239,178,228,165,76,80,104,73,164,197,36,
    146,70,229,30,31,56,179,78,38,12,179,40,197,48,180,23,
    115,200,251,170,72,216,181,25,42,231,104,113,62,224,83,226,
    131,121,176,89,15,140,94,107,67,185,48,118,87,202,36,210,
    186,58,63,65,155,211,199,95,128,160,195,134,155,131,173,122,
    251,29,69,121,148,6,246,126,106,87,46,133,101,175,170,40,
    43,109,143,51,251,153,224,229,15,148,74,2,94,222,236,144,
    41,232,115,82,203,206,170,155,94,5,30,145,178,47,86,242,
    26,102,23,89,25,143,73,197,147,129,157,113,192,218,88,206,
    83,146,234,41,105,84,157,132,68,69,198,134,103,225,74,151,
    191,119,220,127,223,118,246,178,191,199,179,124,65,166,237,216,
    215,237,53,123,109,42,244,222,116,118,233,237,56,29,119,215,
    25,121,204,200,176,96,233,126,127,206,34,105,203,152,189,92,
    45,203,192,30,10,123,5,54,254,65,241,10,142,7,175,243,
    77,149,248,111,239,242,108,12,116,157,174,187,227,236,184,127,
    1,181,140,210,118,
};

EmbeddedPython embedded_m5_objects_BaseKvmCPU(
    "m5/objects/BaseKvmCPU.py",
    "/home/rachid/Documents/gem5-e1/src/cpu/kvm/BaseKvmCPU.py",
    "m5.objects.BaseKvmCPU",
    data_m5_objects_BaseKvmCPU,
    933,
    2122);

} // anonymous namespace
