#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NativeTrace[] = {
    120,156,189,88,109,111,219,200,17,158,165,104,217,82,236,88,
    78,156,55,199,73,88,52,110,212,22,177,238,122,77,239,218,
    75,211,94,47,65,113,69,225,228,232,3,226,248,138,18,52,
    185,182,41,75,164,74,174,147,232,96,127,169,131,190,252,128,
    254,130,126,105,191,247,255,93,231,153,37,101,218,73,128,3,
    90,219,150,86,203,229,236,238,204,60,243,182,27,81,249,55,
    197,223,95,243,183,248,187,34,138,249,163,104,64,52,84,180,
    233,144,210,14,197,151,105,111,138,242,159,82,60,69,111,136,
    54,27,164,27,116,196,29,151,190,110,80,250,1,129,102,81,
    104,54,40,158,126,23,205,172,172,59,67,3,87,70,28,26,
    183,73,79,209,102,147,158,167,11,228,234,105,218,107,83,254,
    134,148,82,169,162,141,113,167,162,159,161,205,22,211,220,98,
    154,182,208,252,7,52,229,203,22,94,130,62,110,81,220,166,
    55,204,241,5,138,47,8,3,188,227,172,116,230,40,158,147,
    206,69,138,47,74,103,190,90,188,67,155,11,85,255,82,173,
    127,185,214,95,172,245,175,72,127,158,244,2,245,175,82,255,
    26,245,175,211,182,162,184,131,101,89,216,23,155,55,72,187,
    212,95,162,205,37,210,252,185,65,71,138,84,188,80,155,113,
    83,102,92,154,204,88,150,25,183,104,243,22,105,254,44,219,
    25,51,180,222,189,194,144,36,223,242,95,151,97,33,51,203,
    205,75,157,23,73,150,6,73,186,157,37,14,222,79,163,1,
    136,17,154,70,137,230,231,64,115,68,2,37,243,206,104,30,
    242,10,138,250,12,148,131,29,226,6,221,56,84,120,232,55,
    232,128,59,46,109,203,139,190,91,82,28,50,70,11,116,64,
    212,159,162,3,25,89,127,158,222,36,215,52,5,134,61,192,
    96,223,242,92,188,221,224,141,214,187,216,125,77,184,54,224,
    122,85,120,51,151,184,9,70,97,30,14,131,181,208,36,47,
    245,87,121,24,233,46,152,55,45,72,48,28,101,185,25,36,
    91,102,6,148,65,26,14,117,16,152,54,63,228,60,205,36,
    134,165,54,46,63,246,179,36,101,22,88,166,194,228,201,200,
    204,77,102,7,195,44,222,31,104,115,129,71,190,144,145,39,
    121,158,229,93,232,196,71,99,208,140,246,118,12,120,28,98,
    139,46,152,147,166,120,198,77,111,55,27,234,30,115,182,155,
    196,189,199,89,180,63,212,169,41,122,59,122,248,224,190,254,
    176,183,181,159,12,226,222,198,39,63,235,141,198,102,55,75,
    123,195,7,61,102,70,231,105,56,232,189,37,220,42,19,65,
    236,226,85,178,19,148,28,238,234,193,72,231,16,184,184,136,
    93,213,172,186,172,110,171,134,90,80,115,42,105,86,40,78,
    215,81,252,87,137,162,83,250,36,3,169,74,84,29,58,148,
    14,160,234,2,69,128,215,0,102,44,34,67,178,163,232,200,
    161,63,52,64,112,200,173,203,142,116,123,130,96,95,28,201,
    174,52,77,135,140,242,20,131,248,205,178,44,52,35,11,57,
    116,192,45,195,235,210,33,123,42,83,242,16,183,123,45,202,
    255,137,126,191,5,35,86,41,209,198,65,147,209,119,39,232,
    91,155,133,36,113,146,67,215,62,204,181,219,174,70,179,98,
    117,20,154,93,127,174,2,134,85,36,0,175,101,169,197,112,
    59,73,227,10,83,107,21,219,201,128,173,194,135,254,100,53,
    33,27,100,225,132,12,74,139,6,89,97,45,75,214,246,231,
    65,8,234,237,145,44,131,93,193,143,76,142,117,17,193,138,
    216,186,236,138,224,0,171,157,177,101,248,112,230,69,172,190,
    36,118,208,97,75,104,178,29,116,217,14,102,213,20,247,150,
    157,89,117,81,173,37,80,99,4,185,96,29,110,101,20,255,
    38,11,133,162,61,135,242,101,113,83,254,40,224,5,95,60,
    16,63,199,187,47,33,188,29,101,79,103,80,237,224,129,152,
    9,219,11,83,62,132,227,50,132,192,125,138,250,205,18,100,
    54,29,107,20,249,24,45,147,99,25,135,23,119,169,248,7,
    177,50,25,253,3,42,173,228,168,193,102,208,33,118,89,14,
    7,60,122,149,55,252,179,24,87,25,19,4,117,179,155,20,
    217,43,235,201,232,75,80,91,103,15,121,54,126,186,213,215,
    145,41,238,240,192,139,108,223,139,194,52,205,140,23,198,177,
    23,26,246,244,173,125,163,11,207,100,222,74,209,5,114,254,
    82,101,56,147,245,198,35,237,75,199,90,75,156,68,134,99,
    200,101,121,16,47,44,180,97,220,119,179,184,224,113,76,221,
    209,198,239,96,6,148,155,9,3,98,22,1,72,177,45,211,
    193,81,63,171,56,176,17,165,89,89,74,161,7,219,18,164,
    162,65,88,20,1,56,144,113,177,47,72,253,50,28,236,107,
    89,189,224,245,152,33,116,45,15,103,29,123,174,67,142,74,
    108,145,37,205,210,120,204,172,37,209,71,216,245,122,25,129,
    96,123,87,216,238,166,185,109,242,111,83,93,117,34,183,180,
    182,102,101,113,87,33,51,9,222,170,132,156,173,239,136,67,
    70,215,17,167,23,113,96,173,254,143,208,195,100,255,46,154,
    21,52,63,64,115,175,146,248,12,197,158,59,45,182,112,239,
    136,172,81,163,148,106,226,71,95,159,240,163,27,199,126,196,
    81,109,253,64,242,101,191,81,243,135,6,228,206,31,149,238,
    3,79,99,152,217,211,64,42,126,195,73,180,110,249,216,112,
    205,191,129,173,190,199,205,189,149,226,158,103,237,204,219,13,
    11,47,205,142,141,219,195,75,27,183,96,218,254,50,20,94,
    51,222,157,154,241,250,30,40,96,185,254,247,209,184,239,211,
    248,15,207,85,227,59,86,227,191,197,86,179,165,117,205,137,
    85,181,85,4,211,0,12,147,196,246,37,55,227,107,208,125,
    93,235,215,56,165,61,79,151,56,75,137,234,145,168,62,146,
    68,37,201,78,106,189,42,116,245,167,170,78,19,0,108,55,
    232,106,153,129,10,164,136,81,158,189,30,123,217,182,103,168,
    98,232,225,74,177,186,82,124,202,49,196,123,116,172,234,50,
    94,228,122,4,127,183,254,15,53,152,36,229,103,44,245,228,
    117,164,37,73,200,83,16,88,119,183,245,73,80,38,31,70,
    69,96,112,42,24,36,224,113,145,130,56,119,214,24,180,39,
    24,64,10,108,81,180,5,128,134,186,198,14,94,83,63,190,
    176,202,2,166,245,87,146,98,84,209,95,8,218,101,37,150,
    222,44,158,82,121,11,40,139,63,146,120,254,59,50,142,173,
    13,145,101,132,130,221,164,248,88,72,109,2,250,29,253,173,
    22,54,170,52,209,40,11,149,186,179,184,19,103,17,88,190,
    83,42,112,79,250,11,84,206,142,5,50,241,12,91,252,221,
    61,25,129,164,50,17,29,104,115,134,152,204,216,29,2,48,
    243,226,24,17,4,220,155,234,178,99,77,66,172,229,99,52,
    159,76,92,85,85,99,103,195,215,157,211,17,178,150,24,2,
    27,98,54,176,185,43,236,206,79,75,38,145,217,193,231,79,
    127,255,116,109,189,190,160,212,171,84,186,245,111,48,237,39,
    220,104,62,100,41,57,21,18,206,57,108,52,104,29,96,126,
    228,40,62,27,114,141,240,70,206,134,246,12,232,219,26,65,
    140,180,250,74,140,64,108,57,17,147,69,57,107,86,109,19,
    216,45,162,104,94,159,181,163,1,212,135,131,112,184,21,135,
    143,144,242,10,108,21,85,142,229,84,124,119,234,124,195,41,
    212,251,88,151,199,79,43,254,95,158,117,221,249,144,236,113,
    81,248,22,39,136,179,72,98,193,87,187,218,27,234,225,22,
    159,48,119,147,145,183,61,8,119,4,143,70,41,215,211,74,
    46,35,128,214,252,86,34,70,129,172,191,150,121,81,150,114,
    204,219,143,76,150,123,177,230,26,94,199,222,125,79,2,166,
    151,20,94,184,197,111,195,200,88,35,63,233,162,82,58,133,
    249,78,33,85,210,222,43,116,207,3,207,128,143,211,9,151,
    138,123,52,169,20,108,114,144,224,130,90,73,138,64,235,51,
    156,85,248,8,103,198,54,78,125,134,230,1,154,30,213,51,
    237,25,34,248,11,132,56,172,14,37,53,213,77,167,229,152,
    5,232,254,152,236,25,230,21,111,187,230,227,239,226,154,218,
    165,205,169,202,65,155,164,167,113,24,220,108,85,119,63,109,
    56,107,243,127,117,86,177,248,243,176,245,252,255,234,163,254,
    47,207,155,109,255,17,149,185,250,125,254,121,162,166,122,108,
    253,211,234,159,51,250,120,81,68,172,110,121,112,181,36,119,
    105,70,170,39,20,87,191,146,123,28,169,193,2,199,214,87,
    199,200,1,103,123,46,198,93,84,170,95,5,111,89,153,173,
    160,64,24,142,70,58,141,253,15,48,231,67,170,87,66,66,
    115,214,106,131,43,238,83,45,205,54,212,34,167,218,183,205,
    20,94,93,147,81,204,177,51,49,204,187,231,132,240,65,133,
    176,61,205,78,66,141,15,79,181,193,101,18,87,108,152,17,
    28,144,139,99,61,208,70,191,13,133,129,20,229,105,33,214,
    28,103,179,49,215,168,211,50,200,115,130,224,92,226,19,116,
    252,167,10,7,142,79,170,233,180,154,45,37,97,254,212,149,
    101,109,172,57,25,187,77,85,117,54,46,124,140,24,40,163,
    12,190,194,67,80,191,5,149,155,20,171,27,185,221,169,194,
    51,212,40,213,250,26,159,197,229,216,46,239,203,186,190,176,
    102,42,55,73,72,92,254,143,209,220,159,104,253,231,152,125,
    147,155,225,131,213,74,220,85,43,238,147,215,86,214,92,46,
    149,134,15,204,242,59,201,190,224,52,88,210,189,123,157,245,
    100,104,175,60,36,122,215,223,199,121,200,253,43,167,70,11,
    157,39,225,32,249,198,94,134,85,195,6,215,91,167,25,195,
    89,253,68,193,54,121,37,217,195,172,156,126,95,131,80,20,
    157,235,157,164,224,13,100,245,201,228,210,225,1,176,185,77,
    239,200,56,39,230,158,135,177,217,114,204,158,191,30,77,87,
    1,16,23,26,173,153,22,31,59,249,119,158,127,29,14,6,
    78,131,79,65,115,202,229,223,14,255,118,156,217,78,203,109,
    181,152,238,194,172,170,254,239,176,161,182,157,59,179,45,245,
    95,85,100,124,68,
};

EmbeddedPython embedded_m5_internal_param_NativeTrace(
    "m5/internal/param_NativeTrace.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_NativeTrace.py",
    "m5.internal.param_NativeTrace",
    data_m5_internal_param_NativeTrace,
    2261,
    6428);

} // anonymous namespace
