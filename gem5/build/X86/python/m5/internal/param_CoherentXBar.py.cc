#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CoherentXBar[] = {
    120,156,189,88,91,111,27,199,21,62,179,164,40,145,214,133,
    178,110,190,200,246,58,182,44,166,133,197,164,169,155,180,113,
    221,250,214,160,5,162,56,171,2,150,153,162,139,213,238,144,
    92,138,220,37,118,71,182,153,74,40,80,25,105,95,250,216,
    31,80,244,165,125,239,255,107,207,57,179,179,90,73,180,225,
    160,149,116,25,14,103,206,204,156,203,119,46,51,62,100,63,
    19,248,255,75,252,79,133,5,16,224,159,128,62,192,64,64,
    203,2,33,45,8,22,96,119,2,146,31,67,48,1,111,0,
    90,37,144,37,56,196,78,25,190,41,65,244,17,16,205,34,
    211,108,67,48,57,142,102,154,247,157,130,126,153,71,44,24,
    213,64,78,64,171,2,207,163,121,40,203,73,216,173,65,242,
    6,132,16,145,128,237,81,221,208,79,65,171,138,52,215,144,
    166,198,52,255,38,154,108,178,74,147,68,31,84,33,168,193,
    27,228,248,2,4,23,152,1,60,113,154,59,51,16,204,112,
    103,22,130,89,238,204,153,205,235,208,154,55,253,139,133,254,
    66,161,191,88,232,47,21,250,203,133,254,74,161,127,169,208,
    191,92,232,95,41,244,175,22,250,171,133,254,181,66,255,122,
    161,127,131,251,115,32,231,161,103,67,239,38,244,62,128,182,
    128,160,78,226,160,146,95,180,110,129,44,67,239,54,180,110,
    131,196,191,91,112,40,64,4,243,133,21,107,188,226,98,190,
    226,14,175,88,135,214,58,72,252,187,163,87,76,193,86,99,
    9,161,16,254,7,127,26,2,123,106,26,155,151,50,73,195,
    56,114,195,168,29,135,22,205,79,82,67,224,241,169,41,101,
    40,122,76,40,26,2,67,8,121,71,20,29,224,14,2,122,
    8,16,139,78,8,74,112,249,64,208,151,94,9,246,177,83,
    134,54,79,244,202,25,197,1,98,99,30,246,1,122,19,176,
    207,35,91,207,163,171,80,86,21,54,255,46,153,95,207,226,
    90,154,221,198,131,182,26,116,250,38,115,173,136,235,13,230,
    77,45,96,227,14,189,196,27,184,143,227,174,76,100,164,182,
    31,121,73,131,184,87,85,18,97,48,140,19,213,15,119,212,
    20,145,186,145,55,144,174,171,106,248,37,193,117,42,84,40,
    182,42,227,215,94,28,70,200,3,10,149,170,36,28,170,153,
    124,181,59,136,131,189,190,84,23,112,228,215,60,242,52,73,
    226,164,65,74,113,168,81,212,12,119,59,138,152,28,208,17,
    13,226,142,155,244,107,108,154,221,120,32,155,137,231,119,195,
    160,249,36,246,247,6,200,104,218,236,200,193,189,187,242,227,
    230,206,94,216,15,154,219,159,253,164,57,28,169,110,28,53,
    7,247,154,200,140,76,34,175,223,60,45,221,6,82,93,164,
    173,95,133,29,55,99,177,43,251,67,153,144,196,233,44,29,
    43,166,197,130,184,46,74,98,94,204,136,176,98,236,56,89,
    180,227,63,51,59,90,89,52,64,83,138,204,174,22,28,112,
    135,140,213,32,59,146,249,74,100,53,148,17,141,210,17,112,
    104,193,239,74,68,112,128,109,25,93,248,122,110,195,30,187,
    176,222,105,18,14,208,206,19,104,198,111,87,121,163,41,222,
    200,130,125,108,209,192,101,56,192,24,129,148,56,132,237,110,
    21,146,127,80,191,87,37,24,139,8,96,123,191,130,246,47,
    231,246,215,168,37,73,130,48,33,101,59,4,216,70,205,140,
    198,233,198,208,83,93,103,198,88,6,85,196,22,222,140,35,
    109,196,118,24,5,198,168,26,22,237,176,143,176,112,72,127,
    188,27,147,245,99,47,39,35,165,249,253,56,149,12,45,222,
    219,153,35,66,162,110,15,121,27,58,149,248,225,197,129,76,
    125,130,17,194,75,239,72,28,208,110,103,13,13,135,252,121,
    145,182,191,194,64,168,35,20,42,8,132,6,2,97,90,76,
    96,111,213,154,22,179,98,51,36,61,250,36,24,193,163,108,
    80,241,47,208,182,16,176,107,65,178,202,158,138,127,130,12,
    70,238,184,207,174,78,115,95,147,244,122,20,157,29,173,170,
    7,247,25,39,8,24,164,188,79,190,139,54,36,195,79,64,
    175,146,89,25,177,163,81,145,140,168,69,114,218,198,194,205,
    203,144,254,13,80,155,104,254,125,200,96,114,88,66,28,212,
    1,157,22,35,2,142,46,227,129,127,98,116,101,97,129,205,
    174,186,97,26,191,210,190,76,125,142,107,91,232,34,207,70,
    95,237,244,164,175,210,27,56,240,34,222,179,125,47,138,98,
    101,123,65,96,123,10,125,125,103,79,201,212,86,177,189,150,
    54,200,116,206,21,131,156,124,191,209,80,58,220,209,112,9,
    66,95,97,20,225,232,227,178,27,166,82,161,225,187,113,144,
    226,56,45,237,72,229,212,105,5,41,55,102,6,24,23,46,
    145,210,177,72,71,158,250,208,112,160,99,74,197,64,37,149,
    253,54,135,41,191,239,165,169,75,28,240,56,3,140,164,126,
    233,245,247,36,239,158,226,126,200,16,117,53,15,103,30,125,
    46,145,32,70,110,22,38,138,163,96,132,188,133,254,39,116,
    236,165,44,6,17,248,150,16,120,147,216,86,240,179,34,150,
    45,191,156,193,173,98,32,183,76,66,3,27,92,100,54,71,
    248,29,98,208,104,88,236,246,44,15,193,213,249,1,245,104,
    177,115,155,154,53,106,238,80,179,110,68,62,75,185,103,78,
    202,205,236,91,44,172,95,202,196,202,61,233,155,99,158,116,
    249,200,147,48,176,109,237,115,210,236,149,10,30,81,34,193,
    147,7,153,3,145,175,161,161,209,215,136,148,61,7,51,105,
    17,251,116,224,166,115,153,142,186,137,205,250,90,186,110,107,
    164,217,93,47,181,163,248,8,222,54,77,234,208,69,224,118,
    86,193,36,79,45,78,167,0,95,199,38,10,194,174,115,139,
    154,242,219,84,254,225,249,170,188,163,85,254,5,157,53,157,
    225,107,134,113,85,19,62,129,131,236,144,39,55,226,102,180,
    66,202,47,170,125,5,211,218,243,232,10,102,42,214,61,37,
    171,79,56,89,113,194,227,74,211,68,175,222,132,233,84,200,
    2,237,18,44,103,89,40,165,52,49,76,226,215,35,59,110,
    219,10,12,67,247,215,210,141,181,244,115,12,35,246,131,35,
    93,103,33,35,145,67,114,121,29,2,72,15,42,140,240,59,
    109,245,244,181,47,57,81,240,55,215,213,30,175,139,20,55,
    75,64,104,22,182,131,101,236,192,49,15,43,21,10,117,103,
    110,132,90,110,4,18,227,25,29,84,99,11,148,196,10,250,
    120,65,255,244,79,184,76,9,92,127,6,174,73,5,124,7,
    164,94,212,98,230,208,236,43,198,95,136,50,253,61,176,243,
    143,201,58,186,68,164,76,195,20,232,40,233,167,76,170,147,
    208,111,224,47,133,200,97,82,69,41,171,86,138,238,82,206,
    221,133,237,242,94,233,160,124,220,99,72,231,232,90,68,198,
    190,161,75,192,219,199,131,16,151,39,172,3,169,206,210,40,
    83,250,8,151,184,121,113,100,18,10,186,87,197,130,165,65,
    193,120,249,148,154,207,114,111,21,102,236,140,24,187,113,50,
    74,22,178,131,171,195,204,54,157,94,102,126,231,38,57,83,
    23,55,225,82,21,50,111,126,68,164,63,194,70,226,205,78,
    240,85,20,232,146,131,80,161,214,34,75,31,90,2,47,164,
    88,29,188,225,11,169,190,120,58,186,58,96,104,154,127,14,
    13,20,82,142,197,98,214,200,166,214,85,110,108,109,71,106,
    94,159,185,127,145,41,239,247,189,193,78,224,61,72,233,24,
    58,203,55,254,100,25,198,235,69,198,201,23,196,219,120,231,
    175,159,27,1,94,158,121,205,121,63,99,154,25,103,240,7,
    177,207,49,224,183,93,105,15,228,96,7,47,152,221,112,104,
    183,251,94,135,45,82,202,4,251,202,8,166,216,164,5,127,
    229,72,145,82,194,223,140,109,63,142,48,216,237,249,42,78,
    236,64,98,1,47,3,251,174,205,145,210,14,83,219,219,193,
    89,207,87,26,219,199,93,147,203,38,47,233,164,92,33,237,
    190,162,238,185,88,212,197,235,116,136,117,226,30,228,69,130,
    78,11,28,85,168,78,226,10,80,187,10,230,19,188,192,169,
    145,14,80,15,169,185,71,77,19,138,73,246,44,109,248,51,
    220,53,161,237,73,77,21,113,213,170,90,124,205,44,210,61,
    163,149,233,105,255,252,251,251,248,167,44,67,107,194,120,105,
    133,40,229,36,221,7,169,173,82,96,111,213,204,224,5,110,
    167,121,112,198,12,206,114,59,199,131,117,51,56,207,237,69,
    30,92,48,15,88,139,60,184,4,173,101,8,42,60,178,66,
    225,96,242,127,13,7,236,82,231,226,76,251,255,215,40,224,
    252,252,220,249,118,30,64,86,5,188,45,2,136,162,80,51,
    58,2,244,132,41,125,139,18,241,253,249,242,88,40,186,126,
    34,61,37,181,117,110,159,131,148,28,68,244,161,127,60,242,
    235,211,245,231,147,92,160,67,46,126,70,139,108,52,243,46,
    70,143,113,252,234,169,184,210,164,66,244,23,252,242,197,10,
    112,45,93,139,30,129,177,146,235,129,46,75,145,124,229,158,
    214,133,46,55,137,210,27,14,101,20,56,31,209,162,143,161,
    88,54,50,205,153,35,129,194,215,119,80,40,73,74,98,17,
    203,146,211,190,71,145,176,32,37,91,177,158,123,219,121,216,
    147,81,251,87,131,218,6,93,92,143,226,179,67,193,77,71,
    228,60,24,59,79,115,83,124,56,30,146,67,122,73,116,227,
    182,235,235,57,127,68,119,151,239,65,141,101,19,71,222,211,
    83,234,214,248,77,210,40,142,135,244,138,133,162,242,97,239,
    67,71,199,80,233,85,28,84,119,223,181,48,145,233,16,19,
    177,116,251,8,127,35,215,247,91,65,135,46,231,135,158,156,
    86,215,222,178,217,40,85,114,192,199,189,155,130,182,231,55,
    17,254,202,64,228,200,17,200,190,84,114,140,211,40,130,91,
    118,11,14,36,86,17,241,8,175,94,147,60,136,139,92,247,
    124,146,47,121,195,31,104,123,122,185,195,228,43,42,152,126,
    151,4,255,90,213,74,85,112,61,115,226,105,190,48,86,201,
    199,136,75,125,253,24,165,14,24,249,179,34,131,217,113,139,
    175,253,252,92,168,225,204,111,152,166,12,33,228,243,125,116,
    211,27,232,183,41,158,207,110,174,169,142,45,252,94,74,21,
    154,243,67,106,238,230,142,242,83,90,77,150,26,220,219,48,
    146,111,104,201,183,200,240,191,210,96,179,152,130,159,147,198,
    16,178,9,213,213,19,147,50,218,27,184,95,202,65,156,140,
    190,140,3,169,86,79,204,63,12,130,196,241,162,142,68,49,
    169,92,84,55,79,18,100,181,162,222,195,80,217,99,121,56,
    78,123,138,23,77,132,147,250,133,145,111,62,167,231,31,247,
    99,127,87,6,25,205,120,173,48,205,147,120,224,225,248,248,
    83,182,66,115,202,252,137,249,32,161,85,75,39,70,83,153,
    132,94,63,252,246,180,134,242,157,140,236,215,199,30,136,121,
    59,25,120,125,82,114,95,93,25,75,242,200,75,37,33,152,
    161,97,230,184,168,29,51,111,190,112,161,121,42,157,51,64,
    19,217,9,83,2,198,108,129,62,75,110,228,33,172,224,113,
    206,95,88,123,46,254,170,111,108,250,105,230,1,191,196,208,
    141,150,94,59,171,83,85,81,161,207,57,252,180,48,243,89,
    37,81,19,51,162,140,159,117,252,172,91,211,245,106,185,90,
    69,186,11,211,226,93,191,55,208,235,107,214,141,133,170,248,
    47,45,166,214,52,
};

EmbeddedPython embedded_m5_internal_param_CoherentXBar(
    "m5/internal/param_CoherentXBar.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_CoherentXBar.py",
    "m5.internal.param_CoherentXBar",
    data_m5_internal_param_CoherentXBar,
    2549,
    7625);

} // anonymous namespace