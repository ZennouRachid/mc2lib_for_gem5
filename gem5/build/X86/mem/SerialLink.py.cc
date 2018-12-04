#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SerialLink[] = {
    120,156,173,83,77,115,211,64,12,149,147,38,141,147,0,37,
    112,199,220,12,3,113,97,232,141,97,40,195,177,148,78,82,
    152,161,23,207,214,171,196,110,119,237,224,221,64,195,181,92,
    248,213,32,201,13,245,129,35,222,88,89,201,250,120,251,164,
    205,224,230,233,210,251,150,94,247,138,132,166,95,0,6,224,
    148,119,29,48,1,216,0,206,2,8,116,23,48,128,69,0,
    122,7,126,2,92,3,124,57,235,128,238,193,60,238,83,96,
    241,155,158,56,160,157,103,241,180,217,134,36,62,160,253,120,
    126,129,153,247,67,210,230,88,23,202,28,21,229,101,214,6,
    240,142,1,252,34,129,192,213,168,56,39,167,202,84,117,135,
    129,92,211,190,7,216,7,194,193,251,93,192,1,92,132,140,
    134,48,92,119,224,108,216,178,244,197,50,18,203,24,244,46,
    232,129,88,238,0,222,133,139,123,128,123,176,164,42,161,24,
    239,111,3,135,160,71,98,153,192,108,30,143,9,205,172,195,
    184,38,36,44,218,196,9,246,212,16,248,105,158,59,57,142,
    81,223,48,90,85,181,119,35,62,171,114,30,107,209,139,61,
    14,141,72,156,230,24,149,107,123,78,31,170,69,84,227,215,
    53,58,239,34,95,69,231,235,197,2,107,247,248,31,78,110,
    85,149,14,91,94,158,105,218,47,157,123,116,227,109,148,199,
    50,219,176,187,207,11,23,181,208,185,41,249,28,106,77,105,
    92,84,171,114,217,36,90,41,82,125,94,87,235,101,78,255,
    216,14,41,184,95,238,144,196,241,95,20,43,85,43,99,208,
    80,169,146,50,20,165,43,52,182,2,133,136,40,86,151,106,
    42,46,209,247,66,251,252,73,252,128,91,63,32,145,166,165,
    178,152,166,210,249,52,181,149,94,27,86,119,216,97,179,66,
    177,103,87,87,105,142,74,211,17,195,45,163,39,68,160,239,
    49,34,214,196,173,161,86,62,240,188,89,81,197,231,132,96,
    90,169,247,137,16,46,75,212,162,16,209,169,43,126,160,100,
    101,66,27,109,151,180,163,134,58,137,214,104,212,198,115,243,
    62,211,140,86,117,147,45,188,33,112,198,228,53,154,49,52,
    201,85,189,145,242,13,169,242,129,186,150,10,65,49,15,243,
    173,144,251,148,228,149,197,164,86,89,94,232,228,125,149,173,
    45,150,222,37,75,180,7,207,241,69,226,234,44,225,201,186,
    189,21,211,213,70,134,238,37,103,120,72,162,31,240,26,211,
    154,200,26,7,97,247,56,238,110,111,151,61,152,114,155,172,
    155,5,219,121,253,95,56,132,197,215,77,211,222,60,227,76,
    220,183,97,176,215,251,3,234,108,8,22,
};

EmbeddedPython embedded_m5_objects_SerialLink(
    "m5/objects/SerialLink.py",
    "/home/rachid/Documents/gem5-e1/src/mem/SerialLink.py",
    "m5.objects.SerialLink",
    data_m5_objects_SerialLink,
    587,
    1084);

} // anonymous namespace
