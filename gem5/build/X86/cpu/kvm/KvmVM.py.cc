#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_KvmVM[] = {
    120,156,173,145,193,78,27,49,16,134,199,222,36,132,0,82,
    47,189,239,9,173,64,205,10,33,78,69,168,84,189,84,85,
    0,37,21,18,123,89,109,237,33,155,52,142,35,219,137,178,
    103,120,239,50,227,77,90,30,160,222,245,175,153,145,236,249,
    230,183,130,221,74,104,127,161,237,111,72,52,253,2,22,0,
    63,119,145,104,35,9,11,9,38,129,34,1,161,19,192,4,
    158,5,232,14,188,2,188,0,60,21,29,208,93,152,100,61,
    186,98,246,135,86,38,40,10,44,103,109,120,72,50,153,153,
    251,95,115,84,33,116,41,251,177,49,143,35,245,158,226,43,
    83,124,38,65,128,66,48,75,33,25,130,154,98,7,230,93,
    192,30,204,15,24,230,69,66,209,7,60,132,249,0,166,132,
    151,196,202,17,140,39,89,135,206,143,37,223,116,66,162,86,
    235,252,247,198,228,27,51,172,235,88,241,141,15,104,82,27,
    65,124,74,21,131,198,186,38,117,213,114,138,62,125,182,46,
    85,182,90,160,87,168,211,209,232,251,125,118,204,3,244,73,
    202,114,89,25,44,203,48,136,137,177,122,189,224,148,123,134,
    102,133,177,174,182,219,178,198,74,163,139,99,62,84,174,50,
    129,141,153,196,206,49,164,34,46,67,224,161,171,101,19,75,
    45,87,56,162,240,145,200,172,107,15,178,111,183,90,187,49,
    211,133,56,210,30,46,178,177,119,255,196,95,146,228,181,53,
    152,187,74,213,51,157,127,179,106,109,168,151,207,167,104,174,
    62,225,69,238,157,202,247,182,196,55,24,174,154,104,216,57,
    95,192,99,246,4,125,242,163,188,203,186,251,167,51,87,195,
    21,243,248,232,3,103,206,110,155,112,220,38,127,31,118,44,
    246,238,255,39,176,216,238,186,53,250,230,148,47,98,175,6,
    98,32,63,200,55,49,4,155,208,
};

EmbeddedPython embedded_m5_objects_KvmVM(
    "m5/objects/KvmVM.py",
    "/home/rachid/Documents/gem5-e1/src/cpu/kvm/KvmVM.py",
    "m5.objects.KvmVM",
    data_m5_objects_KvmVM,
    409,
    706);

} // anonymous namespace
