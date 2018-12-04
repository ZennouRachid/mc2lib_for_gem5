#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Device[] = {
    120,156,173,86,219,110,35,69,16,237,113,124,183,147,152,132,
    141,224,1,169,145,208,50,90,68,156,0,27,173,4,66,108,
    20,173,20,65,200,202,222,125,32,47,163,206,116,197,30,103,
    46,102,186,157,196,188,240,16,190,129,79,225,247,66,85,245,
    120,176,3,17,43,136,199,110,117,159,190,84,213,169,234,227,
    9,69,241,89,195,223,119,248,51,191,99,163,241,235,137,88,
    136,55,69,207,115,189,138,136,43,34,169,136,179,138,240,244,
    154,128,138,184,240,132,174,138,223,132,184,21,226,167,179,53,
    161,107,2,214,24,173,151,104,85,232,198,2,109,150,104,77,
    232,150,128,42,163,237,18,173,11,221,17,80,103,180,91,162,
    13,161,215,197,208,223,64,215,162,59,252,248,30,246,44,53,
    207,92,183,133,205,9,36,167,231,19,8,45,143,94,71,217,
    17,92,69,33,132,203,17,30,82,132,95,99,3,66,156,121,
    20,39,134,130,1,162,231,232,10,250,132,166,49,202,91,68,
    208,229,166,152,160,139,109,49,233,8,140,246,22,227,238,138,
    193,208,175,226,254,65,133,78,234,17,87,112,213,143,178,64,
    179,177,221,241,216,108,147,245,60,27,229,42,73,64,203,227,
    254,169,156,102,185,53,31,33,62,156,27,11,137,180,227,200,
    72,183,67,98,111,170,114,43,179,11,127,157,66,105,98,19,
    4,169,74,32,8,108,155,7,73,166,103,49,13,201,178,157,
    79,129,241,240,230,38,24,131,210,144,51,254,38,159,1,111,
    86,231,198,230,170,160,97,24,171,43,120,141,230,45,133,63,
    141,50,91,35,247,20,58,103,235,165,67,220,69,16,82,183,
    78,165,115,134,12,207,250,196,222,95,141,217,195,166,63,206,
    18,232,163,153,113,164,251,71,89,56,75,112,175,233,143,32,
    121,254,57,236,247,77,30,246,137,24,151,130,221,233,156,249,
    250,152,118,147,235,117,207,61,93,207,82,78,15,149,137,194,
    255,158,176,73,99,145,179,38,15,91,148,45,172,74,74,88,
    155,18,70,33,15,122,15,38,140,92,112,166,229,75,173,115,
    48,134,73,218,223,219,75,141,121,114,47,155,167,50,86,22,
    210,112,238,119,232,84,242,113,192,5,193,70,136,180,65,131,
    26,202,196,128,150,112,114,232,92,78,14,102,32,80,52,160,
    69,63,184,147,108,167,152,88,156,252,24,124,247,138,237,43,
    124,111,122,92,20,71,137,186,71,117,101,65,245,211,119,188,
    27,200,42,135,190,243,32,171,20,237,209,201,75,174,125,191,
    249,175,92,113,73,159,40,172,183,188,44,87,157,168,71,225,
    130,156,236,211,238,230,18,23,156,129,99,163,94,169,203,127,
    40,185,63,30,226,97,82,35,18,10,57,168,51,210,160,98,
    67,225,35,164,201,72,139,228,175,64,218,140,116,72,3,11,
    164,203,200,58,137,97,129,108,48,178,41,160,71,162,72,200,
    123,75,72,155,145,45,70,182,73,31,81,25,9,121,127,105,
    205,58,35,79,40,47,84,206,131,15,41,136,205,69,94,140,
    10,46,48,76,76,75,68,20,112,81,15,163,95,0,69,71,
    42,87,242,50,87,233,8,162,59,154,222,225,11,113,161,102,
    177,149,90,89,37,109,38,115,176,179,60,69,245,69,210,72,
    130,137,173,152,242,120,247,171,123,54,133,249,148,44,243,58,
    57,189,180,210,88,101,103,70,158,43,93,26,201,82,169,194,
    16,123,230,25,174,125,59,197,211,1,213,16,10,51,99,101,
    73,15,157,45,188,109,184,252,58,143,44,24,203,201,167,243,
    135,54,143,210,17,121,52,197,142,149,215,99,72,151,164,212,
    157,14,218,124,207,217,93,81,90,212,68,218,26,71,151,216,
    151,9,36,89,62,151,42,213,184,8,221,76,212,92,142,192,
    226,76,136,149,5,184,44,5,105,144,36,141,254,252,236,239,
    60,84,193,44,3,91,11,229,166,107,76,155,88,65,222,30,
    167,246,5,223,56,140,40,160,16,95,176,172,18,190,127,192,
    21,191,152,192,225,98,230,203,47,86,102,112,184,152,57,248,
    106,101,6,135,228,203,97,150,197,108,238,149,138,13,216,110,
    177,2,105,119,74,67,14,206,152,105,222,229,100,159,89,228,
    169,107,149,167,129,163,141,35,160,66,9,146,71,82,125,42,
    195,3,218,253,65,121,243,182,238,61,45,119,19,15,149,38,
    145,252,251,77,148,247,110,34,190,72,76,170,2,106,116,37,
    221,29,196,154,39,253,138,202,26,121,199,26,244,27,171,57,
    221,46,211,249,73,41,77,79,87,72,248,31,76,124,70,119,
    138,118,87,11,38,126,100,81,228,234,72,158,239,78,233,31,
    217,37,128,70,121,118,51,31,208,155,13,255,111,178,152,179,
    138,49,161,124,214,99,56,197,230,190,113,111,23,223,210,235,
    9,255,21,182,189,182,215,171,236,52,248,217,248,19,76,158,
    48,114,
};

EmbeddedPython embedded_m5_objects_Device(
    "m5/objects/Device.py",
    "/home/rachid/Documents/gem5-e1/src/dev/Device.py",
    "m5.objects.Device",
    data_m5_objects_Device,
    1074,
    2593);

} // anonymous namespace
