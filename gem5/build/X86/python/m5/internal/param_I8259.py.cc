#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I8259[] = {
    120,156,189,88,91,115,219,198,21,62,11,66,148,72,75,22,
    117,245,77,182,224,198,178,233,118,44,230,82,55,78,227,186,
    117,108,79,199,153,70,118,160,206,88,102,50,197,64,192,138,
    2,69,0,28,96,105,155,25,169,51,173,60,77,31,58,125,
    235,47,200,75,251,222,255,215,158,115,22,128,32,154,154,102,
    166,97,36,114,185,216,61,187,123,46,223,185,44,60,200,254,
    166,240,251,27,252,166,151,12,0,31,63,2,122,0,161,128,
    182,1,66,26,224,47,193,193,20,36,63,7,127,10,222,2,
    180,43,32,43,112,140,29,19,190,170,64,244,62,16,205,50,
    211,236,128,63,61,142,102,150,247,157,129,158,201,35,6,12,
    235,32,167,160,93,133,23,209,2,152,114,26,14,234,144,188,
    5,33,68,36,96,103,216,200,233,103,160,93,67,154,171,72,
    83,103,154,127,19,77,54,89,163,73,162,247,107,224,215,225,
    45,114,124,14,252,115,204,0,158,56,203,157,57,240,231,184,
    115,30,252,243,220,153,207,55,111,64,123,33,239,47,150,250,
    75,165,254,114,169,191,82,234,175,150,250,23,74,253,139,165,
    254,165,82,255,114,169,127,165,212,95,43,245,175,150,250,215,
    74,253,245,82,223,42,245,175,115,127,30,228,2,116,127,2,
    221,247,160,123,3,246,4,248,13,18,19,149,255,178,189,1,
    210,132,238,77,104,223,4,137,159,13,56,22,32,252,133,210,
    138,91,188,98,177,88,209,228,21,183,161,125,27,36,126,154,
    122,197,12,108,55,87,16,34,193,127,240,175,41,176,167,102,
    177,121,37,147,52,136,35,39,136,246,226,192,160,249,105,106,
    8,84,30,53,149,12,93,143,8,93,125,96,104,33,239,136,
    174,35,220,65,64,23,129,99,208,9,126,5,46,29,9,122,
    232,86,224,16,59,38,236,241,68,215,204,40,142,16,51,11,
    112,8,208,157,130,67,30,217,126,17,93,1,83,85,25,22,
    7,4,11,61,139,107,105,118,7,15,218,110,210,233,91,204,
    181,34,174,55,153,55,230,221,233,187,137,27,58,79,239,125,
    120,247,147,38,177,173,106,196,123,216,143,19,213,11,118,213,
    12,209,56,145,27,74,199,81,117,124,72,112,129,10,20,202,
    171,76,124,236,198,65,132,135,163,52,169,74,130,190,154,43,
    86,59,97,236,15,122,82,157,195,145,167,60,242,36,73,226,
    164,73,218,176,169,81,212,244,15,58,138,184,11,233,136,38,
    177,197,77,250,57,54,173,253,56,148,173,196,245,246,3,191,
    245,56,246,6,161,140,84,218,234,200,240,238,29,249,65,107,
    119,16,244,252,214,206,189,95,180,250,67,181,31,71,173,240,
    110,11,153,145,73,228,246,90,37,177,54,113,122,145,246,124,
    29,116,156,140,183,125,217,235,203,132,68,77,207,211,121,98,
    86,44,137,107,162,34,22,196,156,8,170,185,229,166,203,150,
    251,103,102,57,35,139,11,104,60,145,89,210,128,35,238,144,
    121,154,100,57,50,88,133,236,132,194,161,25,58,2,142,13,
    248,186,66,4,71,216,154,232,204,215,10,171,117,217,153,245,
    78,211,112,132,150,157,66,195,125,179,198,27,205,240,70,6,
    28,98,139,38,53,225,8,163,5,82,226,16,182,7,53,72,
    190,163,126,183,70,192,21,17,192,206,97,21,45,110,22,22,
    215,56,37,73,252,32,33,45,219,4,209,102,61,31,141,211,
    205,190,171,246,237,185,220,36,168,34,54,237,86,28,105,235,
    237,5,145,159,91,83,227,97,47,232,33,30,108,210,31,239,
    198,100,189,216,45,200,72,105,94,47,78,37,99,138,247,182,
    231,137,144,168,247,250,188,13,157,74,252,240,98,95,166,30,
    225,7,113,165,119,36,14,104,183,137,97,194,38,248,47,211,
    190,151,25,1,13,196,64,21,17,208,68,4,204,138,41,236,
    173,25,179,226,188,216,10,72,129,30,73,68,184,48,115,56,
    252,11,180,17,4,28,24,144,172,177,83,226,71,144,165,200,
    243,14,217,171,105,238,75,18,91,143,162,95,163,57,245,224,
    33,3,4,145,130,148,247,201,77,209,120,100,241,41,232,86,
    51,243,34,104,52,28,146,33,181,72,78,219,24,184,185,9,
    233,63,0,213,136,118,63,132,12,31,199,21,4,64,3,208,
    77,209,249,113,116,21,15,252,51,195,42,139,0,108,111,181,
    31,164,241,107,237,189,212,231,48,176,141,190,241,124,248,108,
    183,43,61,149,174,227,192,203,120,96,121,110,20,197,202,114,
    125,223,114,21,122,247,238,64,201,212,82,177,181,145,54,201,
    102,246,229,28,50,197,126,195,190,180,185,163,113,226,7,158,
    194,184,177,196,15,236,127,169,84,104,241,253,216,79,113,156,
    150,118,164,178,27,180,130,148,27,51,3,12,8,135,72,233,
    88,164,35,23,125,152,115,160,163,72,53,199,72,42,123,123,
    28,152,188,158,155,166,14,113,192,227,140,44,146,250,149,219,
    27,72,222,61,197,253,144,33,234,106,30,38,23,111,46,146,
    4,185,192,44,69,20,71,254,16,153,10,188,143,232,188,139,
    89,212,33,212,173,32,226,166,177,173,226,111,85,172,26,158,
    153,225,172,154,99,109,149,164,5,182,180,200,140,141,184,59,
    198,48,209,52,216,209,89,16,194,169,253,83,234,209,98,251,
    6,53,27,212,220,164,230,86,46,235,68,4,158,27,21,152,
    249,54,88,74,175,146,201,83,248,206,87,167,124,231,210,137,
    239,96,12,219,62,228,140,216,173,148,124,160,66,18,39,15,
    50,151,33,239,66,211,162,119,17,41,251,10,166,201,50,218,
    233,192,45,251,18,29,117,29,155,91,27,233,45,75,99,203,
    218,119,83,43,138,79,0,109,209,164,142,82,4,103,123,141,
    84,93,2,108,167,4,88,219,34,10,66,171,253,30,53,230,
    89,186,190,253,35,233,186,163,117,253,91,58,100,54,67,212,
    28,35,169,46,60,130,3,25,160,72,96,95,98,51,188,64,
    90,47,235,251,2,166,174,23,209,101,204,70,172,116,74,72,
    31,113,66,226,164,198,117,101,30,168,186,83,121,167,74,170,
    223,171,192,106,150,105,82,74,5,253,36,126,51,180,226,61,
    75,65,206,208,253,141,116,115,35,253,20,35,134,245,224,68,
    201,89,116,72,100,159,188,91,123,59,41,64,5,17,62,211,
    86,79,222,120,146,147,1,63,57,142,118,110,93,129,56,89,
    146,65,123,176,1,140,220,0,28,222,176,12,161,168,54,57,
    237,215,11,237,19,255,207,233,132,58,171,190,34,46,160,59,
    151,20,79,95,66,98,74,112,250,22,184,196,20,240,23,32,
    189,162,250,50,223,101,239,200,61,132,40,211,63,0,251,249,
    152,204,162,43,62,202,38,76,129,174,145,126,204,164,58,209,
    124,14,127,45,5,137,60,29,84,178,82,164,236,32,102,225,
    32,108,144,239,21,242,205,211,62,66,202,70,103,34,50,246,
    6,93,216,221,56,29,111,184,246,96,29,72,53,17,107,204,
    232,189,29,98,227,229,137,45,40,176,94,17,75,134,134,1,
    35,228,99,106,238,21,142,41,242,177,31,154,163,245,209,72,
    88,10,253,142,14,37,59,116,172,201,140,206,79,115,176,193,
    173,159,110,63,116,30,61,251,221,179,173,109,189,23,23,160,
    144,249,239,103,180,226,67,108,36,222,220,4,95,53,129,46,
    43,136,17,106,13,50,241,177,33,240,194,137,169,255,45,95,
    56,245,197,210,214,169,159,49,153,127,57,24,80,16,57,21,
    118,89,35,91,90,87,133,149,181,1,169,121,51,57,143,34,
    27,222,239,185,225,174,239,62,24,208,254,116,136,151,123,144,
    145,115,220,40,115,76,232,23,103,49,205,143,159,230,156,191,
    154,92,9,121,31,183,43,56,102,156,251,177,199,238,254,251,
    125,105,133,50,220,197,171,225,126,208,183,246,122,110,135,109,
    80,201,36,122,150,75,164,216,136,37,215,228,160,144,82,26,
    223,138,45,47,142,48,160,13,60,21,39,150,47,177,16,151,
    190,117,199,226,104,104,5,169,229,238,226,172,235,41,141,230,
    211,94,200,85,144,155,116,82,46,120,14,94,83,119,178,54,
    116,240,6,28,96,189,247,26,138,212,175,99,62,71,14,42,
    123,184,146,211,206,129,201,2,111,96,106,168,131,208,67,106,
    238,82,211,130,114,234,156,136,213,126,169,213,14,41,41,166,
    42,174,24,53,67,223,82,137,224,57,209,166,239,58,223,223,
    190,143,243,73,19,218,83,185,11,86,137,82,78,211,21,142,
    218,26,133,235,118,61,31,60,199,237,44,15,206,229,131,231,
    185,157,231,193,70,254,162,105,129,7,23,161,189,4,126,149,
    71,150,201,173,167,255,95,183,102,15,153,172,111,252,241,7,
    245,102,251,87,63,30,195,246,3,200,18,247,89,158,44,202,
    210,204,105,72,117,69,94,159,150,69,225,251,236,226,105,128,
    57,94,34,93,37,181,33,110,76,82,46,118,127,125,218,159,
    78,28,243,221,234,240,113,33,194,49,87,40,195,101,182,79,
    254,46,138,94,128,241,27,72,197,117,32,149,137,191,230,183,
    77,44,178,99,232,74,241,4,112,213,66,114,186,247,71,242,
    181,83,146,94,87,129,68,226,246,251,50,242,237,247,137,250,
    3,40,87,115,76,51,57,107,83,196,249,22,74,5,67,69,
    44,99,209,240,174,71,81,240,42,201,197,6,107,20,62,52,
    81,211,49,36,255,158,67,146,95,61,158,196,82,155,194,146,
    142,158,69,224,180,159,20,90,95,30,193,27,214,204,146,238,
    11,227,39,176,84,225,124,65,15,106,117,132,34,30,168,254,
    64,241,226,51,166,104,57,223,223,249,81,173,140,80,165,61,
    247,149,62,124,252,12,45,39,28,242,19,91,134,221,197,151,
    61,169,100,25,55,138,20,159,93,204,124,137,185,47,30,226,
    165,96,154,7,145,218,113,38,156,57,8,16,71,180,47,177,
    135,153,67,84,49,119,172,224,133,107,197,168,85,107,130,147,
    239,200,27,224,210,88,181,24,163,236,174,203,226,97,106,211,
    136,34,59,102,137,145,185,112,202,47,149,249,85,149,54,43,
    191,56,203,83,39,33,128,47,72,91,110,168,223,139,240,124,
    118,149,74,181,87,241,75,58,58,208,254,25,53,119,10,192,
    124,66,171,9,191,225,221,205,92,224,77,25,13,66,135,170,
    81,18,249,145,155,122,174,47,191,32,80,24,76,168,174,143,
    208,107,5,209,130,72,109,199,131,196,147,207,113,238,202,88,
    170,237,32,212,111,152,212,194,200,188,159,184,216,95,25,25,
    77,101,18,184,189,224,27,169,172,177,251,125,230,166,129,247,
    60,136,31,203,87,129,39,207,56,244,100,254,226,120,166,134,
    169,146,225,59,139,89,15,95,200,48,78,134,44,254,218,200,
    252,67,223,79,108,55,234,72,52,20,85,103,239,40,230,97,
    86,154,233,61,114,170,241,130,156,166,61,67,16,156,204,180,
    183,62,118,254,81,47,246,14,164,159,209,92,61,155,230,113,
    28,146,182,71,37,42,172,147,243,122,109,236,22,152,14,147,
    208,237,145,82,122,140,182,124,158,3,203,88,195,80,209,119,
    122,72,151,96,164,140,49,23,31,118,131,68,118,2,52,76,
    194,187,158,94,156,165,16,242,69,182,233,169,120,82,90,58,
    217,88,160,111,45,250,77,196,3,126,241,240,53,54,244,58,
    175,54,83,19,85,250,157,199,95,3,19,139,81,17,117,49,
    39,76,252,109,224,111,195,152,109,212,204,90,13,233,206,205,
    138,255,245,191,142,113,165,110,172,47,214,196,127,1,51,229,
    66,224,
};

EmbeddedPython embedded_m5_internal_param_I8259(
    "m5/internal/param_I8259.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_I8259.py",
    "m5.internal.param_I8259",
    data_m5_internal_param_I8259,
    2546,
    7338);

} // anonymous namespace
