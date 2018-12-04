#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CheckerCPU[] = {
    120,156,189,89,235,83,28,199,17,239,217,59,14,238,4,226,
    16,232,141,196,202,22,214,217,142,56,61,172,216,137,21,37,
    122,184,82,74,201,128,23,165,132,112,42,91,203,238,112,183,
    199,222,238,213,238,32,233,92,144,84,130,42,246,39,87,229,
    131,255,130,124,73,190,231,255,75,186,123,118,143,225,0,71,
    149,4,4,204,245,205,244,204,244,116,255,250,49,35,31,242,
    127,35,248,247,43,252,203,254,106,1,4,248,43,32,2,232,
    10,88,179,64,72,11,130,105,216,28,129,244,19,8,70,224,
    45,192,90,9,100,9,118,145,40,195,215,37,136,111,1,241,
    204,48,207,42,4,163,135,241,140,243,186,99,16,149,185,199,
    130,126,13,228,8,172,85,224,69,60,5,101,57,10,155,53,
    72,223,130,16,34,22,176,218,175,23,252,99,176,86,69,158,
    43,200,83,99,158,127,18,79,62,88,165,65,226,15,170,16,
    212,224,45,74,124,10,130,83,44,0,238,56,206,196,4,4,
    19,76,156,134,224,52,19,147,197,226,117,88,155,42,232,51,
    6,61,109,208,51,6,125,214,160,207,25,244,121,131,190,96,
    208,23,13,250,146,65,95,54,232,89,131,190,98,208,87,13,
    122,206,160,109,131,190,102,208,239,25,244,251,6,125,221,160,
    231,13,250,3,131,190,97,208,13,131,254,208,160,63,50,232,
    143,153,158,4,57,5,157,159,64,231,38,116,22,96,67,64,
    80,39,245,162,209,95,174,53,65,150,161,115,11,214,16,28,
    248,219,132,93,1,34,152,50,102,220,230,25,103,6,51,238,
    240,140,187,176,118,23,36,254,222,209,51,198,96,165,113,22,
    161,25,254,11,255,53,4,82,106,28,155,87,50,205,194,36,
    118,195,120,35,9,45,26,31,165,134,192,236,83,83,202,81,
    253,152,80,221,3,134,52,202,142,168,222,193,21,4,116,16,
    176,22,237,16,148,224,226,142,160,47,157,18,108,35,81,134,
    13,30,232,148,115,142,29,196,234,20,108,3,116,70,96,155,
    123,86,94,196,151,161,172,42,12,199,77,130,163,30,197,185,
    52,186,138,27,173,52,104,247,69,150,90,145,212,11,44,155,
    154,194,198,237,121,169,215,117,31,183,165,191,41,211,199,203,
    191,109,144,236,170,74,7,232,246,146,84,69,225,186,26,35,
    70,55,246,186,210,117,85,13,191,164,56,75,133,10,15,173,
    202,248,181,147,132,49,74,128,71,202,84,26,246,212,196,96,
    182,219,77,130,173,72,170,83,216,243,148,123,190,72,211,36,
    109,144,74,28,106,20,53,189,205,150,34,17,187,180,69,131,
    100,227,38,91,194,166,217,78,186,178,153,122,126,59,12,154,
    79,18,127,171,43,99,149,53,91,178,123,239,166,188,221,92,
    223,10,163,160,185,250,217,79,155,189,190,106,39,113,179,123,
    175,137,194,200,52,246,162,230,240,217,22,144,231,12,45,252,
    58,108,185,185,128,109,25,245,100,74,231,205,78,211,166,98,
    92,76,139,171,162,36,166,196,132,8,43,133,13,71,77,27,
    254,61,183,161,149,71,38,52,163,200,109,106,193,14,19,100,
    168,6,217,144,76,87,34,139,225,9,209,32,45,1,187,22,
    252,174,68,12,59,216,150,49,156,92,29,216,175,195,225,68,
    175,52,10,59,104,227,17,52,225,55,179,188,208,24,47,100,
    193,54,182,104,220,50,236,96,188,66,78,236,194,118,179,10,
    233,223,136,238,84,9,194,34,6,88,221,174,160,237,203,3,
    219,107,196,210,73,130,48,37,85,59,4,214,70,173,232,77,
    178,133,158,167,218,206,68,97,23,84,17,219,119,49,137,181,
    9,55,194,56,40,76,170,65,177,17,70,8,10,135,244,199,
    171,49,91,148,120,3,54,82,154,31,37,153,100,96,241,218,
    206,36,49,18,247,70,143,151,161,93,73,30,158,28,200,204,
    39,16,33,184,244,138,36,1,173,118,188,192,112,200,147,103,
    104,241,75,12,131,58,2,161,130,48,104,32,12,198,197,8,
    82,179,214,184,56,45,22,67,210,162,79,199,34,112,148,11,
    76,252,3,180,37,4,108,90,144,206,178,143,226,175,32,115,
    145,35,110,179,147,211,216,87,116,118,221,139,110,142,54,213,
    157,219,140,18,132,11,114,222,39,175,69,11,146,217,71,160,
    83,201,109,140,200,209,152,72,251,212,34,59,45,99,225,226,
    101,200,126,0,212,37,26,127,27,114,144,236,150,16,5,117,
    64,135,197,88,128,189,231,112,195,63,51,182,242,128,192,70,
    87,237,48,75,94,107,63,38,154,35,218,10,58,200,114,127,
    105,189,35,125,149,205,97,199,203,100,203,246,189,56,78,148,
    237,5,129,237,41,244,243,245,45,37,51,91,37,246,124,214,
    32,195,57,151,10,220,12,214,235,247,164,195,132,6,75,16,
    250,10,35,200,52,127,97,39,204,164,66,179,183,147,32,195,
    126,154,218,146,202,169,211,12,82,110,194,2,48,42,92,98,
    165,109,145,143,252,244,97,33,129,142,39,149,2,40,153,140,
    54,56,68,249,145,151,101,46,73,192,253,12,47,58,245,43,
    47,218,146,188,122,134,235,161,64,68,106,25,142,57,242,92,
    160,99,20,167,230,163,196,73,28,244,81,178,208,191,75,155,
    94,200,227,15,65,239,44,194,110,20,219,10,126,86,196,57,
    203,47,231,96,171,20,128,59,71,71,6,54,183,200,45,142,
    224,219,197,128,209,176,216,229,249,52,4,86,231,35,162,104,
    178,115,157,154,121,106,62,160,230,70,113,224,227,59,245,196,
    240,169,89,120,139,143,234,151,242,67,13,188,232,235,125,94,
    116,113,207,139,48,164,173,108,115,170,236,148,12,111,40,209,
    177,211,7,185,243,144,159,161,145,209,207,136,149,189,6,243,
    167,137,123,218,112,209,185,72,91,93,195,230,198,124,118,195,
    214,40,179,219,94,102,199,201,30,180,109,26,212,65,139,128,
    237,204,146,190,13,232,182,12,232,58,54,113,16,110,157,247,
    169,41,31,165,240,15,79,82,225,45,173,240,95,211,78,227,
    57,182,38,24,83,53,225,19,48,200,10,131,164,246,21,54,
    253,243,164,122,83,233,231,49,157,189,136,47,97,134,98,205,
    83,146,186,203,73,138,19,29,87,187,69,220,234,140,20,68,
    133,244,191,81,130,115,121,246,201,40,61,244,210,228,77,223,
    78,54,108,5,133,64,247,231,179,133,249,236,115,12,32,246,
    131,61,77,231,193,34,149,61,114,118,237,252,164,5,21,198,
    248,157,150,250,226,141,47,57,65,240,55,215,213,190,174,75,
    19,55,79,60,104,20,182,130,85,88,129,163,29,214,39,20,
    228,142,217,4,181,129,9,232,16,203,180,77,141,245,95,18,
    231,209,187,13,237,211,31,97,50,35,96,125,11,92,133,10,
    248,11,144,114,81,135,185,43,179,159,20,190,66,156,217,239,
    129,221,254,144,108,163,139,66,202,48,204,129,78,146,125,202,
    172,58,249,252,6,190,51,98,70,145,34,74,121,141,98,186,
    74,121,224,42,108,149,119,74,3,229,253,222,66,26,71,183,
    34,54,246,11,93,246,93,223,31,126,184,40,97,29,72,117,
    124,38,25,211,27,184,36,203,203,61,131,80,176,189,44,166,
    45,13,8,198,202,167,212,124,54,240,83,81,244,29,139,88,
    115,195,209,209,200,9,174,14,47,171,180,119,153,165,157,28,
    101,104,237,45,193,165,41,228,94,252,136,24,239,96,35,241,
    86,41,248,26,12,116,161,65,144,80,107,145,141,119,45,129,
    151,97,172,7,222,242,101,88,95,122,29,93,15,48,40,139,
    63,14,9,20,74,246,69,96,214,198,162,214,211,192,204,218,
    130,212,188,57,102,191,34,35,222,143,188,238,122,224,61,248,
    35,109,66,59,249,133,31,89,133,216,117,83,108,242,1,113,
    148,228,252,245,243,66,252,87,199,92,97,222,199,53,7,98,
    51,228,131,196,103,207,127,222,150,118,87,118,215,241,34,217,
    14,123,246,70,228,181,216,26,165,252,88,75,197,177,20,155,
    211,240,82,142,15,25,37,248,197,196,246,147,24,3,220,150,
    175,146,212,14,36,22,235,50,176,111,218,28,29,237,48,179,
    189,117,28,245,124,165,49,189,223,33,185,72,242,210,86,198,
    245,208,230,107,34,79,192,154,46,94,154,67,172,9,255,4,
    131,162,64,39,2,142,36,84,21,113,181,167,93,4,51,8,
    94,213,84,95,7,165,135,212,220,163,166,9,102,82,61,62,
    251,253,28,215,252,3,45,78,42,170,136,203,86,213,82,245,
    125,254,184,76,179,178,131,94,185,251,46,94,41,203,176,54,
    66,12,178,2,157,81,110,199,40,126,175,85,139,206,26,183,
    167,184,115,188,232,156,224,246,52,119,78,22,174,93,231,206,
    41,88,59,83,60,147,77,147,155,87,254,87,55,103,103,57,
    1,55,249,238,255,234,221,206,47,78,88,106,231,1,228,57,
    253,40,207,222,87,122,61,209,158,173,181,143,153,191,63,195,
    39,44,158,129,232,237,137,31,29,21,23,89,84,131,253,146,
    31,122,184,84,115,45,93,134,237,217,141,172,172,175,206,116,
    159,141,229,107,119,24,161,186,206,34,62,175,215,147,113,224,
    220,162,41,183,193,172,151,152,231,152,149,70,62,252,61,24,
    217,184,36,102,48,35,31,132,40,133,3,227,132,12,197,250,
    0,148,215,79,198,188,63,20,230,109,204,236,11,81,14,249,
    184,14,74,131,120,164,245,111,31,18,29,92,249,38,84,75,
    49,223,91,169,68,255,207,76,88,26,112,25,108,244,169,247,
    14,155,180,213,11,60,37,205,181,223,129,141,86,167,8,176,
    175,151,43,177,3,19,49,43,196,75,113,212,95,138,159,37,
    94,176,183,203,59,51,211,94,228,21,135,140,49,22,212,121,
    178,179,140,164,146,7,48,203,161,54,191,123,5,18,51,89,
    210,199,146,127,148,59,113,138,235,158,68,10,32,48,126,91,
    68,33,76,1,120,151,58,75,63,86,181,82,21,156,77,135,
    30,128,141,190,202,160,239,19,40,74,222,126,230,80,143,34,
    240,228,73,142,5,113,205,55,101,126,154,210,128,226,215,178,
    34,13,18,236,248,6,180,232,117,245,59,8,143,231,119,165,
    76,59,53,191,204,81,125,224,124,76,205,205,1,74,127,86,
    236,219,189,183,80,156,121,65,159,249,145,151,73,60,48,63,
    209,117,239,241,195,197,65,38,212,218,243,103,143,212,245,163,
    6,151,61,186,127,174,71,242,133,23,161,2,143,88,101,165,
    159,41,217,85,151,135,6,101,188,213,117,191,148,221,36,237,
    127,153,4,82,205,14,141,63,12,130,212,241,226,150,68,69,
    81,185,163,174,13,51,228,181,142,94,163,224,178,15,149,97,
    63,239,1,89,52,19,14,234,247,48,174,217,15,142,63,142,
    18,196,73,144,243,92,57,154,231,73,210,245,176,255,240,93,
    86,194,98,151,169,161,241,32,165,89,103,135,122,51,153,134,
    94,20,126,115,80,67,131,149,138,179,95,61,116,67,204,79,
    105,215,139,72,201,209,143,160,129,44,61,124,110,180,241,179,
    196,247,162,135,61,188,171,252,232,38,38,231,17,54,192,77,
    66,127,57,76,158,200,87,161,47,143,208,206,222,248,176,164,
    184,195,211,149,135,133,20,71,2,22,121,212,165,161,193,199,
    201,22,145,197,220,97,61,234,185,79,177,176,126,142,24,65,
    28,15,207,95,78,19,95,102,89,49,255,112,29,230,76,236,
    159,197,16,71,221,253,14,71,97,35,167,185,218,228,120,184,
    23,129,56,66,164,178,21,162,207,164,60,61,103,206,179,58,
    69,39,134,222,129,96,108,78,60,129,56,169,111,106,250,33,
    230,1,191,187,208,127,123,209,187,102,117,172,138,49,19,63,
    39,241,211,194,132,111,149,68,77,76,136,50,126,214,241,179,
    110,141,215,171,229,106,21,249,78,141,139,255,230,103,14,35,
    113,205,154,195,245,255,13,20,255,237,59,
};

EmbeddedPython embedded_m5_internal_param_CheckerCPU(
    "m5/internal/param_CheckerCPU.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_CheckerCPU.py",
    "m5.internal.param_CheckerCPU",
    data_m5_internal_param_CheckerCPU,
    2619,
    7763);

} // anonymous namespace
