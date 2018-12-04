#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DirectedGenerator[] = {
    120,156,197,88,109,115,219,198,17,222,3,33,74,164,222,40,
    235,205,182,100,9,118,164,154,109,199,98,210,84,77,218,184,
    106,93,59,147,105,103,162,56,80,166,150,153,78,49,16,112,
    36,65,17,0,11,156,108,211,35,77,103,42,79,218,63,208,
    95,208,47,205,247,254,169,254,138,118,119,15,160,160,183,214,
    51,173,25,137,60,30,14,123,119,187,247,60,187,183,119,30,
    100,127,99,248,253,37,126,211,127,10,0,31,63,2,122,0,
    161,128,166,1,66,26,224,207,195,225,24,36,63,6,127,12,
    222,0,52,75,32,75,112,138,21,19,190,46,65,244,62,144,
    204,2,203,236,131,63,126,149,204,20,143,59,1,61,147,91,
    12,24,84,65,142,65,179,12,207,162,57,48,229,56,28,86,
    33,121,3,66,136,72,192,254,160,150,203,79,64,179,130,50,
    119,80,166,202,50,255,32,153,236,101,133,94,146,188,95,1,
    191,10,111,80,227,73,240,39,89,1,156,113,138,43,211,224,
    79,115,101,6,252,25,174,204,230,131,215,160,57,151,215,111,
    20,234,243,133,250,66,161,190,88,168,47,21,234,203,133,250,
    205,66,253,86,161,126,187,80,95,41,212,87,11,245,59,92,
    159,5,57,7,221,53,232,174,67,215,130,150,0,191,70,106,
    227,98,62,111,222,5,105,66,247,30,52,239,129,196,207,93,
    56,21,32,252,185,66,143,247,184,199,141,97,143,13,238,177,
    9,205,77,144,248,217,208,61,38,96,175,190,136,144,7,255,
    194,191,58,194,14,106,10,139,23,50,73,131,56,114,130,168,
    21,7,6,189,31,167,130,72,226,81,81,202,216,242,152,216,
    210,7,166,10,234,142,108,57,193,17,4,116,145,8,6,205,
    224,151,224,214,137,160,135,110,9,142,177,98,66,139,95,116,
    205,76,226,4,57,48,7,199,0,221,49,56,230,150,189,103,
    209,10,152,170,204,48,31,18,204,250,45,246,165,183,251,56,
    209,94,157,102,223,101,173,21,105,189,197,186,169,155,88,56,
    125,55,113,67,231,73,144,72,79,73,255,51,25,201,196,85,
    113,82,39,19,84,133,236,8,251,113,162,122,193,129,154,32,
    121,39,114,67,233,56,170,138,15,9,118,86,129,66,219,149,
    137,143,221,56,136,80,17,180,44,85,73,208,87,211,195,222,
    78,24,251,71,61,169,38,177,229,215,220,242,105,146,224,36,
    180,50,54,21,138,138,254,97,91,145,166,33,77,81,39,21,
    185,72,127,139,69,163,19,135,178,145,184,94,39,240,27,79,
    98,239,40,148,145,74,27,109,25,110,63,144,31,52,14,142,
    130,158,223,216,255,248,39,141,254,64,117,226,168,17,110,55,
    80,25,153,68,110,175,113,141,137,91,40,122,131,198,127,25,
    180,157,76,207,142,236,245,101,66,102,167,51,52,183,152,18,
    243,98,77,148,196,156,152,22,65,57,71,116,188,136,232,223,
    51,68,141,204,255,17,84,145,33,108,192,9,87,8,182,58,
    33,74,64,150,8,63,52,20,225,105,11,56,53,224,119,37,
    18,56,193,210,68,167,93,27,162,217,101,167,213,35,141,195,
    9,34,62,134,128,190,94,229,129,38,120,32,3,142,177,68,
    168,77,56,193,168,128,146,216,132,229,97,5,146,191,81,189,
    91,33,66,139,8,96,255,184,140,76,48,135,76,208,252,37,
    75,252,32,161,21,183,137,186,245,106,222,26,167,91,125,87,
    117,236,233,28,30,92,34,134,121,55,142,52,146,173,32,242,
    115,100,53,55,90,65,15,185,97,211,250,241,104,44,214,139,
    221,161,24,45,154,215,139,83,201,252,226,177,237,89,18,36,
    233,86,159,135,161,89,73,31,238,236,203,212,35,46,33,199,
    244,136,164,1,141,54,18,126,216,228,222,11,52,199,109,102,
    67,13,249,80,70,54,212,145,13,83,98,12,107,171,198,148,
    152,17,187,1,45,166,71,214,17,71,204,156,26,223,130,6,
    68,192,161,1,201,42,59,46,126,4,161,70,222,121,204,158,
    79,239,190,164,37,208,173,232,251,8,173,110,60,102,178,32,
    107,80,242,33,185,50,2,73,232,143,65,183,156,65,141,4,
    210,212,72,6,84,162,56,13,99,224,224,38,164,127,5,92,
    82,228,192,49,100,92,57,45,33,25,106,128,238,139,1,2,
    91,151,112,194,63,49,197,178,40,193,216,171,78,144,198,47,
    181,87,83,157,195,220,30,250,201,211,193,23,7,93,92,166,
    116,29,27,158,199,71,150,231,70,81,172,44,215,247,45,87,
    161,215,31,28,41,153,90,42,182,54,211,58,225,103,223,206,
    233,51,28,111,208,151,54,87,52,103,252,192,83,24,79,230,
    249,129,125,49,149,10,209,239,196,126,138,237,212,181,45,149,
    93,163,30,180,184,49,43,192,228,112,72,148,166,69,57,114,
    215,71,185,6,58,186,148,115,190,164,178,215,226,128,229,245,
    220,52,117,72,3,110,103,150,145,213,47,220,222,145,228,209,
    83,28,15,21,162,170,214,97,52,113,136,67,113,110,60,91,
    20,197,145,63,64,5,3,239,67,154,251,102,22,141,136,129,
    139,200,190,113,44,203,248,91,22,75,134,103,102,156,43,231,
    188,91,34,203,129,81,23,25,240,200,193,83,12,31,117,131,
    3,0,27,69,156,181,127,64,53,234,108,111,80,177,73,197,
    247,168,184,159,219,253,206,141,159,190,104,60,219,96,176,197,
    94,41,179,109,232,83,95,159,243,169,91,103,62,133,113,110,
    239,152,119,211,110,169,224,27,37,178,62,217,201,92,137,188,
    14,33,71,175,35,81,246,33,220,98,139,94,64,19,238,218,
    183,104,170,187,88,220,223,76,239,91,154,115,86,199,77,173,
    40,62,35,186,69,47,117,36,35,154,219,171,180,236,5,34,
    183,11,68,182,45,146,32,22,219,239,81,97,94,183,238,223,
    255,14,214,189,173,215,253,51,154,112,42,99,218,52,51,172,
    42,60,162,9,129,49,220,240,190,196,98,176,76,8,20,215,
    126,25,183,186,103,209,109,220,189,24,0,218,192,62,228,13,
    140,55,65,206,55,243,96,214,29,203,43,101,130,161,85,130,
    165,108,103,74,105,235,232,39,241,171,129,21,183,44,5,185,
    66,15,55,211,173,205,244,19,140,42,214,206,217,130,103,17,
    36,145,125,138,0,58,34,208,98,168,32,194,103,26,234,211,
    87,158,228,205,131,159,28,71,7,0,157,189,56,217,166,132,
    216,48,24,70,14,6,135,64,76,97,40,242,141,6,137,234,
    16,9,178,229,41,205,86,101,24,74,98,25,93,190,0,2,
    125,137,161,41,209,236,207,192,105,171,128,111,128,214,24,151,
    50,243,111,246,154,220,115,72,50,253,61,112,44,184,98,39,
    210,89,36,237,62,44,129,46,147,126,196,162,122,99,250,13,
    252,165,16,72,242,237,163,148,165,49,69,199,49,135,142,195,
    224,188,213,22,97,158,247,29,90,120,116,50,18,99,47,209,
    9,226,198,249,152,196,121,11,175,129,84,239,28,153,9,61,
    143,67,42,61,63,195,133,2,241,138,152,55,52,61,152,57,
    31,81,241,241,208,121,69,222,246,46,181,91,191,24,57,11,
    219,134,163,67,207,62,169,96,178,210,179,227,106,14,127,47,
    141,196,41,45,100,30,254,43,146,255,17,22,18,207,124,130,
    15,169,64,199,34,100,14,149,6,1,127,106,8,60,170,98,
    2,241,134,143,170,250,72,106,235,4,130,153,154,127,57,92,
    80,152,57,23,164,121,109,118,245,170,13,177,215,176,82,241,
    106,52,62,71,200,62,236,185,225,129,239,238,252,129,230,162,
    9,189,220,199,140,92,251,90,81,123,242,15,113,157,1,252,
    248,73,110,197,139,209,36,168,15,113,232,161,246,236,21,126,
    236,113,112,248,170,35,173,80,134,7,120,56,237,4,125,171,
    213,115,219,140,77,41,179,238,139,220,58,197,224,22,28,153,
    67,72,74,137,193,110,108,121,113,132,161,240,200,195,249,44,
    95,98,202,47,125,235,129,197,113,212,10,82,203,61,192,183,
    174,167,52,223,207,251,44,231,88,110,210,78,57,157,58,124,
    73,213,209,97,235,224,121,60,192,204,146,86,38,75,38,244,
    206,193,49,135,146,42,206,25,181,251,224,150,131,231,62,53,
    208,225,235,17,21,219,84,52,160,184,25,191,115,52,127,134,
    67,211,5,65,74,11,86,22,43,70,197,80,203,87,185,236,
    83,26,35,189,236,184,209,219,56,174,52,161,57,70,2,178,
    12,221,113,46,39,40,238,55,43,121,99,149,203,73,110,156,
    202,29,125,154,27,103,248,38,72,95,105,213,200,233,203,255,
    171,211,179,207,140,206,91,94,255,95,125,221,254,249,119,163,
    188,189,3,89,18,112,157,159,159,75,217,158,104,63,215,88,
    96,170,48,88,96,67,243,139,38,186,221,226,235,66,197,201,
    25,229,110,191,224,171,36,78,241,28,67,167,111,103,40,18,
    230,250,56,190,130,69,36,95,94,214,88,51,84,167,105,36,
    238,246,251,50,242,237,247,169,231,7,80,76,183,88,102,52,
    75,72,142,253,71,40,236,226,37,177,128,59,249,101,250,82,
    140,40,216,203,52,173,13,9,187,49,82,204,191,201,49,175,
    207,157,11,95,54,121,188,14,88,195,88,165,65,217,184,62,
    100,56,209,81,232,120,253,163,148,114,254,183,19,196,212,130,
    3,106,222,160,238,253,135,94,233,32,85,50,228,193,223,66,
    140,134,230,83,55,63,50,60,106,141,150,94,246,164,146,215,
    145,74,17,18,217,17,203,151,184,255,196,3,76,233,199,185,
    17,123,58,206,8,35,54,177,101,0,217,117,33,70,108,60,
    50,45,138,69,163,82,174,8,222,8,47,220,7,23,218,202,
    195,54,74,109,117,66,59,72,109,106,81,4,106,182,49,177,
    54,78,241,138,153,47,165,52,208,124,93,150,111,93,68,7,
    62,230,236,186,161,190,1,225,247,217,129,40,213,174,199,87,
    115,180,181,219,63,164,226,193,144,61,63,133,236,70,56,220,
    222,202,13,223,210,134,239,49,58,124,69,23,110,179,199,23,
    101,36,241,226,115,25,198,201,224,243,216,151,106,245,194,251,
    71,190,159,216,110,212,150,104,4,101,17,234,238,69,129,44,
    133,208,99,228,82,214,149,170,156,151,189,164,139,22,194,151,
    250,150,138,243,227,203,239,31,247,98,239,80,250,153,204,157,
    235,101,158,196,161,139,237,87,207,178,23,228,179,204,93,120,
    239,39,212,107,241,66,107,42,147,192,237,5,175,47,175,208,
    112,164,220,246,181,43,39,196,64,159,132,110,143,22,185,199,
    200,230,239,21,221,160,94,84,138,128,30,62,113,98,193,195,
    94,34,49,211,44,145,237,0,49,78,120,164,97,175,44,132,
    63,254,111,33,165,56,194,232,92,79,39,240,250,8,191,195,
    39,246,175,176,160,251,177,202,68,5,221,16,127,103,241,215,
    192,32,111,148,240,8,61,45,76,252,173,225,111,205,152,170,
    85,204,74,5,229,38,167,196,117,255,235,232,194,85,99,125,
    166,34,254,13,32,190,100,22,
};

EmbeddedPython embedded_m5_internal_param_DirectedGenerator(
    "m5/internal/param_DirectedGenerator.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_DirectedGenerator.py",
    "m5.internal.param_DirectedGenerator",
    data_m5_internal_param_DirectedGenerator,
    2424,
    7155);

} // anonymous namespace
