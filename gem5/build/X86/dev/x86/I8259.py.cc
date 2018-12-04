#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_I8259[] = {
    120,156,173,84,223,107,19,65,16,158,189,36,151,38,109,109,
    81,40,40,8,65,95,14,209,30,85,26,106,17,209,182,130,
    66,91,202,165,130,189,151,227,186,183,233,109,189,31,225,118,
    19,19,232,91,253,191,117,102,46,233,15,124,172,73,110,216,
    157,155,157,249,190,249,102,35,97,254,105,224,243,9,31,115,
    137,38,193,159,128,12,224,116,190,18,245,202,129,204,129,188,
    1,97,3,4,237,27,144,53,33,111,65,216,130,220,133,208,
    69,111,19,84,27,134,2,146,22,252,6,184,6,56,11,151,
    32,113,65,53,216,219,190,241,118,32,89,130,129,215,193,114,
    250,15,126,60,129,43,75,230,85,189,124,132,102,47,54,90,
    158,232,242,64,77,180,84,158,67,254,53,52,63,118,250,223,
    10,59,40,199,149,84,39,186,176,171,183,62,93,252,36,207,
    147,185,103,231,237,246,251,253,216,200,56,81,71,101,162,228,
    93,190,123,196,247,37,26,5,16,10,208,141,57,241,62,18,
    69,110,125,36,131,52,250,161,3,193,192,115,9,40,157,180,
    203,104,56,239,81,108,172,170,52,163,237,46,156,131,44,158,
    40,237,220,11,68,80,23,153,242,168,166,93,66,19,69,69,
    156,171,40,226,83,81,148,151,201,56,163,45,5,228,241,200,
    163,50,183,198,188,67,227,167,101,174,252,42,150,169,78,252,
    131,82,142,115,85,88,227,95,168,124,251,141,218,242,77,37,
    253,68,77,252,233,78,223,231,146,155,163,89,208,196,115,47,
    40,1,97,119,69,87,180,133,109,45,48,253,219,137,179,155,
    78,96,27,144,52,118,2,133,198,94,132,40,106,11,46,81,
    68,151,180,195,214,92,163,179,205,78,20,183,9,215,24,217,
    225,109,23,212,50,53,141,2,86,72,119,148,59,92,165,254,
    181,49,123,64,29,49,11,177,6,159,119,119,25,138,89,167,
    153,155,163,215,140,62,77,205,83,116,158,166,170,55,210,69,
    207,166,218,244,56,182,151,84,122,162,140,121,134,111,191,150,
    191,238,190,193,133,172,149,78,12,201,207,74,212,239,94,247,
    244,176,23,23,51,73,186,208,67,109,216,39,48,20,104,89,
    245,43,30,240,43,129,20,157,1,107,117,108,221,26,24,206,
    30,47,139,113,126,174,42,30,207,128,2,234,129,164,54,27,
    149,13,121,145,233,66,61,92,58,158,4,36,190,69,57,168,
    8,8,143,238,67,64,211,19,116,22,85,237,108,164,44,237,
    228,116,26,201,44,54,134,39,138,118,169,194,62,84,44,247,
    73,92,197,121,192,80,137,68,57,182,163,177,229,225,224,36,
    56,125,138,133,225,221,241,247,195,67,62,101,168,123,193,250,
    189,73,124,216,56,46,207,51,176,220,174,168,191,43,162,35,
    214,196,99,231,216,35,228,76,38,223,222,28,17,100,195,119,
    133,118,85,57,157,49,246,250,127,32,16,139,208,250,206,227,
    125,103,122,172,9,179,248,130,74,49,195,155,162,255,129,0,
    195,249,80,95,214,143,207,41,17,65,238,226,189,90,23,27,
    206,134,251,23,163,143,10,123,
};

EmbeddedPython embedded_m5_objects_I8259(
    "m5/objects/I8259.py",
    "/home/rachid/Documents/gem5-e1/src/dev/x86/I8259.py",
    "m5.objects.I8259",
    data_m5_objects_I8259,
    680,
    1356);

} // anonymous namespace
