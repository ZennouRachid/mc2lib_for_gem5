#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_X86E820Entry_vector[] = {
    120,156,205,92,125,104,100,87,21,63,247,205,100,146,201,199,
    102,178,217,36,155,253,156,109,119,187,211,106,55,173,117,109,
    109,215,213,126,44,165,21,211,246,69,217,109,170,62,94,222,
    187,73,222,100,230,189,233,123,47,187,59,53,81,52,91,235,
    39,42,82,197,15,68,252,162,10,130,160,8,130,32,8,130,
    32,8,130,32,8,130,80,16,4,193,255,4,65,168,231,156,
    251,238,204,155,100,70,186,59,59,47,110,146,51,119,222,220,
    185,231,254,238,249,184,231,156,119,223,58,144,252,27,194,191,
    247,224,95,180,33,0,92,252,21,80,3,168,11,88,54,64,
    72,3,220,105,216,24,130,240,237,224,14,193,13,128,229,28,
    200,28,236,96,35,15,47,228,192,191,15,168,207,33,238,115,
    5,220,225,110,125,198,121,220,17,168,229,249,138,1,205,81,
    144,67,176,92,128,203,254,20,228,229,48,108,140,66,120,3,
    132,16,190,128,43,205,146,238,63,2,203,69,236,115,28,251,
    140,114,159,159,81,159,228,195,34,125,72,253,221,34,184,163,
    112,3,103,60,6,238,24,79,0,57,142,115,99,2,220,9,
    110,28,0,247,0,55,38,193,157,4,89,130,85,1,110,137,
    174,224,60,159,95,158,2,153,135,234,65,88,62,8,18,127,
    167,96,71,128,102,52,13,203,135,244,140,102,82,237,217,84,
    123,142,219,83,122,224,131,173,129,15,243,192,243,176,60,15,
    18,127,15,171,129,71,96,169,50,131,139,238,189,129,255,42,
    184,240,16,143,35,185,42,195,200,11,124,203,243,87,3,207,
    160,207,135,137,144,152,28,34,185,68,94,143,147,188,26,192,
    194,194,9,160,188,182,113,4,1,85,20,133,65,28,220,28,
    204,111,11,122,83,205,193,22,54,242,176,202,31,84,243,73,
    143,109,148,194,20,108,1,84,135,96,139,175,44,93,246,143,
    66,62,46,240,66,111,208,66,171,79,241,187,244,233,21,100,
    180,84,33,238,139,60,235,152,102,125,142,231,22,31,66,98,
    93,121,232,29,151,30,122,219,125,151,252,56,108,90,87,165,
    19,7,97,133,166,31,23,9,67,189,17,132,113,205,91,137,
    71,168,175,229,219,117,105,89,241,40,190,9,27,118,24,123,
    49,226,142,243,248,182,26,120,62,78,2,81,69,113,232,53,
    226,137,214,183,173,122,224,110,214,100,60,134,87,158,226,43,
    151,194,16,153,208,170,152,68,98,34,141,141,181,152,102,89,
    39,22,21,154,30,147,200,68,178,176,30,212,229,66,104,59,
    235,158,187,240,68,224,108,214,165,31,71,11,107,178,126,254,
    94,121,255,194,202,166,87,115,23,16,199,66,163,25,175,7,
    254,66,253,252,2,78,70,134,190,93,91,232,2,239,28,118,
    59,72,99,95,243,214,172,100,142,235,178,214,144,33,65,142,
    14,16,95,49,46,166,197,9,145,19,83,98,66,120,5,45,
    201,225,180,36,95,75,36,105,36,150,135,194,20,137,100,13,
    216,230,6,137,171,66,146,36,1,230,72,110,8,18,197,178,
    38,96,199,128,15,230,168,195,54,210,60,154,203,137,150,20,
    171,108,46,106,164,97,216,70,73,15,161,32,95,58,198,3,
    141,240,64,6,108,33,69,17,231,97,27,237,17,123,226,37,
    164,27,69,8,191,75,237,106,145,20,89,248,0,87,182,10,
    168,1,249,150,6,40,189,37,36,174,23,210,106,155,164,178,
    149,81,125,53,136,206,53,236,120,221,156,208,162,193,37,98,
    17,47,6,190,146,226,170,231,187,90,170,74,47,86,189,26,
    234,133,73,235,199,163,113,183,90,96,183,186,209,162,57,181,
    32,146,172,91,60,182,57,73,29,169,247,106,131,135,33,174,
    52,31,254,178,43,35,135,244,8,245,75,141,72,51,160,209,
    6,174,27,38,153,52,153,70,116,132,53,161,132,186,80,64,
    77,168,160,38,140,139,33,108,29,51,198,197,1,177,232,209,
    66,58,132,140,244,35,175,213,226,135,160,132,33,96,195,128,
    240,24,27,43,254,10,146,24,89,228,22,91,59,125,246,28,
    193,87,87,209,222,81,172,234,226,22,43,10,106,12,246,188,
    64,230,139,66,36,201,15,65,181,144,136,25,149,71,169,69,
    216,36,138,221,105,24,3,7,207,67,244,42,224,114,162,252,
    183,32,209,147,157,28,42,66,9,208,108,209,41,224,213,89,
    100,248,9,86,175,196,51,176,220,227,117,47,10,174,41,107,
    166,54,187,182,37,180,145,103,155,207,172,84,113,117,162,147,
    120,225,249,96,179,236,216,190,31,196,101,219,117,203,118,140,
    214,190,178,25,203,168,28,7,229,51,81,133,100,103,30,209,
    170,211,26,175,217,144,38,55,148,190,184,158,19,163,31,153,
    230,55,108,135,145,140,81,242,235,129,27,225,117,250,234,154,
    140,205,18,125,131,22,55,224,9,176,98,88,212,149,216,98,
    63,50,213,71,245,12,148,87,41,104,93,137,100,109,149,29,
    149,83,179,163,200,162,25,240,117,214,48,66,125,213,174,109,
    74,30,61,194,241,112,66,212,84,115,24,188,255,57,76,72,
    52,112,70,227,7,190,219,196,201,121,206,3,196,247,112,226,
    133,72,251,102,80,243,134,145,22,240,181,32,102,13,39,159,
    232,91,65,235,220,44,161,6,150,184,72,132,142,250,183,131,
    110,163,98,176,225,51,32,210,87,243,30,106,209,151,205,211,
    68,206,16,185,139,200,89,141,121,160,192,39,118,3,231,249,
    27,140,214,201,37,184,90,182,244,66,135,45,205,183,109,9,
    125,219,210,22,239,156,213,92,202,38,114,132,60,188,152,152,
    16,89,27,138,26,173,141,186,178,237,224,118,154,214,126,98,
    184,104,206,19,171,83,72,206,158,137,206,150,149,174,149,215,
    237,168,236,7,109,5,47,211,135,202,123,145,122,155,199,104,
    201,83,10,188,150,82,96,179,76,61,72,123,205,59,137,228,
    123,173,249,221,25,175,249,154,90,243,39,137,217,120,162,97,
    19,172,89,163,194,33,245,32,65,180,54,184,231,144,52,231,
    104,245,211,235,62,135,91,219,101,255,8,238,86,188,248,180,
    97,61,192,27,22,111,122,28,217,105,7,86,29,210,141,2,
    137,96,53,7,179,201,78,20,209,86,209,8,131,235,205,114,
    176,90,142,65,79,232,194,153,232,220,153,232,17,244,36,229,
    139,237,197,78,188,70,40,27,100,245,202,11,208,66,196,158,
    143,239,105,168,75,215,29,201,155,5,191,179,44,101,244,42,
    82,177,146,77,8,229,194,130,48,180,32,216,237,97,184,66,
    222,110,240,82,24,109,73,129,112,60,75,156,70,89,4,57,
    49,135,102,158,18,0,253,145,102,70,164,94,175,0,135,166,
    2,62,9,180,190,184,140,137,77,179,181,104,139,161,158,209,
    135,129,237,191,203,206,163,34,69,218,109,184,7,154,74,244,
    32,119,85,27,209,211,240,169,148,243,208,219,69,46,9,89,
    210,6,147,111,25,12,11,230,77,109,9,249,78,155,161,69,
    71,227,162,110,108,29,42,16,60,221,233,135,56,70,225,53,
    144,241,64,165,50,162,120,88,52,157,231,219,50,33,199,123,
    84,76,27,74,45,88,99,30,36,242,80,203,96,133,190,54,
    168,153,157,220,237,41,83,91,132,165,92,205,21,98,159,231,
    9,79,14,243,110,168,246,235,167,112,100,27,135,225,152,21,
    18,147,126,140,58,191,142,68,98,58,37,56,255,3,202,119,
    80,93,136,26,36,237,29,67,96,22,136,81,194,13,206,2,
    85,182,135,137,94,149,83,186,36,149,196,48,162,192,141,49,
    74,28,49,41,162,28,110,156,219,69,110,79,112,98,167,178,
    183,49,157,189,169,196,174,164,19,187,41,157,216,29,164,196,
    142,26,211,73,98,167,50,50,106,204,36,25,217,242,44,165,
    179,212,152,163,156,149,26,135,193,157,225,198,60,184,179,220,
    56,2,238,28,55,142,130,185,84,161,237,147,237,73,255,177,
    67,35,71,216,177,133,176,20,23,149,124,91,26,170,148,143,
    200,245,193,123,5,210,191,11,53,187,190,226,218,23,93,226,
    67,204,28,237,5,12,61,243,82,122,230,100,193,162,215,228,
    249,237,35,26,193,213,193,135,203,23,128,11,16,106,230,108,
    179,110,224,176,235,122,255,186,44,215,101,125,5,211,227,117,
    175,81,94,173,217,107,44,147,92,130,236,25,141,44,102,45,
    76,185,25,118,112,17,133,42,139,65,217,9,124,116,210,155,
    196,175,236,74,76,62,164,91,190,183,204,30,190,236,69,101,
    123,5,63,181,157,88,89,100,167,71,225,136,207,14,215,34,
    14,238,54,174,81,51,27,153,90,150,231,123,24,227,174,66,
    59,188,217,163,143,121,181,116,90,146,12,160,212,114,46,167,
    33,131,224,128,197,87,109,41,158,158,94,75,241,38,148,120,
    170,66,7,84,105,173,227,196,236,208,30,183,99,113,104,157,
    37,8,218,51,106,237,149,86,153,89,122,43,109,25,81,11,
    139,218,6,247,194,153,222,11,199,243,157,48,21,53,208,55,
    252,193,107,17,41,7,113,14,82,26,116,219,32,185,50,13,
    201,124,34,11,41,49,34,98,28,246,141,104,174,11,34,204,
    88,109,223,145,41,84,143,100,130,138,172,93,51,223,236,27,
    89,23,107,146,47,110,218,181,204,97,81,200,192,156,175,119,
    241,96,55,225,30,186,40,159,19,52,154,25,122,7,214,59,
    226,249,145,219,142,196,151,215,227,172,145,16,207,143,246,135,
    164,139,249,88,140,197,178,178,68,147,212,148,153,239,199,111,
    59,162,70,40,175,122,193,102,148,53,34,205,247,70,223,190,
    96,118,47,40,219,189,186,203,201,101,227,186,41,105,75,120,
    191,210,55,174,153,110,234,39,95,68,229,203,218,201,21,88,
    3,137,245,103,6,131,202,151,251,134,138,88,127,190,111,84,
    93,93,133,135,121,126,7,174,108,148,48,137,171,153,249,23,
    7,132,44,218,92,217,63,100,204,252,203,131,240,27,150,181,
    63,34,27,102,96,204,251,43,208,233,225,53,174,39,187,225,
    250,92,55,39,223,21,215,110,129,189,59,67,92,204,251,107,
    176,119,231,234,200,240,182,218,25,30,207,43,243,29,214,195,
    78,150,245,141,246,60,43,84,41,224,98,168,73,55,27,184,
    114,164,74,77,141,48,104,200,48,110,170,18,223,163,68,206,
    19,89,232,112,115,174,172,201,88,90,157,178,136,75,208,42,
    134,187,18,115,242,160,105,89,201,66,225,23,44,139,179,52,
    243,18,17,146,185,249,20,145,247,18,121,31,17,170,6,152,
    84,114,54,151,136,124,128,200,101,34,84,150,51,233,78,128,
    249,33,34,22,17,155,200,74,199,26,14,52,193,124,24,212,
    29,224,232,173,72,10,226,168,81,52,10,162,40,138,70,49,
    55,142,63,197,94,63,6,71,141,106,156,142,91,237,123,75,
    115,174,120,19,165,57,153,135,229,33,93,160,43,232,138,220,
    176,174,200,141,232,163,28,69,174,203,169,98,93,81,23,235,
    70,245,33,139,49,125,200,98,92,151,233,38,116,153,238,128,
    46,211,77,234,50,93,73,151,233,166,116,153,238,160,46,211,
    77,235,50,221,33,93,166,155,209,101,186,89,93,166,155,211,
    101,186,195,186,76,55,159,148,233,220,35,220,56,6,238,81,
    110,28,7,247,24,55,78,128,123,156,27,39,193,61,193,141,
    50,184,39,185,113,10,220,50,55,238,0,247,20,55,238,4,
    247,14,110,156,6,247,78,110,156,1,247,52,55,238,2,121,
    22,170,21,88,190,27,220,51,124,229,30,170,13,82,149,185,
    175,218,96,54,219,56,87,102,190,15,183,179,36,104,190,43,
    251,137,155,23,33,185,147,209,171,28,120,147,161,254,177,238,
    6,197,94,142,252,80,214,254,85,243,125,13,254,199,62,48,
    218,18,214,206,174,122,159,7,153,110,9,236,52,127,212,101,
    170,55,33,129,147,61,36,96,209,29,138,151,100,24,100,155,
    70,170,251,129,45,214,63,238,15,92,47,245,178,172,149,32,
    168,237,71,130,172,248,254,164,63,88,71,123,194,170,73,63,
    91,84,42,36,96,182,63,77,129,74,223,206,124,92,251,140,
    116,76,168,110,77,238,133,86,238,9,109,77,198,81,205,115,
    40,7,107,223,18,16,108,179,68,171,131,199,58,206,88,219,
    243,248,249,46,41,222,124,16,220,27,109,212,70,155,117,56,
    172,96,182,39,240,139,193,202,21,195,201,61,114,53,95,36,
    18,102,8,183,61,139,95,246,45,213,222,46,21,185,224,14,
    83,223,7,161,142,105,148,138,255,175,6,8,18,13,100,95,
    65,182,248,255,122,128,32,163,125,6,217,226,255,27,232,107,
    43,153,235,129,176,17,52,178,220,70,248,212,112,208,248,109,
    10,204,173,149,75,142,244,192,99,55,26,210,119,247,165,122,
    167,88,255,174,63,57,205,247,192,37,235,141,56,211,251,47,
    124,43,137,152,254,190,63,64,135,123,0,138,188,151,178,188,
    219,172,142,151,34,207,63,244,173,122,61,17,93,179,27,41,
    197,203,36,109,83,176,144,241,31,7,163,118,43,114,205,243,
    179,86,59,102,250,167,193,248,59,114,14,25,251,59,100,249,
    231,254,192,244,114,118,97,230,226,33,63,167,184,254,101,48,
    110,33,204,88,64,100,63,196,243,175,131,177,31,167,38,237,
    76,139,27,234,153,13,100,250,122,127,128,78,245,0,180,70,
    199,46,107,181,192,201,186,106,67,83,238,96,254,183,254,0,
    246,42,25,96,116,98,173,216,206,70,230,119,160,19,190,127,
    223,5,235,230,131,217,158,33,68,104,71,50,243,48,150,227,
    8,226,252,143,93,192,244,3,118,12,236,201,54,48,68,165,
    158,193,58,196,197,55,253,176,0,61,203,199,143,39,198,124,
    68,157,78,176,63,198,15,206,241,249,104,203,80,135,216,219,
    117,186,2,164,183,2,95,94,179,186,172,137,170,183,210,49,
    6,243,62,34,247,67,199,209,102,90,33,238,50,248,10,31,
    221,181,249,39,128,62,202,60,41,114,226,144,40,221,106,136,
    114,188,151,114,111,70,235,74,187,179,14,144,249,209,1,205,
    253,95,131,113,182,171,97,224,103,122,178,135,212,151,153,254,
    187,63,64,189,54,195,172,253,16,109,134,196,243,63,41,56,
    183,92,9,234,153,161,69,145,183,230,167,172,236,137,236,180,
    144,211,52,230,255,6,244,235,102,123,6,101,146,83,155,172,
    253,44,71,102,204,218,16,131,130,230,249,145,12,227,125,129,
    166,88,15,165,160,221,154,103,236,85,82,199,165,147,225,213,
    253,57,163,149,240,30,17,3,9,104,28,187,97,59,94,182,
    197,3,10,104,52,223,177,46,176,58,142,90,252,63,28,166,
    63,32,146,59,159,149,183,64,250,148,133,73,183,252,213,185,
    138,246,145,10,186,251,199,183,228,204,13,34,117,34,116,224,
    219,164,17,76,58,78,108,94,35,210,36,66,231,87,205,109,
    34,31,3,29,107,236,16,121,153,8,157,203,51,63,77,228,
    179,68,232,232,151,249,5,34,95,34,66,167,138,204,87,137,
    124,149,8,159,236,248,58,145,111,18,249,22,145,111,19,249,
    14,145,239,17,249,1,145,215,58,12,57,57,247,209,45,250,
    145,212,113,181,99,145,7,186,210,107,56,44,77,51,122,26,
    248,64,134,40,24,116,24,227,166,126,134,119,31,214,40,10,
    222,75,118,253,31,14,169,107,133,214,181,214,35,206,81,147,
    33,170,80,34,57,68,195,40,172,244,127,11,193,15,149,171,
    133,84,103,68,147,99,54,164,19,28,208,44,218,117,245,4,
    51,127,158,60,220,24,169,80,146,31,171,167,135,97,76,214,
    168,123,91,42,244,78,34,148,94,241,249,20,118,72,187,206,
    71,209,124,66,204,177,35,188,16,159,192,207,235,231,207,233,
    165,61,215,176,67,187,222,33,70,126,28,191,126,158,71,218,
    219,115,201,171,171,39,193,227,169,93,159,187,161,141,237,153,
    93,87,209,21,121,118,13,183,17,150,86,207,251,57,233,57,
    102,163,61,234,169,43,245,84,232,69,126,8,244,49,36,244,
    168,117,113,164,40,10,244,58,137,175,198,184,200,25,57,49,
    42,38,68,30,95,75,248,90,50,198,75,197,124,177,136,253,
    198,102,31,46,138,81,236,163,126,102,55,138,226,191,225,20,
    109,3,
};

EmbeddedPython embedded_m5_internal_X86E820Entry_vector(
    "m5/internal/X86E820Entry_vector.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/X86E820Entry_vector.py",
    "m5.internal.X86E820Entry_vector",
    data_m5_internal_X86E820Entry_vector,
    3586,
    17822);

} // anonymous namespace