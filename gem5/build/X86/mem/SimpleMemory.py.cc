#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleMemory[] = {
    120,156,173,82,77,111,211,64,16,157,205,87,243,81,129,232,
    149,139,145,56,88,149,106,83,80,43,14,8,65,168,212,11,
    160,170,65,72,228,98,109,188,3,54,242,218,102,119,210,54,
    231,244,127,151,153,77,162,244,196,9,219,59,122,51,154,125,
    243,102,198,57,108,159,46,159,15,124,124,194,198,240,167,160,
    2,248,182,69,138,81,7,80,193,79,5,166,11,247,0,107,
    128,31,243,14,152,30,204,226,62,95,41,31,248,137,21,35,
    18,115,76,135,108,103,165,109,43,252,130,182,113,171,252,113,
    165,169,84,250,206,6,1,230,74,234,9,151,130,121,23,176,
    7,92,106,205,184,15,56,128,223,7,82,144,203,172,59,48,
    31,238,34,125,48,131,16,25,133,200,24,12,7,135,33,50,
    129,235,89,60,98,234,107,209,225,159,177,177,104,83,31,164,
    100,12,147,162,240,19,17,87,233,27,140,218,198,145,167,30,
    251,111,94,213,222,63,151,139,248,103,137,158,34,106,34,135,
    190,109,106,143,81,165,9,235,124,69,34,94,242,94,254,59,
    47,186,209,174,212,117,142,126,200,137,167,175,147,183,151,211,
    212,251,23,236,124,106,236,162,172,209,240,29,109,34,93,155,
    232,214,149,132,209,130,225,109,105,168,136,101,114,36,247,178,
    172,214,22,179,140,198,193,177,141,89,86,226,138,90,90,181,
    24,226,249,221,93,86,48,21,58,26,237,186,186,226,166,66,
    150,116,71,178,158,43,237,180,165,3,70,159,183,157,8,222,
    117,53,217,227,140,149,211,83,246,55,91,155,238,84,5,242,
    189,70,89,228,222,248,115,54,105,209,88,76,157,206,139,210,
    164,23,77,190,180,88,147,79,127,161,61,59,193,211,212,187,
    60,149,69,60,254,39,146,118,21,182,116,34,28,79,216,12,
    148,188,135,234,72,29,117,71,234,107,44,227,14,149,237,89,
    210,74,11,158,36,237,227,194,19,23,162,13,75,160,248,127,
    138,194,232,223,109,134,253,254,88,184,100,146,99,53,238,252,
    5,226,54,194,49,
};

EmbeddedPython embedded_m5_objects_SimpleMemory(
    "m5/objects/SimpleMemory.py",
    "/home/rachid/Documents/gem5-e1/src/mem/SimpleMemory.py",
    "m5.objects.SimpleMemory",
    data_m5_objects_SimpleMemory,
    453,
    813);

} // anonymous namespace
