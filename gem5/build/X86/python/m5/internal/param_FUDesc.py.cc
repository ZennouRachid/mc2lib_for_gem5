#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FUDesc[] = {
    120,156,189,88,109,115,220,72,17,238,209,174,215,222,141,29,
    175,227,216,121,113,94,68,145,144,5,42,222,59,142,112,7,
    23,2,71,146,187,58,160,156,156,12,21,103,143,66,37,75,
    99,91,235,93,105,75,26,39,217,195,254,114,78,1,127,128,
    95,192,23,248,206,255,131,126,122,164,181,236,36,85,87,197,
    237,37,246,120,52,106,205,116,247,243,116,79,207,132,84,252,
    155,225,223,95,243,111,254,15,69,20,241,143,162,1,209,80,
    81,207,33,165,29,138,150,105,127,134,178,159,82,52,67,175,
    137,122,53,210,53,58,230,78,157,190,172,81,242,30,65,230,
    162,200,108,81,52,251,54,153,121,153,119,142,6,117,25,113,
    104,220,34,61,67,189,6,61,75,150,168,174,103,105,191,69,
    217,107,82,74,37,138,182,198,237,82,126,142,122,77,150,185,
    206,50,45,145,249,15,100,138,151,77,188,132,124,212,164,168,
    69,175,89,227,115,20,157,19,5,120,197,121,233,44,80,180,
    32,157,243,20,157,151,206,98,57,121,155,122,75,101,255,66,
    165,191,92,233,95,172,244,87,42,253,85,233,47,146,94,162,
    254,37,234,95,166,254,21,218,81,20,181,177,4,27,254,188,
    119,149,116,157,250,107,212,91,35,205,63,87,233,88,145,138,
    150,42,95,92,147,47,46,76,190,184,46,95,220,160,222,13,
    210,252,115,221,126,49,71,155,157,21,134,39,254,47,255,235,
    48,68,100,230,185,121,161,179,60,78,19,63,78,118,210,216,
    193,251,89,52,0,52,68,83,43,144,125,8,100,71,36,176,
    178,238,140,236,17,207,160,168,207,160,57,88,33,170,209,149,
    35,133,135,126,141,14,185,83,167,29,121,209,175,23,18,71,
    140,215,18,29,18,245,103,232,80,70,54,159,37,107,84,55,
    13,129,100,31,144,216,183,252,45,222,110,241,66,155,29,172,
    190,33,90,27,104,189,46,186,153,5,110,252,81,144,5,67,
    255,211,63,62,210,121,216,129,222,166,9,229,135,163,52,51,
    131,120,219,204,65,200,79,130,161,246,125,211,226,135,140,191,
    48,177,97,131,77,157,31,251,105,156,240,234,108,78,110,178,
    120,36,147,218,175,253,97,26,29,12,180,57,199,35,159,203,
    200,227,44,75,179,14,220,225,161,49,104,70,251,187,6,234,
    13,177,68,7,122,73,147,255,142,155,238,94,58,212,221,44,
    8,247,226,168,251,40,13,15,134,58,49,121,119,87,15,239,
    221,213,239,119,183,15,226,65,212,221,250,232,103,221,209,216,
    236,165,73,119,120,175,203,202,232,44,9,6,221,170,93,235,
    252,254,2,38,125,25,239,250,133,114,123,122,48,210,25,108,
    205,207,99,65,53,175,150,213,13,85,83,75,106,65,197,141,
    18,187,217,42,118,255,42,176,115,138,168,100,248,84,129,165,
    67,71,210,1,64,29,96,7,200,106,64,138,173,99,32,118,
    21,29,59,244,167,26,4,142,184,173,115,40,221,152,224,214,
    151,80,178,51,205,210,17,99,59,195,208,125,117,77,38,154,
    147,137,28,58,228,150,65,173,211,17,199,42,75,242,16,183,
    251,77,202,254,137,126,191,9,234,170,132,104,235,176,193,152,
    215,39,152,91,166,194,146,40,206,224,102,15,36,237,180,202,
    209,52,95,31,5,102,207,91,40,49,97,23,9,182,27,105,
    98,225,219,137,147,168,132,211,18,98,39,30,48,33,60,248,
    79,102,19,177,65,26,76,196,224,180,112,144,230,90,72,37,
    115,123,139,16,132,244,206,72,166,193,170,208,71,62,142,24,
    40,16,136,137,101,103,132,6,152,109,122,164,240,16,189,23,
    49,241,85,161,64,155,73,208,96,10,116,152,2,243,106,134,
    123,215,156,121,117,94,109,196,240,96,8,147,64,140,122,201,
    135,127,147,69,65,209,190,67,217,53,137,75,254,81,128,10,
    193,119,40,129,141,119,95,192,110,59,202,161,205,120,218,193,
    67,97,8,83,133,37,239,35,82,25,61,64,62,67,253,70,
    129,47,179,198,242,33,27,163,101,113,76,227,240,228,117,222,
    38,136,253,200,192,31,82,65,144,227,26,51,160,77,28,168,
    28,255,60,186,202,11,126,45,188,42,146,128,0,110,246,226,
    60,125,105,227,23,125,201,98,155,28,28,79,199,79,182,251,
    58,52,249,77,30,120,158,30,184,97,144,36,169,113,131,40,
    114,3,195,241,189,125,96,116,238,154,212,189,157,119,0,154,
    119,181,228,204,100,190,241,72,123,210,177,68,137,226,208,112,
    230,88,150,7,9,192,92,27,134,124,47,141,114,30,199,167,
    187,218,120,109,124,1,231,166,162,128,48,194,135,40,150,101,
    57,196,232,39,165,6,54,143,52,74,146,228,122,176,35,169,
    41,28,4,121,238,67,3,25,23,106,193,234,23,193,224,64,
    203,236,57,207,199,10,161,107,117,152,98,198,185,12,19,74,
    139,197,140,36,77,162,49,107,21,135,31,96,193,203,69,222,
    1,237,86,152,114,179,220,54,248,111,67,173,58,97,189,32,
    90,163,36,219,42,204,37,129,90,21,104,51,241,142,57,81,
    116,28,9,117,177,4,68,245,126,132,30,62,246,110,161,185,
    141,230,7,104,238,148,198,78,199,226,133,179,22,139,226,142,
    152,25,214,10,131,38,209,243,229,169,232,185,114,18,61,156,
    198,54,15,101,91,236,215,42,81,80,131,201,217,131,34,104,
    16,95,12,46,199,23,68,37,90,120,175,172,242,29,11,110,
    120,87,176,212,247,184,185,115,59,191,227,90,118,185,123,65,
    238,38,233,9,165,93,188,180,137,10,132,246,174,193,215,21,
    202,238,86,40,235,185,144,0,95,189,239,163,169,191,203,217,
    63,252,174,156,189,107,157,253,25,86,153,47,56,181,32,92,
    106,169,16,132,0,2,147,77,236,11,110,198,151,224,246,170,
    195,47,241,246,245,44,185,202,59,146,120,29,155,210,7,178,
    41,201,198,38,149,93,153,171,250,51,101,167,1,223,239,212,
    104,181,216,109,114,108,7,163,44,125,53,118,211,29,215,80,
    169,208,253,219,249,250,237,252,99,78,26,238,131,19,47,23,
    9,34,211,35,4,184,13,120,120,192,196,9,63,99,170,199,
    175,66,45,27,130,60,249,190,141,111,91,134,248,197,70,195,
    128,8,2,78,137,128,100,56,174,69,144,216,166,232,254,214,
    196,253,48,224,41,150,104,137,239,107,234,18,71,116,197,243,
    248,5,23,115,16,234,111,36,149,166,162,191,18,28,203,254,
    43,194,87,226,163,140,17,72,230,127,38,9,245,183,236,46,
    182,240,195,142,34,18,28,28,249,135,34,106,55,155,223,210,
    223,43,121,162,220,18,106,69,61,82,13,145,250,36,68,4,
    145,111,148,246,235,167,163,4,222,230,112,130,152,196,131,45,
    239,110,157,78,57,82,128,136,15,180,153,14,28,115,118,114,
    31,122,60,63,1,3,201,117,77,45,59,150,8,194,145,15,
    209,124,52,137,77,85,142,125,235,42,221,60,155,13,43,249,
    223,183,233,100,11,235,214,69,211,197,89,217,149,236,231,82,
    122,82,17,181,191,129,208,79,184,209,124,98,82,114,196,35,
    28,84,152,24,104,29,224,122,236,40,62,232,241,158,255,90,
    14,122,246,64,231,217,61,95,136,88,254,74,10,64,234,56,
    149,109,197,11,27,214,63,19,104,45,106,104,94,77,49,142,
    0,220,253,65,48,220,142,130,7,125,44,128,85,194,50,110,
    156,82,229,118,85,101,112,94,189,75,107,121,252,184,84,253,
    197,20,171,199,251,36,10,89,149,133,222,81,26,74,148,255,
    97,79,187,67,61,220,230,131,225,94,60,114,119,6,193,174,
    160,80,43,76,122,82,154,100,4,198,74,68,74,46,200,177,
    129,111,164,110,152,38,156,200,14,66,147,102,110,164,185,8,
    215,145,123,215,149,44,232,198,185,27,108,243,219,32,52,150,
    195,167,131,79,10,160,32,219,205,133,85,251,47,209,157,50,
    138,62,31,128,99,174,245,6,52,217,244,109,178,151,140,129,
    138,71,170,56,27,18,188,75,240,241,203,140,109,242,249,4,
    205,61,52,93,170,110,154,211,193,237,23,100,79,231,57,92,
    211,80,107,78,211,145,10,216,74,60,133,116,254,102,4,190,
    252,38,17,168,235,212,155,41,227,176,1,73,61,139,19,28,
    218,38,18,117,175,85,14,158,147,118,94,6,23,202,11,157,
    243,50,184,72,189,54,69,13,25,89,66,24,207,254,191,97,
    44,1,49,229,80,200,191,213,232,245,126,249,29,106,236,61,
    160,98,127,126,87,228,170,170,57,11,54,114,251,170,44,68,
    171,182,200,217,117,249,12,157,252,48,211,129,209,22,139,91,
    83,181,76,2,222,46,247,226,36,18,223,172,3,31,77,140,
    56,150,82,100,124,81,32,42,239,158,112,225,37,183,125,70,
    42,62,20,132,191,146,219,37,49,218,119,108,77,120,66,186,
    198,196,118,128,157,232,151,126,213,126,91,240,65,38,24,141,
    116,18,121,239,65,252,125,170,22,110,34,51,69,196,145,100,
    254,66,149,210,160,166,46,114,121,240,102,92,33,95,85,44,
    19,204,218,147,72,154,46,122,194,203,175,75,94,118,112,107,
    117,146,63,61,36,34,155,49,39,201,210,123,60,113,252,234,
    27,164,75,15,18,131,227,193,187,94,113,97,98,47,106,240,
    100,46,157,21,74,71,191,143,115,59,193,187,222,97,6,57,
    182,203,163,248,88,200,31,233,129,54,250,20,7,132,24,197,
    129,42,210,188,117,165,99,174,229,103,101,144,197,125,127,218,
    121,31,224,102,101,58,226,188,175,26,156,249,87,212,138,211,
    108,52,149,108,157,103,110,111,43,99,141,201,24,202,58,91,
    203,142,115,15,35,6,128,20,187,154,40,225,87,47,132,229,
    142,201,226,35,87,94,229,190,7,40,229,88,179,17,12,237,
    133,134,188,47,14,64,185,13,16,185,94,67,49,224,253,24,
    205,221,9,242,63,47,215,29,222,91,47,237,93,127,50,130,
    165,188,58,10,6,185,103,27,222,147,91,136,170,144,117,138,
    21,125,227,165,78,14,240,238,33,42,12,179,246,214,47,55,
    227,161,189,35,50,75,103,222,71,89,192,253,149,51,163,185,
    206,226,96,16,127,101,47,14,203,97,131,171,192,179,19,194,
    218,201,147,236,210,149,60,42,14,206,244,46,179,140,253,183,
    88,21,45,82,204,195,210,39,167,120,90,253,108,202,4,179,
    181,172,61,150,62,144,83,232,167,220,224,118,167,57,215,228,
    211,56,255,93,228,191,14,103,30,167,198,39,196,5,85,231,
    191,109,254,219,118,230,219,205,122,179,201,114,231,230,213,201,
    255,155,76,204,150,115,115,169,169,254,7,115,34,159,181,
};

EmbeddedPython embedded_m5_internal_param_FUDesc(
    "m5/internal/param_FUDesc.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_FUDesc.py",
    "m5.internal.param_FUDesc",
    data_m5_internal_param_FUDesc,
    2351,
    6691);

} // anonymous namespace
