#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BiModeBP[] = {
    120,156,189,88,109,115,219,198,17,222,3,41,74,164,37,139,
    178,94,252,34,37,102,167,118,204,182,99,49,105,234,38,109,
    92,183,113,226,233,180,51,81,28,168,29,203,76,167,28,8,
    56,145,160,72,128,5,78,182,153,74,95,34,79,219,63,208,
    31,208,233,151,230,123,255,95,187,207,30,64,129,178,60,241,
    76,203,72,228,241,112,216,187,219,189,231,217,189,189,243,41,
    251,155,227,239,175,248,155,158,40,162,128,63,138,6,68,67,
    69,109,135,148,118,40,88,165,195,57,74,126,66,193,28,189,
    36,106,151,72,151,232,148,43,101,250,178,68,209,187,4,153,
    53,145,217,163,96,254,34,153,69,25,119,129,6,101,105,113,
    104,92,35,61,71,237,10,61,137,86,168,172,231,233,176,70,
    201,75,82,74,69,138,246,198,245,92,126,129,218,85,150,121,
    139,101,106,34,243,111,200,100,47,171,120,9,249,160,74,65,
    141,94,178,198,151,40,184,36,10,240,140,139,82,89,162,96,
    73,42,151,41,184,44,149,229,124,240,58,181,87,242,250,149,
    66,125,181,80,95,147,250,50,233,21,234,175,83,127,131,250,
    87,233,64,81,80,199,80,108,224,211,246,53,210,101,234,95,
    167,246,117,210,252,185,70,167,138,84,176,82,232,113,67,122,
    92,153,244,216,148,30,91,212,222,34,205,159,77,219,99,129,
    118,155,235,12,67,248,31,254,107,50,20,100,22,185,120,166,
    147,52,140,163,78,24,29,196,161,131,247,243,40,0,156,143,
    162,148,33,248,9,16,28,145,192,199,186,51,130,39,60,130,
    162,62,131,227,96,134,160,68,215,25,97,126,232,151,232,152,
    43,101,58,144,23,253,114,38,113,194,184,172,208,49,81,127,
    142,142,165,101,247,73,180,73,101,83,145,165,63,196,210,219,
    183,220,23,111,247,120,162,221,38,102,223,17,173,13,180,222,
    22,221,204,50,23,157,145,151,120,195,206,195,240,179,56,208,
    15,31,55,161,185,169,66,253,225,40,78,204,32,220,55,11,
    16,235,68,222,80,119,58,166,198,15,9,247,49,161,97,147,
    77,153,31,251,113,24,241,252,108,80,106,146,112,100,150,38,
    189,59,195,56,56,26,104,115,137,91,126,35,45,143,146,36,
    78,154,88,16,23,133,65,49,58,236,26,40,56,196,20,77,
    104,38,69,250,25,23,173,94,60,212,173,196,243,123,97,208,
    250,52,246,143,134,58,50,105,171,171,135,247,238,234,247,90,
    251,71,225,32,104,237,125,248,211,214,104,108,122,113,212,26,
    222,107,177,50,58,137,188,65,107,218,178,109,150,184,130,97,
    159,135,221,78,166,94,79,15,70,58,129,181,233,101,76,169,
    22,213,170,122,91,149,212,138,90,82,97,37,199,111,190,136,
    223,191,50,252,156,204,3,25,66,149,225,233,208,137,84,0,
    82,19,248,1,182,18,208,98,251,24,140,174,162,83,135,254,
    80,130,192,9,151,101,118,155,183,39,216,245,197,109,236,72,
    243,116,194,248,206,49,124,95,109,201,64,11,50,144,67,199,
    92,50,176,101,58,97,191,100,73,110,226,242,176,74,201,63,
    81,239,87,65,95,21,17,237,29,87,24,247,242,4,119,203,
    86,88,18,132,9,22,218,5,81,155,181,188,53,78,183,71,
    158,233,185,75,57,42,188,68,130,238,78,28,89,0,15,194,
    40,200,1,181,148,56,8,7,76,9,23,235,39,163,137,216,
    32,246,38,98,88,52,127,16,167,90,104,37,99,187,32,157,
    129,244,193,72,134,193,172,208,71,58,7,58,245,65,33,166,
    150,29,17,26,96,180,89,210,194,133,15,175,97,232,27,66,
    130,58,211,160,194,36,104,50,9,22,213,28,215,182,156,69,
    117,89,237,132,88,67,31,70,129,26,229,156,17,223,144,197,
    65,209,161,67,201,150,120,39,127,20,192,130,11,30,139,123,
    227,221,23,176,220,182,178,131,51,162,182,241,88,56,194,100,
    97,201,251,240,87,198,15,160,207,81,191,146,33,204,188,177,
    140,72,198,40,89,28,195,56,60,120,153,210,191,19,175,36,
    67,127,76,25,69,78,75,204,129,58,177,179,114,20,224,214,
    13,158,240,107,97,86,22,10,4,114,211,11,211,248,185,245,
    97,212,37,150,237,178,123,60,30,127,190,223,215,190,73,111,
    114,195,211,248,168,225,123,81,20,155,134,23,4,13,207,176,
    143,239,31,25,157,54,76,220,184,157,54,1,155,123,35,103,
    205,100,188,241,72,187,82,177,84,9,66,223,112,244,88,149,
    7,113,193,84,27,6,189,23,7,41,183,163,107,87,27,183,
    142,30,88,220,88,20,16,78,116,32,138,105,89,14,94,250,
    113,174,129,141,37,149,156,38,169,30,28,72,120,242,7,94,
    154,118,160,129,180,11,185,96,245,51,111,112,164,101,244,148,
    199,99,133,80,181,58,204,52,234,92,131,17,185,205,98,72,
    20,71,193,152,245,10,253,247,49,229,181,44,246,128,120,235,
    76,186,121,46,43,252,91,81,27,142,95,206,168,86,201,233,
    182,1,131,73,192,86,25,222,76,189,83,14,22,77,71,220,
    93,108,1,85,221,31,162,134,206,238,45,20,183,81,188,131,
    226,78,110,238,172,108,94,58,111,179,168,238,136,161,126,41,
    51,105,226,65,95,78,121,208,245,51,15,226,96,182,123,44,
    27,100,191,84,240,132,18,140,78,30,100,142,3,31,99,128,
    217,199,32,42,30,195,187,102,145,243,152,112,199,189,142,169,
    190,199,197,157,219,233,157,134,101,88,163,231,165,141,40,62,
    163,117,3,47,109,184,2,169,221,45,172,118,129,182,221,2,
    109,221,6,36,192,89,247,251,40,202,175,91,238,31,124,119,
    203,221,181,203,253,107,204,179,152,241,106,73,248,84,83,62,
    72,1,12,38,155,217,23,92,140,175,98,225,139,75,126,149,
    183,177,39,209,13,222,153,100,221,177,57,189,47,155,147,108,
    112,146,205,229,17,171,63,151,87,42,88,253,131,18,109,100,
    187,78,138,109,97,148,196,47,198,141,248,160,97,40,87,232,
    254,237,116,251,118,250,17,135,142,198,131,179,117,206,194,68,
    162,71,112,115,235,246,88,3,19,70,252,140,161,30,189,240,
    181,108,12,242,212,233,88,47,183,9,73,39,219,112,24,18,
    193,192,201,49,144,56,199,89,9,194,219,76,1,168,77,0,
    128,9,143,49,73,77,86,191,164,174,178,95,23,214,30,95,
    240,49,5,169,254,74,146,119,42,250,11,97,105,121,5,51,
    39,22,31,201,253,4,146,233,31,73,28,254,130,93,198,166,
    129,216,89,68,130,29,36,253,64,68,237,166,243,91,250,91,
    33,90,228,91,67,41,203,76,138,110,82,158,184,137,96,242,
    70,225,191,60,237,41,88,111,118,41,136,137,79,216,84,239,
    214,116,224,145,84,68,214,64,155,89,1,178,96,135,239,64,
    147,167,103,112,32,200,110,170,85,199,146,65,120,242,1,138,
    15,39,30,170,242,182,25,40,117,243,124,84,44,236,4,29,
    27,86,246,48,115,89,116,93,158,23,43,242,1,36,21,165,
    204,123,31,66,236,199,92,104,62,45,41,57,222,17,14,47,
    76,15,148,14,208,61,117,20,31,242,56,3,120,41,135,60,
    123,152,115,109,6,32,116,204,191,18,10,16,66,166,226,174,
    172,196,142,93,163,9,192,22,59,20,47,102,234,79,48,252,
    254,192,27,238,7,222,131,30,166,192,60,126,238,63,78,174,
    116,189,168,52,184,175,94,167,183,60,126,148,43,255,108,166,
    249,228,125,56,65,174,180,16,61,136,125,241,247,223,245,116,
    99,168,135,251,124,96,236,133,163,198,193,192,235,10,18,165,
    204,168,207,115,163,140,64,89,240,77,137,10,41,54,244,157,
    184,225,199,17,7,181,35,223,196,73,35,208,156,152,235,160,
    113,183,33,17,177,17,166,13,111,159,223,122,190,177,92,158,
    118,67,73,137,188,164,155,74,246,115,248,28,213,153,35,217,
    225,163,113,200,249,95,159,38,73,128,13,253,18,61,144,3,
    73,102,103,93,131,247,12,62,148,153,177,13,68,31,163,184,
    135,162,69,197,77,116,86,216,253,156,71,236,98,104,44,79,
    69,109,58,85,71,116,203,101,30,163,71,250,170,47,254,227,
    77,124,81,151,169,61,151,123,100,5,146,122,30,103,59,148,
    85,4,238,118,45,111,188,36,229,162,52,46,229,141,151,165,
    92,150,198,122,222,184,34,229,21,105,92,205,47,128,214,164,
    113,157,218,27,20,84,164,229,42,92,127,254,127,117,125,113,
    161,153,59,207,159,254,175,30,239,254,226,59,213,217,125,64,
    217,238,254,58,111,87,69,131,150,172,183,247,85,158,202,22,
    173,145,51,240,250,43,244,235,248,137,246,140,182,136,220,154,
    177,117,18,40,236,132,230,204,127,95,205,37,63,157,24,114,
    42,201,204,120,77,128,202,239,178,112,129,38,183,132,70,178,
    70,36,149,191,148,219,42,49,188,227,216,188,242,140,124,149,
    137,253,184,181,137,244,243,206,244,26,216,180,17,82,222,104,
    164,163,192,125,23,29,222,163,98,250,39,50,51,69,30,225,
    233,207,84,72,47,74,106,141,83,140,87,125,12,145,174,96,
    157,32,87,159,120,213,172,49,20,134,126,157,51,180,137,3,
    231,89,236,117,17,192,108,180,157,4,90,247,209,100,249,27,
    23,208,175,23,135,190,254,196,36,15,67,147,226,200,241,237,
    66,156,240,200,41,101,170,213,188,243,186,110,143,19,141,43,
    131,56,217,13,191,210,50,195,27,138,98,158,213,201,60,83,
    239,46,82,178,59,136,247,189,193,183,88,50,45,148,91,50,
    213,122,145,122,86,224,141,44,185,72,52,183,228,130,119,66,
    59,137,11,129,30,104,163,207,185,134,1,177,178,243,106,160,
    57,23,136,199,124,80,154,151,70,238,208,233,204,126,27,5,
    231,113,211,157,226,94,141,183,81,85,225,141,116,93,201,191,
    83,173,84,149,100,36,231,46,203,11,109,149,73,219,91,148,
    31,22,198,169,139,22,3,166,102,169,130,168,210,41,222,191,
    203,101,158,37,174,220,46,230,201,4,56,46,39,199,29,111,
    104,111,142,228,125,118,198,76,109,244,144,155,76,228,88,238,
    143,80,220,157,184,196,207,208,27,87,7,195,123,219,185,213,
    219,153,213,137,23,249,189,9,60,114,181,57,188,103,54,47,
    20,222,13,135,246,106,205,172,156,123,31,36,30,215,215,207,
    181,166,58,9,189,1,184,11,101,243,102,17,187,120,118,88,
    240,16,143,191,231,132,75,146,153,169,237,67,150,45,209,221,
    48,229,145,236,155,233,1,178,216,10,248,196,132,115,60,45,
    118,159,57,137,236,33,192,158,236,31,200,65,30,32,226,146,
    172,186,80,85,21,252,46,243,175,195,65,215,41,241,17,123,
    73,149,249,183,206,191,117,103,177,94,45,87,171,44,119,105,
    81,217,255,155,76,186,154,115,115,181,170,254,11,103,195,11,
    183,
};

EmbeddedPython embedded_m5_internal_param_BiModeBP(
    "m5/internal/param_BiModeBP.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_BiModeBP.py",
    "m5.internal.param_BiModeBP",
    data_m5_internal_param_BiModeBP,
    2401,
    6998);

} // anonymous namespace