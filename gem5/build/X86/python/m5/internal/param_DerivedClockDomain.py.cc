#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivedClockDomain[] = {
    120,156,197,88,109,115,27,73,17,238,89,201,178,165,216,177,
    156,196,121,179,239,44,138,152,8,168,88,119,28,225,14,46,
    4,142,75,138,130,15,190,220,154,170,56,58,138,173,245,238,
    88,90,89,218,21,187,227,36,186,178,171,40,156,2,254,0,
    191,128,47,240,157,255,199,245,211,179,43,111,226,56,164,10,
    162,179,165,209,236,108,207,76,247,60,79,247,244,76,64,249,
    223,28,127,127,201,223,236,88,17,133,252,81,52,36,26,41,
    234,58,164,180,67,225,101,58,152,163,244,199,20,206,209,11,
    162,110,133,116,133,78,184,82,165,175,42,20,127,64,144,185,
    34,50,187,20,206,191,78,102,81,198,93,160,97,85,90,28,
    154,52,72,207,81,183,70,143,227,21,170,234,121,58,104,80,
    250,130,148,82,177,162,221,73,179,144,95,160,110,157,101,222,
    99,153,134,200,252,27,50,249,203,58,94,66,62,172,83,216,
    160,23,172,241,5,10,47,136,2,60,227,162,84,150,40,92,
    146,202,69,10,47,74,101,185,24,188,73,221,149,162,126,169,
    84,191,92,170,95,145,250,50,233,21,26,172,210,224,42,13,
    174,209,190,162,176,137,161,216,192,39,221,235,164,171,52,184,
    65,221,27,164,249,115,157,78,20,169,112,165,212,227,166,244,
    184,52,237,177,38,61,214,169,187,78,154,63,107,182,199,2,
    237,180,87,25,134,232,63,252,215,102,40,200,44,114,241,84,
    167,89,148,196,94,20,239,39,145,131,247,243,40,0,92,128,
    162,146,35,248,57,16,28,147,192,199,186,51,130,199,60,130,
    162,1,131,227,96,134,176,66,55,24,97,126,24,84,232,136,
    43,85,218,151,23,131,106,46,113,204,184,172,208,17,209,96,
    142,142,164,101,231,113,188,70,85,83,147,165,63,192,210,219,
    183,220,23,111,119,121,162,157,54,102,223,22,173,13,180,222,
    18,221,204,13,46,188,177,159,250,35,239,129,78,163,167,58,
    252,124,152,4,7,15,146,145,31,197,109,216,96,234,48,100,
    52,78,82,51,140,246,204,2,58,120,177,63,210,158,103,26,
    252,144,114,111,19,25,54,222,84,249,113,144,68,49,107,194,
    166,101,38,141,198,102,105,218,219,27,37,225,225,80,155,11,
    220,242,27,105,121,152,166,73,218,198,210,184,40,12,138,241,
    65,207,64,213,17,166,104,67,71,41,178,199,92,116,250,201,
    72,119,82,63,232,71,97,231,65,18,28,142,116,108,178,78,
    79,143,238,222,209,31,118,246,14,163,97,216,217,253,228,39,
    157,241,196,244,147,184,51,186,219,97,101,116,26,251,195,206,
    121,54,110,177,236,37,76,240,44,234,121,185,162,125,61,28,
    235,20,118,103,23,49,185,90,84,151,213,251,170,162,86,212,
    146,138,106,5,166,243,101,76,255,153,99,234,228,94,201,176,
    170,28,99,135,142,165,2,224,218,192,20,80,86,128,32,91,
    202,0,245,20,157,56,244,251,10,4,142,185,172,178,43,189,
    63,197,115,32,174,100,71,154,167,99,198,124,142,33,253,122,
    93,6,90,144,129,28,58,226,146,193,174,210,49,251,42,75,
    114,19,151,7,117,74,255,129,250,160,14,74,171,152,104,247,
    168,198,92,168,78,185,96,25,12,75,194,40,197,146,187,32,
    111,187,81,180,38,217,214,216,55,125,119,169,192,135,151,72,
    112,222,78,98,11,229,126,20,135,5,180,150,28,251,209,144,
    201,225,98,253,100,52,17,27,38,254,84,12,139,22,12,147,
    76,11,193,100,108,119,25,130,144,222,31,203,48,152,21,250,
    72,231,80,103,1,200,196,36,179,35,66,3,140,54,27,130,
    184,240,240,43,152,228,166,208,161,201,132,168,49,29,218,76,
    135,69,53,199,181,117,103,81,93,84,219,17,86,51,128,121,
    32,73,181,224,198,191,200,34,162,232,192,161,116,93,124,151,
    63,10,176,193,65,143,196,249,241,238,75,172,129,109,101,247,
    103,108,109,227,145,176,133,105,195,146,247,224,205,140,36,224,
    159,163,65,45,199,154,25,100,185,145,78,80,178,56,134,113,
    120,240,42,101,127,39,94,83,38,193,17,229,100,57,169,48,
    27,154,196,14,204,49,130,91,175,242,132,127,22,142,229,129,
    66,192,55,253,40,75,158,89,191,70,93,34,221,14,59,202,
    163,201,23,123,3,29,152,108,131,27,158,36,135,173,192,143,
    227,196,180,252,48,108,249,134,253,126,239,208,232,172,101,146,
    214,102,214,6,128,238,205,130,63,211,241,38,99,237,74,197,
    146,38,140,2,195,17,229,178,60,136,51,102,218,48,252,253,
    36,204,184,29,93,123,218,184,77,244,192,226,38,162,128,176,
    195,131,40,166,101,57,248,235,103,133,6,54,190,212,10,194,
    100,122,184,47,33,43,24,250,89,230,65,3,105,23,154,193,
    234,167,254,240,80,203,232,25,143,199,10,161,106,117,152,81,
    36,186,14,115,10,235,197,164,56,137,195,9,107,24,5,31,
    97,242,235,121,60,2,5,87,153,126,243,92,214,248,183,166,
    174,58,65,53,39,93,173,32,222,85,152,78,2,187,202,145,
    103,18,158,112,0,105,59,18,2,196,42,144,214,253,1,106,
    232,236,222,66,177,137,226,123,40,110,23,134,191,123,235,151,
    94,181,94,140,112,196,228,160,146,27,55,245,170,175,94,242,
    170,27,167,94,197,161,110,231,72,182,212,65,165,228,29,21,
    152,159,222,207,157,9,126,199,160,179,223,65,84,188,136,247,
    217,178,31,96,194,109,23,27,100,246,29,46,110,111,102,183,
    91,150,117,173,190,159,181,226,228,148,234,45,188,180,193,12,
    68,119,215,177,238,37,42,247,74,84,118,91,144,0,143,221,
    239,162,168,158,183,240,223,255,54,22,190,103,23,254,215,152,
    113,49,231,218,146,112,172,161,2,16,5,104,76,55,189,47,
    185,152,92,3,4,229,197,191,198,219,221,227,248,38,239,96,
    130,0,54,177,143,100,19,147,141,80,50,193,34,158,13,230,
    138,74,13,56,236,87,232,106,190,59,101,216,62,198,105,242,
    124,210,74,246,91,134,10,133,238,109,102,91,155,217,167,28,
    88,90,247,79,87,60,15,34,169,30,35,8,216,160,128,213,
    48,81,204,207,24,234,225,243,64,203,6,34,79,158,103,99,
    128,77,97,188,124,99,98,112,4,13,167,64,67,162,32,231,
    49,8,126,51,130,162,49,133,2,198,60,194,116,13,193,161,
    162,174,177,215,151,80,192,23,28,205,64,180,191,146,100,175,
    138,254,66,88,100,94,203,220,197,197,111,10,223,129,100,246,
    7,146,112,240,154,221,200,38,147,216,129,68,130,157,38,251,
    88,68,237,230,244,91,250,91,41,150,20,91,72,37,207,101,
    202,174,83,157,186,142,160,243,86,219,68,245,101,239,193,202,
    179,155,65,76,252,196,166,137,183,94,14,75,146,188,200,26,
    104,243,238,161,89,176,19,121,208,233,201,41,48,8,198,107,
    234,178,99,9,34,220,249,24,197,39,83,255,85,69,219,59,
    85,111,227,213,232,89,218,59,60,27,126,118,161,67,85,180,
    94,158,151,180,247,236,80,146,218,82,238,229,191,66,135,31,
    113,161,249,68,166,228,8,73,56,32,49,121,80,58,192,254,
    196,81,124,144,228,60,226,133,28,36,237,129,209,181,121,132,
    144,181,248,74,200,64,168,121,41,82,203,234,108,219,117,155,
    194,111,145,69,241,124,70,126,7,112,239,13,253,209,94,232,
    223,239,99,50,204,24,20,126,230,20,234,55,203,234,195,71,
    212,121,22,200,227,167,133,25,79,103,148,169,222,131,219,20,
    234,139,107,132,73,32,17,226,119,125,221,26,233,209,30,31,
    84,251,209,184,181,63,244,123,130,78,37,55,239,139,194,60,
    35,240,150,188,89,226,72,134,4,97,59,105,5,73,204,1,
    241,48,48,73,218,10,53,39,255,58,108,221,105,73,52,109,
    69,89,203,223,227,183,126,96,44,231,95,118,92,73,182,252,
    180,151,73,94,117,240,12,213,25,162,235,241,225,60,226,28,
    115,64,211,164,194,110,32,18,121,144,93,73,246,104,93,136,
    119,30,62,2,154,137,13,98,159,161,184,139,162,67,229,77,
    249,221,227,249,51,30,187,135,73,176,100,53,181,230,212,29,
    73,18,207,74,63,194,40,217,89,239,125,246,54,222,171,171,
    212,157,43,124,184,6,73,61,143,211,37,202,58,54,130,110,
    163,104,188,32,229,162,52,46,21,151,77,23,165,113,153,186,
    77,10,107,210,178,130,16,48,255,191,134,0,113,160,25,186,
    206,31,255,175,158,239,254,252,91,210,222,189,79,121,94,112,
    158,215,171,178,105,75,214,235,7,170,72,140,203,118,201,121,
    123,227,13,148,243,130,84,251,70,91,188,110,205,204,98,9,
    34,118,106,115,234,209,103,115,212,7,83,227,78,36,53,154,
    92,17,24,139,251,53,92,234,201,205,165,145,108,20,201,234,
    47,228,6,77,22,195,115,108,190,122,74,210,218,116,77,128,
    117,172,159,189,70,59,187,46,54,49,133,188,63,30,235,56,
    116,63,64,215,15,169,156,96,138,204,140,24,130,32,54,161,
    82,218,82,81,87,56,117,57,235,159,136,135,37,139,5,215,
    230,212,35,103,135,176,112,250,79,5,167,219,72,87,78,99,
    181,139,224,102,163,243,52,48,187,15,167,224,180,223,72,216,
    225,129,23,70,79,163,80,167,56,240,188,189,48,39,86,114,
    184,40,181,153,219,255,181,179,52,200,68,111,43,139,121,26,
    197,60,210,36,232,137,27,134,122,168,141,62,151,117,6,72,
    229,199,206,80,243,102,156,76,248,148,51,47,141,220,213,243,
    102,185,123,129,78,227,34,120,242,238,165,106,188,127,173,170,
    85,167,94,171,43,73,12,94,185,43,47,181,213,166,109,239,
    81,145,229,79,50,23,45,246,214,218,238,211,162,144,87,190,
    126,151,219,58,203,2,185,72,44,118,114,16,70,14,127,219,
    254,200,94,13,201,251,252,152,152,89,247,148,75,75,164,58,
    238,15,81,220,153,242,235,167,232,13,77,70,119,183,10,219,
    183,172,237,37,163,229,6,115,116,215,172,189,86,112,39,26,
    217,123,51,179,242,202,251,48,69,231,213,87,90,51,94,84,
    127,24,125,109,47,86,139,102,233,124,118,102,240,178,244,44,
    153,195,57,113,91,150,46,213,189,40,227,17,101,184,179,193,
    11,208,153,205,55,241,181,60,200,12,73,101,51,117,123,96,
    191,47,231,115,0,139,251,176,250,66,93,213,240,187,204,191,
    14,199,55,167,194,231,229,37,85,229,223,38,255,54,157,197,
    102,189,90,175,179,220,133,69,101,255,55,152,136,13,103,99,
    165,174,190,1,29,42,50,128,
};

EmbeddedPython embedded_m5_internal_param_DerivedClockDomain(
    "m5/internal/param_DerivedClockDomain.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_DerivedClockDomain.py",
    "m5.internal.param_DerivedClockDomain",
    data_m5_internal_param_DerivedClockDomain,
    2344,
    7017);

} // anonymous namespace