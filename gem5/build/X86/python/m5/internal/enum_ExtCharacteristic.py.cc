#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_ExtCharacteristic[] = {
    120,156,189,87,81,111,219,70,18,158,37,41,217,82,236,88,
    142,19,59,118,156,86,69,235,70,109,145,40,105,155,107,138,
    11,130,75,210,180,77,81,184,46,213,34,46,91,148,80,200,
    181,69,89,34,5,114,157,68,7,249,165,14,238,238,15,220,
    47,184,151,187,247,251,127,119,243,13,73,89,9,92,160,47,
    177,108,13,135,203,225,238,236,124,223,204,172,2,42,62,21,
    254,254,133,191,217,175,138,40,228,127,69,3,162,161,34,207,
    34,165,45,10,151,232,160,66,233,167,20,86,232,37,145,103,
    147,182,233,152,21,135,126,182,41,190,73,176,105,136,205,46,
    133,115,167,217,44,200,188,243,52,112,100,196,162,113,157,116,
    133,188,42,61,137,151,201,209,115,116,80,167,244,37,41,165,
    98,69,187,227,70,105,63,79,94,141,109,174,178,77,93,108,
    254,11,155,226,97,13,15,97,31,214,40,172,211,75,246,248,
    28,133,231,196,1,94,113,65,148,69,10,23,69,57,79,225,
    121,81,150,72,59,212,111,144,215,16,101,153,188,101,81,46,
    144,119,65,148,21,242,86,68,185,72,222,69,81,46,145,119,
    73,148,85,242,86,69,89,35,111,77,148,203,228,93,22,101,
    157,188,117,81,54,200,219,16,229,10,121,87,68,217,36,111,
    19,30,119,90,203,28,231,232,127,252,105,113,172,201,44,176,
    120,166,211,44,74,98,63,138,247,146,200,194,243,57,8,32,
    19,64,216,5,68,15,1,209,136,4,31,14,0,67,116,196,
    51,40,234,115,244,45,58,230,65,155,214,143,20,110,250,54,
    77,88,113,104,79,30,244,157,194,226,136,3,191,76,19,162,
    126,133,38,50,210,121,18,95,33,199,84,37,182,7,136,109,
    254,148,223,197,211,93,94,168,211,194,234,219,226,181,129,215,
    55,196,55,179,198,194,215,241,225,208,127,244,194,60,236,117,
    211,110,96,116,26,101,38,10,90,216,129,169,97,27,195,81,
    146,154,65,244,212,204,195,220,143,187,67,237,251,166,206,55,
    233,168,155,154,200,240,214,141,195,183,253,36,138,217,15,222,
    88,102,210,104,100,22,167,111,251,195,36,60,28,104,115,142,
    71,30,203,200,163,52,77,210,22,2,227,66,24,136,209,193,
    190,129,163,67,44,209,130,135,34,178,31,89,180,123,201,80,
    183,217,193,94,20,182,191,72,130,195,161,142,77,214,222,215,
    195,219,215,245,173,246,211,195,104,16,182,119,239,252,169,61,
    26,155,94,18,183,135,183,219,236,140,78,227,238,160,125,250,
    14,111,176,229,5,76,255,60,218,247,11,55,123,122,48,210,
    41,118,157,157,199,210,106,65,173,168,183,148,173,150,213,162,
    138,170,37,158,115,179,120,254,187,192,211,42,82,142,33,85,
    5,190,22,29,137,2,208,90,192,19,48,218,64,143,247,201,
    224,236,43,58,182,232,23,27,6,71,44,29,206,147,183,166,
    88,246,37,79,242,153,230,232,136,241,174,48,156,127,221,148,
    137,230,101,34,139,38,44,25,104,135,142,56,17,217,146,135,
    88,30,212,40,253,23,244,126,13,41,172,98,162,221,73,149,
    121,224,76,121,144,179,23,59,9,163,20,1,119,65,220,86,
    189,28,77,178,27,163,174,233,185,139,37,58,28,34,65,121,
    59,137,115,32,247,162,56,44,129,205,169,177,23,13,152,26,
    46,226,39,179,137,217,32,233,78,205,16,180,96,144,100,90,
    232,37,115,187,75,48,132,245,222,72,166,193,170,240,71,94,
    14,117,22,128,74,76,177,124,70,120,128,217,206,130,30,46,
    114,251,34,150,216,16,50,52,152,14,85,38,67,139,201,176,
    160,42,172,109,90,11,234,188,218,142,16,203,0,155,3,69,
    156,146,25,255,161,28,15,69,7,22,165,155,146,181,252,175,
    0,26,82,115,34,105,143,103,223,35,2,249,40,39,62,35,
    155,15,78,132,43,76,26,182,188,139,60,102,28,1,126,133,
    250,213,2,105,230,79,206,140,116,12,201,230,152,198,226,201,
    29,202,254,73,28,81,166,192,132,10,170,28,219,204,133,6,
    113,242,114,117,224,209,85,94,240,55,97,88,81,34,4,122,
    211,139,178,228,121,158,211,208,165,198,117,56,77,118,198,223,
    61,237,235,192,100,111,243,192,79,201,97,51,232,198,113,98,
    154,221,48,108,118,13,231,252,211,67,163,179,166,73,154,91,
    89,11,240,185,27,37,123,166,243,141,71,218,21,37,167,76,
    24,5,134,171,201,138,220,72,42,102,218,48,248,189,36,204,
    120,28,175,238,107,227,54,240,6,130,155,136,3,194,13,31,
    166,88,150,237,144,173,247,75,15,242,218,82,45,233,146,233,
    193,158,148,171,96,208,205,50,31,30,200,184,144,12,187,126,
    214,29,28,106,153,61,227,249,216,33,168,185,15,103,82,133,
    46,99,51,229,222,101,67,113,18,135,99,246,47,10,62,193,
    210,151,139,90,4,2,94,98,242,205,177,172,242,181,170,86,
    173,192,41,40,87,45,105,183,138,141,147,128,174,10,220,153,
    130,199,92,60,90,150,164,191,236,9,148,117,63,132,134,151,
    221,247,32,182,32,222,135,184,86,110,251,77,239,125,241,245,
    189,203,22,44,217,112,96,23,91,155,102,212,207,175,100,212,
    250,73,70,113,145,235,76,164,145,246,237,153,204,176,177,249,
    244,94,145,72,200,57,6,156,115,14,166,146,65,220,93,103,
    115,0,11,110,187,235,88,234,29,22,215,182,178,107,205,156,
    113,205,94,55,107,198,201,9,205,155,120,152,151,49,144,220,
    221,68,212,103,104,188,63,67,99,183,9,11,112,216,125,23,
    194,249,189,176,127,112,246,97,223,207,195,254,21,214,91,40,
    120,182,40,252,170,171,0,36,1,22,211,102,247,61,139,241,
    26,0,152,13,253,26,183,185,39,241,6,119,46,137,63,154,
    215,39,210,188,164,1,202,241,174,172,100,253,74,169,84,129,
    194,158,77,171,69,87,202,208,54,70,105,242,98,220,76,246,
    154,134,74,135,238,110,101,55,182,178,63,115,73,105,222,59,
    137,119,81,62,82,61,66,250,231,229,0,177,48,81,204,247,
    152,234,209,139,64,75,227,144,59,223,207,179,63,63,184,248,
    69,67,98,104,4,11,171,196,66,234,31,159,94,80,246,206,
    4,136,250,20,8,108,101,7,139,213,5,5,91,173,113,190,
    207,96,128,47,248,153,129,100,127,231,118,169,0,195,223,8,
    33,230,72,22,201,45,57,83,230,13,44,179,95,73,10,193,
    41,93,40,63,62,162,243,136,5,39,76,246,153,152,230,77,
    233,27,250,199,76,21,41,91,135,93,156,96,102,211,198,153,
    166,141,96,243,135,218,131,243,106,230,32,238,156,98,48,147,
    28,201,143,134,239,189,90,144,228,200,34,49,208,230,77,3,
    51,159,47,227,195,163,159,78,96,65,17,190,162,86,172,156,
    28,194,155,207,32,238,76,51,87,149,99,111,208,185,183,95,
    175,154,51,29,195,207,203,206,46,60,112,196,231,165,57,137,
    230,107,191,76,102,198,170,211,177,171,211,8,143,51,23,35,
    102,125,186,84,238,161,63,251,99,71,78,72,249,193,108,62,
    207,94,62,62,155,177,180,227,226,165,114,8,73,184,205,29,
    87,154,179,88,23,233,154,185,55,49,137,28,26,209,143,220,
    143,32,174,67,220,134,248,156,138,62,126,255,225,206,99,241,
    237,254,87,59,50,193,131,36,49,157,17,23,103,120,241,101,
    148,234,231,252,197,160,176,233,241,199,55,69,7,110,223,118,
    252,91,197,45,92,219,214,166,163,211,103,81,144,91,203,241,
    102,200,63,101,30,112,40,117,154,87,199,31,186,41,151,198,
    135,92,62,24,48,241,254,199,206,131,111,245,126,55,24,203,
    244,222,227,29,121,249,18,230,59,13,39,241,57,120,214,77,
    79,234,200,89,112,246,110,94,217,238,73,33,251,154,5,14,
    13,181,249,26,23,116,190,46,241,149,207,172,182,101,115,105,
    89,84,14,95,27,124,109,88,11,141,154,83,171,177,221,185,
    154,58,245,207,250,63,19,30,142,191,
};

EmbeddedPython embedded_m5_internal_enum_ExtCharacteristic(
    "m5/internal/enum_ExtCharacteristic.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/enum_ExtCharacteristic.py",
    "m5.internal.enum_ExtCharacteristic",
    data_m5_internal_enum_ExtCharacteristic,
    1770,
    4205);

} // anonymous namespace
