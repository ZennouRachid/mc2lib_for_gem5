#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ClockDomain[] = {
    120,156,189,88,109,115,220,72,17,238,209,202,107,239,198,78,
    214,121,79,28,46,162,72,200,2,21,239,29,71,184,131,11,
    225,114,151,43,10,62,248,114,50,85,113,124,20,42,89,154,
    93,107,189,43,45,210,56,201,166,236,47,56,5,252,1,126,
    1,95,224,59,255,15,250,233,145,20,57,47,85,87,5,182,
    189,59,59,26,245,204,244,244,211,79,79,207,68,84,254,45,
    240,247,115,254,22,127,82,68,49,127,20,77,136,166,138,182,
    29,82,218,161,248,2,237,45,80,254,51,138,23,232,21,209,
    118,139,116,139,142,184,226,210,183,45,74,63,36,200,92,20,
    153,45,138,23,223,37,179,44,227,46,209,196,149,22,135,230,
    93,210,11,180,221,166,39,233,42,185,122,145,246,186,148,191,
    34,165,84,170,104,107,222,171,228,151,104,187,195,50,223,99,
    153,174,200,252,27,50,229,203,14,94,66,62,238,80,220,165,
    87,172,241,25,138,207,136,2,60,227,178,84,86,40,94,145,
    202,89,138,207,74,229,92,53,120,143,182,87,171,250,249,70,
    253,130,212,207,145,94,165,241,69,26,95,162,241,101,26,42,
    138,123,232,206,139,122,186,125,133,180,75,227,171,180,125,149,
    52,127,174,208,145,34,21,175,54,122,92,147,30,231,235,30,
    215,165,199,26,109,175,145,230,207,117,219,99,137,54,251,151,
    216,244,201,127,248,175,207,230,39,179,204,197,51,157,23,73,
    150,6,73,58,204,18,7,239,23,81,0,172,8,69,171,68,
    237,75,160,54,35,129,140,117,103,212,14,121,4,69,99,6,
    196,193,12,113,139,174,29,42,60,140,91,116,192,21,151,134,
    242,98,236,150,18,135,140,197,42,29,16,141,23,232,64,90,
    54,159,164,107,228,154,182,152,123,15,230,182,111,185,47,222,
    110,241,68,155,125,204,190,33,90,27,104,189,46,186,153,243,
    92,4,179,48,15,167,193,151,147,44,218,123,148,77,195,36,
    237,67,121,211,193,10,166,179,44,55,147,100,199,44,65,50,
    72,195,169,14,2,211,229,135,156,187,153,196,240,170,141,203,
    143,227,44,73,89,5,94,83,97,242,100,102,86,234,222,193,
    52,139,247,39,218,156,225,150,223,74,203,87,121,158,229,125,
    216,196,71,97,80,204,246,70,6,58,78,49,69,31,202,73,
    81,60,230,98,176,155,77,245,32,15,163,221,36,30,60,202,
    162,253,169,78,77,49,24,233,233,189,187,250,163,193,206,126,
    50,137,7,91,159,254,124,48,155,155,221,44,29,76,239,13,
    88,25,157,167,225,100,240,214,226,214,89,8,203,46,158,39,
    163,160,212,112,87,79,102,58,199,130,139,179,152,85,45,171,
    11,234,3,213,82,171,106,69,37,237,10,197,197,38,138,255,
    44,81,116,74,238,49,144,170,68,213,161,67,169,0,170,62,
    80,4,120,45,96,198,75,100,72,70,138,142,28,250,67,11,
    2,135,92,186,76,152,15,106,4,199,66,24,59,210,34,29,
    50,202,11,12,226,203,27,50,208,146,12,228,208,1,151,12,
    175,75,135,204,72,150,228,38,46,247,58,148,255,3,245,113,
    7,78,172,82,162,173,131,54,163,239,214,232,91,159,197,74,
    226,36,135,173,125,184,107,191,91,181,102,197,250,44,52,187,
    254,74,5,12,155,72,0,222,200,82,139,225,48,73,227,10,
    83,235,21,195,100,194,94,225,195,126,50,154,136,77,178,176,
    22,131,209,162,73,86,104,241,44,25,219,63,7,65,72,15,
    103,50,12,102,133,62,210,57,214,69,4,47,98,239,178,35,
    66,3,140,118,194,158,225,131,204,23,49,250,117,241,131,30,
    123,66,155,253,160,207,126,176,172,22,184,118,195,89,86,103,
    213,70,2,51,70,88,23,188,195,173,156,226,95,100,161,80,
    180,231,80,126,67,104,202,31,5,188,192,197,3,225,57,222,
    125,131,197,219,86,102,58,131,106,27,15,196,77,216,95,88,
    242,62,136,203,16,2,247,5,26,183,75,144,217,117,172,83,
    228,115,148,44,142,97,28,30,220,165,226,239,196,198,100,244,
    15,168,244,146,163,22,187,65,143,152,178,28,14,184,245,50,
    79,248,103,113,174,50,38,8,234,102,55,41,178,231,150,201,
    168,75,80,219,100,134,60,158,127,189,51,214,145,41,110,114,
    195,211,108,223,139,194,52,205,140,23,198,177,23,26,102,250,
    206,190,209,133,103,50,239,118,209,7,114,254,245,202,113,234,
    241,230,51,237,75,197,122,75,156,68,134,99,200,5,121,16,
    22,22,218,48,238,187,89,92,112,59,186,142,180,241,123,232,
    1,227,102,162,128,184,69,0,81,76,203,114,32,234,195,74,
    3,27,81,218,149,167,20,122,50,148,32,21,77,194,162,8,
    160,129,180,139,127,97,213,207,194,201,190,150,209,11,30,143,
    21,66,213,234,112,210,177,231,42,214,81,45,91,214,146,102,
    105,60,103,213,146,232,99,204,122,181,140,64,240,189,75,236,
    119,139,92,182,249,183,173,46,59,145,91,122,91,187,242,184,
    203,88,51,9,222,170,132,156,189,239,136,67,70,223,17,210,
    203,114,224,173,254,143,81,67,103,255,22,138,219,40,126,136,
    226,78,181,226,19,92,246,202,155,203,22,237,29,89,107,212,
    42,87,85,243,232,219,99,60,186,246,154,71,28,213,54,15,
    100,191,28,183,26,124,104,97,221,249,131,146,62,96,26,195,
    204,76,131,168,240,134,55,209,166,231,99,194,13,255,26,166,
    250,62,23,119,110,23,119,60,235,103,222,110,88,120,105,246,
    218,185,61,188,180,113,11,174,237,223,128,193,27,206,59,106,
    56,175,239,65,2,158,235,255,0,133,251,62,139,255,232,84,
    45,62,178,22,255,13,166,90,46,189,107,69,188,170,171,34,
    184,6,96,168,55,182,111,184,152,95,129,237,155,86,191,194,
    91,218,147,244,58,239,82,98,122,108,84,31,203,70,37,155,
    157,228,116,85,232,26,47,84,149,54,0,24,182,232,114,185,
    3,21,216,34,102,121,246,98,238,101,67,207,80,165,208,253,
    219,197,250,237,226,51,142,33,222,131,215,166,46,227,69,174,
    103,224,187,229,63,204,96,146,148,159,49,212,87,47,34,45,
    155,132,60,5,129,165,187,205,79,130,114,243,97,84,4,6,
    167,130,65,2,30,39,41,136,115,39,141,65,183,198,0,171,
    192,20,69,87,0,104,169,43,76,240,134,249,241,133,87,22,
    112,173,191,146,36,163,138,254,66,176,46,27,177,100,179,48,
    165,98,11,36,139,63,146,48,255,29,59,142,205,13,177,203,
    136,4,211,164,248,68,68,237,6,244,59,250,91,35,108,84,
    219,68,171,76,84,154,100,113,107,178,8,44,223,105,43,112,
    143,243,5,38,103,98,65,76,152,97,147,191,91,199,35,144,
    100,38,98,3,109,78,16,147,37,59,67,0,101,158,190,70,
    4,1,119,77,93,112,172,75,136,183,124,130,226,211,154,170,
    170,106,59,25,189,110,190,25,33,27,27,67,96,67,204,22,
    38,119,69,221,115,139,194,136,198,24,146,162,82,201,228,47,
    32,249,83,46,52,159,159,148,28,248,8,71,27,246,19,148,
    14,96,62,114,20,31,251,56,45,120,37,199,62,123,188,243,
    109,90,32,126,89,125,37,44,32,156,28,11,195,98,143,13,
    107,169,26,105,11,34,138,23,39,205,45,224,120,127,18,78,
    119,226,240,193,8,179,96,170,168,226,146,83,233,221,107,234,
    13,30,168,247,169,46,143,159,85,250,63,59,233,84,243,62,
    15,90,235,45,126,31,103,145,208,255,247,187,218,155,234,233,
    14,31,42,119,147,153,55,156,132,35,193,163,85,174,235,235,
    106,93,70,0,109,80,85,130,68,129,141,126,35,243,162,44,
    229,48,183,31,153,44,247,98,205,105,187,142,189,187,158,196,
    72,47,41,188,112,135,223,134,145,177,126,125,156,149,146,45,
    133,249,168,144,196,104,239,57,170,167,129,103,192,39,232,132,
    179,67,100,45,101,114,96,247,3,137,39,72,143,36,239,179,
    52,225,141,132,79,109,102,110,67,211,67,20,247,80,12,168,
    185,185,158,32,130,191,228,65,135,24,29,70,106,171,53,167,
    227,152,213,227,164,124,140,126,197,219,212,124,244,93,168,169,
    93,218,94,168,8,218,38,189,136,243,223,118,167,186,214,233,
    130,172,237,255,149,172,226,241,167,225,235,179,255,43,71,253,
    95,157,182,218,254,3,42,183,231,247,241,243,88,26,245,200,
    242,211,218,159,55,241,249,69,89,98,117,177,131,219,36,185,
    38,51,146,48,33,159,250,181,92,221,72,218,21,56,54,165,
    122,141,28,112,182,71,97,92,63,165,250,121,240,150,151,217,
    164,9,130,225,108,166,211,216,255,16,125,62,162,102,242,35,
    50,39,109,182,135,165,201,234,157,181,165,46,242,238,250,182,
    155,130,213,141,53,138,59,246,106,199,188,117,74,8,191,172,
    16,182,7,216,58,212,248,96,170,13,46,117,92,177,97,70,
    112,192,57,45,214,19,109,244,219,80,24,172,162,60,32,196,
    154,227,108,54,231,180,116,81,26,185,79,16,156,74,124,130,
    141,179,10,7,142,79,170,237,116,218,29,37,97,254,141,91,
    202,70,91,187,110,147,212,77,18,178,121,225,163,197,192,24,
    101,240,21,29,130,230,197,167,92,158,88,219,200,133,78,21,
    158,97,70,73,208,55,248,248,45,39,117,121,95,166,242,133,
    117,83,185,60,194,198,229,255,4,197,221,218,234,191,64,239,
    53,46,166,247,214,171,229,174,219,229,110,38,83,123,59,33,
    247,72,211,123,18,124,155,98,113,206,150,16,194,52,91,11,
    157,39,225,36,121,105,175,175,170,102,131,11,169,55,199,133,
    86,245,147,196,123,129,189,97,103,177,70,174,71,73,193,195,
    200,24,181,124,201,74,160,96,62,160,119,108,11,199,250,158,
    134,71,216,156,201,158,139,30,200,49,232,115,46,112,209,208,
    89,234,240,113,144,127,207,241,175,195,140,117,90,124,58,89,
    81,46,255,246,248,183,231,44,247,58,110,167,195,114,103,150,
    21,254,111,178,39,117,157,155,203,29,245,95,48,152,82,201,
};

EmbeddedPython embedded_m5_internal_param_ClockDomain(
    "m5/internal/param_ClockDomain.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_ClockDomain.py",
    "m5.internal.param_ClockDomain",
    data_m5_internal_param_ClockDomain,
    2224,
    6296);

} // anonymous namespace
