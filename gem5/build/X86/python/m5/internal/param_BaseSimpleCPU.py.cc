#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseSimpleCPU[] = {
    120,156,189,88,221,115,219,198,17,223,3,63,36,210,146,77,
    249,251,67,182,144,196,138,153,164,22,237,216,110,210,198,117,
    43,219,153,142,59,137,162,64,238,88,86,58,197,64,192,137,
    4,5,2,28,224,100,155,25,105,218,137,60,109,250,208,183,
    246,177,79,125,105,223,251,255,181,187,123,0,117,164,169,140,
    167,173,100,139,199,229,221,222,221,222,254,246,235,206,135,252,
    95,5,63,191,192,79,246,55,11,32,192,63,1,17,64,79,
    192,134,5,66,90,16,156,129,237,10,164,119,33,168,192,107,
    128,141,18,200,18,236,35,81,134,111,74,16,223,2,226,57,
    203,60,235,16,76,77,226,153,225,117,167,33,42,115,143,5,
    131,58,200,10,108,84,225,89,60,7,101,57,5,219,117,72,
    95,131,16,34,22,176,62,104,20,252,211,176,81,67,158,171,
    200,83,103,158,127,17,79,62,88,163,65,226,15,106,16,212,
    225,53,74,124,2,130,19,44,0,238,56,195,196,44,4,179,
    76,156,132,224,36,19,167,138,197,27,176,49,87,208,167,13,
    250,140,65,159,53,232,115,6,125,222,160,47,24,244,69,131,
    190,100,208,151,13,250,138,65,207,27,244,85,131,190,102,208,
    11,6,109,27,244,59,6,253,174,65,191,103,208,215,13,122,
    209,160,223,55,232,27,6,221,52,232,15,12,250,67,131,254,
    200,160,127,196,244,41,144,115,208,189,9,221,37,232,182,96,
    75,64,208,32,85,163,1,60,223,64,251,40,67,247,54,108,
    220,6,137,127,183,96,95,128,8,230,140,25,31,243,140,211,
    195,25,119,120,198,93,216,184,11,18,255,238,232,25,211,176,
    214,60,135,102,26,254,27,255,53,5,82,106,6,155,23,50,
    205,194,36,118,195,120,43,9,45,26,159,162,134,12,219,167,
    166,148,91,248,35,178,240,62,176,121,163,236,104,225,123,184,
    130,128,46,26,175,69,59,4,37,184,180,39,232,71,183,4,
    187,72,148,97,139,7,186,229,156,99,15,237,118,14,118,1,
    186,21,216,229,158,181,103,241,21,40,171,42,155,230,54,153,
    166,30,197,185,52,186,142,27,173,53,105,247,21,150,90,145,
    212,75,44,155,58,139,141,219,247,82,175,231,62,244,50,185,
    22,246,250,145,124,180,250,235,38,137,175,106,116,134,94,63,
    73,85,20,110,170,105,226,117,99,175,39,93,87,213,241,71,
    138,19,85,168,240,220,170,140,63,187,73,24,163,16,120,170,
    76,165,97,95,205,14,103,187,189,36,216,137,164,58,129,61,
    79,184,231,243,52,77,210,38,105,197,161,70,81,211,223,110,
    43,146,178,71,91,52,73,60,110,50,7,155,86,39,233,201,
    86,234,249,157,48,104,61,78,252,157,158,140,85,214,106,203,
    222,189,155,242,118,107,115,39,140,130,214,250,167,63,110,245,
    7,170,147,196,173,222,189,22,10,35,211,216,139,90,19,142,
    183,132,108,167,105,237,151,97,219,205,101,236,200,168,47,83,
    58,114,118,146,246,21,51,226,140,184,38,74,98,78,204,138,
    176,90,32,57,101,34,249,143,28,73,43,143,85,8,166,200,
    145,181,96,143,9,130,171,73,72,18,128,37,194,13,15,137,
    176,180,5,236,91,240,155,18,49,236,97,91,198,0,115,109,
    136,98,151,3,140,94,105,10,246,16,233,10,2,249,237,60,
    47,52,205,11,89,176,139,45,66,92,134,61,140,96,200,137,
    93,216,110,215,32,253,59,209,221,26,25,178,136,1,214,119,
    171,104,1,229,161,5,104,187,165,147,4,97,74,218,118,200,
    100,155,245,162,55,201,150,250,158,234,56,179,5,52,168,34,
    134,120,37,137,53,138,91,97,28,20,168,106,187,216,10,35,
    180,11,135,244,199,171,49,91,148,120,67,54,82,154,31,37,
    153,100,219,226,181,157,83,196,72,220,91,125,94,134,118,37,
    121,120,114,32,51,159,236,8,237,75,175,72,18,208,106,71,
    110,27,14,185,52,185,70,118,153,45,161,129,182,80,69,75,
    104,162,37,204,136,10,82,243,214,140,56,41,86,66,82,164,
    79,39,35,251,40,23,102,241,79,208,96,8,216,182,32,157,
    103,103,197,63,65,136,145,71,238,178,183,211,216,215,116,124,
    221,139,254,142,176,234,206,93,54,20,180,24,228,188,79,238,
    139,32,18,242,21,232,86,115,152,209,120,180,89,164,3,106,
    145,157,150,177,112,241,50,100,127,5,84,39,226,191,11,185,
    157,236,151,208,16,26,128,110,139,65,1,123,207,227,134,223,
    177,121,229,145,129,113,87,157,48,75,94,106,111,38,154,67,
    219,26,250,200,234,224,171,205,174,244,85,182,128,29,207,147,
    29,219,247,226,56,81,182,23,4,182,167,208,219,55,119,148,
    204,108,149,216,139,89,147,176,115,46,23,166,51,92,111,208,
    151,14,19,218,94,130,208,87,24,71,206,240,15,246,195,76,
    42,68,190,147,4,25,246,211,212,182,84,78,131,102,144,114,
    19,22,128,13,195,37,86,218,22,249,200,85,151,11,9,116,
    84,169,22,182,146,201,104,139,3,149,31,121,89,230,146,4,
    220,207,22,70,167,126,225,69,59,146,87,207,112,61,20,136,
    72,45,195,209,199,159,139,116,146,226,224,124,154,56,137,131,
    1,10,23,250,119,104,223,139,121,20,34,235,59,135,150,55,
    133,109,21,191,171,226,188,229,151,115,123,171,22,54,119,158,
    78,13,140,184,200,65,71,251,219,199,176,209,180,216,241,249,
    64,100,175,206,135,68,209,100,231,58,53,139,212,188,79,205,
    141,226,204,71,122,240,217,241,131,179,252,22,159,214,47,229,
    231,26,250,210,55,35,190,116,233,192,151,48,182,173,237,114,
    230,236,150,12,159,40,209,201,211,7,185,11,145,183,33,212,
    232,109,196,202,190,131,233,212,180,126,218,112,197,185,68,91,
    189,131,205,141,197,236,134,173,109,205,238,120,153,29,39,7,
    6,110,211,160,142,94,100,222,206,60,169,220,48,224,182,97,
    192,142,77,28,100,189,206,123,212,148,15,211,249,7,199,172,
    243,182,214,249,47,105,179,153,220,194,102,217,178,234,194,39,
    243,32,32,134,9,238,107,108,6,23,72,251,166,222,47,96,
    106,123,22,95,198,108,197,202,167,132,117,135,19,22,39,61,
    174,133,139,0,214,173,20,68,149,32,216,42,193,249,60,19,
    101,148,42,250,105,242,106,96,39,91,182,130,66,160,251,139,
    217,210,98,246,25,70,18,251,193,129,178,243,168,145,202,62,
    121,189,142,2,164,8,21,198,248,155,150,250,252,149,47,57,
    89,240,47,215,213,78,175,43,21,55,79,66,136,11,3,97,
    21,64,112,216,195,114,133,162,221,209,163,80,31,162,64,231,
    88,165,157,234,12,65,73,92,64,55,55,0,160,15,89,102,
    70,230,245,71,224,210,84,192,31,128,244,139,106,204,125,154,
    189,165,240,24,226,204,126,11,236,255,19,50,143,174,20,41,
    219,48,7,186,74,246,9,179,234,68,244,43,248,222,8,30,
    69,186,40,229,37,139,233,48,229,161,195,48,48,111,149,18,
    202,163,62,67,74,71,231,34,54,246,14,93,8,94,31,141,
    67,92,163,176,14,164,58,82,84,166,245,30,46,137,243,252,
    0,19,10,188,87,196,25,75,155,5,91,204,39,212,124,58,
    116,88,81,244,29,149,100,11,227,145,210,72,17,174,14,53,
    235,180,125,153,5,62,53,197,110,62,178,10,151,172,144,123,
    244,67,226,253,24,27,137,247,79,193,23,102,160,235,14,90,
    11,181,22,129,189,111,9,188,54,99,145,240,154,175,205,250,
    122,236,232,34,129,173,179,248,112,120,160,253,70,2,50,235,
    100,69,107,107,136,183,134,146,154,87,71,239,99,132,230,253,
    200,235,109,6,222,131,223,211,62,180,153,95,248,148,85,72,
    222,48,37,39,127,16,135,9,207,63,63,43,78,240,226,232,
    139,207,251,184,236,80,114,246,128,32,241,57,16,60,237,72,
    187,39,123,155,120,217,236,132,125,123,43,242,218,140,73,41,
    63,217,87,197,201,20,131,106,56,45,135,139,140,18,255,74,
    98,251,73,140,33,111,199,87,73,106,7,18,75,121,25,216,
    55,109,142,151,118,152,217,222,38,142,122,190,210,246,61,234,
    159,92,63,121,105,59,227,82,105,251,37,145,199,131,169,139,
    119,235,16,43,198,239,96,88,44,232,236,192,177,133,10,38,
    174,5,181,187,96,90,193,187,156,26,232,48,181,76,205,61,
    106,90,96,38,219,35,69,241,167,184,236,239,104,125,82,84,
    85,92,177,106,22,215,10,35,140,171,52,55,123,211,73,159,
    191,141,147,202,50,108,84,136,65,86,161,59,197,237,52,197,
    245,141,90,225,191,117,238,60,193,239,80,149,252,29,10,125,
    185,250,191,250,50,187,195,241,56,194,159,254,175,46,236,252,
    236,248,5,119,30,64,158,199,15,115,223,145,138,235,177,118,
    95,141,1,102,251,193,89,62,100,241,30,68,143,80,252,18,
    169,184,182,162,210,235,231,252,226,195,21,154,107,233,234,235,
    0,61,194,90,223,158,47,96,19,203,151,238,4,3,212,21,
    22,177,122,253,190,140,3,231,22,205,186,13,102,165,196,60,
    71,175,58,242,213,63,131,145,132,75,226,44,38,226,55,205,
    149,220,222,56,39,155,101,99,104,160,215,143,13,231,191,20,
    56,55,79,142,68,35,135,28,89,199,159,97,232,209,64,188,
    59,57,10,184,155,169,23,251,157,213,84,6,84,164,191,13,
    27,86,5,92,83,30,116,177,254,20,65,21,200,72,42,57,
    9,109,69,106,202,175,44,129,196,88,159,12,176,76,158,226,
    78,156,229,186,199,20,33,9,198,239,33,175,250,49,66,226,
    21,228,156,85,171,214,4,167,155,177,87,84,163,175,58,236,
    35,197,234,18,113,192,66,130,34,125,231,41,128,229,112,205,
    135,89,126,214,209,24,240,99,83,145,36,8,41,190,52,172,
    120,61,253,134,192,227,249,245,34,211,222,192,15,91,148,64,
    157,143,168,185,57,4,246,39,52,155,174,142,189,123,75,197,
    145,151,242,35,15,113,9,41,217,242,75,87,239,158,186,50,
    145,25,117,163,31,89,212,220,216,120,144,122,72,159,27,235,
    205,100,26,122,81,248,173,228,67,79,216,28,245,141,154,230,
    119,134,55,71,17,170,167,95,60,84,215,15,27,92,245,232,
    162,184,25,201,103,94,180,141,90,154,188,202,218,32,83,178,
    247,198,129,100,188,211,115,191,148,189,36,29,124,153,4,82,
    205,143,141,47,7,65,234,120,113,91,34,60,172,152,113,245,
    45,231,37,136,94,163,224,178,39,202,48,202,123,136,114,113,
    48,87,238,194,196,241,71,81,226,111,203,32,231,185,122,56,
    207,227,164,71,96,140,159,104,8,94,33,235,181,137,75,96,
    6,72,123,94,68,74,137,126,0,54,66,102,92,78,196,228,
    139,196,247,162,229,62,214,254,63,184,137,201,121,136,206,112,
    147,208,95,13,147,199,242,69,232,203,67,116,118,48,62,46,
    41,238,240,100,109,185,144,226,80,3,67,30,14,69,230,224,
    163,100,135,200,98,238,184,30,245,220,39,88,159,62,69,76,
    209,238,198,231,175,166,137,47,241,94,159,207,159,172,195,156,
    137,189,184,24,226,187,209,168,103,76,229,17,22,105,46,215,
    120,179,145,48,197,161,36,149,237,16,205,60,29,222,174,14,
    242,38,133,48,86,241,164,64,109,206,61,158,144,170,47,63,
    250,169,227,1,191,108,164,216,208,251,97,109,186,134,225,21,
    191,79,225,183,133,89,213,42,137,186,152,21,101,252,110,224,
    119,195,154,105,212,202,181,26,242,157,152,17,255,221,255,5,
    12,221,117,107,97,182,38,254,3,134,222,202,121,
};

EmbeddedPython embedded_m5_internal_param_BaseSimpleCPU(
    "m5/internal/param_BaseSimpleCPU.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_BaseSimpleCPU.py",
    "m5.internal.param_BaseSimpleCPU",
    data_m5_internal_param_BaseSimpleCPU,
    2573,
    7637);

} // anonymous namespace