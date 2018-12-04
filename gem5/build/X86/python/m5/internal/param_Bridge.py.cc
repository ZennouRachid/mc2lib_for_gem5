#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Bridge[] = {
    120,156,189,89,123,115,219,198,17,223,3,41,74,164,37,139,
    178,94,214,195,22,59,181,107,246,97,41,105,234,38,109,92,
    183,142,237,233,107,170,56,80,103,44,43,157,98,32,224,68,
    129,34,1,22,128,236,48,35,205,116,42,79,211,47,208,15,
    208,201,63,237,255,253,22,253,80,237,254,246,0,8,122,101,
    146,105,24,139,92,30,22,123,119,123,251,219,221,219,59,123,
    148,253,27,227,239,47,248,155,252,67,17,249,252,81,212,35,
    234,43,218,177,72,105,139,252,89,58,24,163,248,71,228,143,
    209,27,162,157,10,233,10,157,112,163,74,31,87,40,124,139,
    32,51,39,50,219,228,143,95,38,51,41,227,78,80,175,42,
    28,139,134,13,210,99,180,83,163,23,225,12,85,245,56,29,
    52,40,126,67,74,169,80,209,246,176,153,203,79,208,78,157,
    101,110,177,76,67,100,254,13,153,236,101,29,47,33,239,215,
    201,111,208,27,214,248,26,249,215,68,1,158,113,82,26,83,
    228,79,73,227,58,249,215,165,49,157,15,222,164,157,153,188,
    125,163,212,158,45,181,231,74,237,249,82,123,161,212,94,148,
    246,52,233,25,234,222,164,238,18,117,151,105,79,145,223,196,
    116,108,132,151,59,43,164,171,212,93,165,157,85,210,252,89,
    161,19,69,202,159,41,245,184,37,61,110,20,61,110,75,143,
    53,218,89,35,205,159,219,166,199,4,109,181,231,25,170,224,
    191,252,175,205,112,81,58,201,228,149,142,147,32,10,157,32,
    220,139,2,11,239,199,65,0,174,7,82,201,80,126,2,148,
    7,36,16,179,238,140,242,49,143,160,168,203,0,90,152,193,
    175,208,210,177,194,67,183,66,71,220,168,210,158,188,232,86,
    51,137,99,198,110,134,142,136,186,99,116,36,156,173,23,225,
    10,85,211,154,192,115,0,120,204,91,238,139,183,219,60,209,
    86,27,179,111,138,214,41,180,94,23,221,210,41,38,206,192,
    141,221,190,243,65,28,248,29,221,134,222,105,29,202,247,7,
    81,156,246,130,221,116,2,66,78,232,246,181,227,164,13,126,
    136,185,71,26,164,188,224,180,202,143,221,40,8,121,118,94,
    78,146,198,193,64,6,53,189,157,126,228,31,246,116,122,141,
    57,191,22,206,179,56,142,226,54,204,97,131,164,32,131,131,
    78,10,245,250,152,162,13,189,132,36,191,101,178,177,31,245,
    245,70,236,122,251,129,191,241,52,242,14,251,58,76,147,141,
    142,238,63,184,175,223,222,216,61,12,122,254,198,246,123,63,
    222,24,12,211,253,40,220,232,63,216,96,101,116,28,186,189,
    141,242,186,214,249,253,13,12,250,58,232,56,153,114,251,186,
    55,208,49,214,154,92,199,132,106,82,205,170,219,170,162,102,
    212,148,10,106,57,118,227,101,236,254,153,97,103,101,17,202,
    240,169,12,75,139,142,165,1,128,218,192,14,144,85,128,20,
    175,142,129,232,40,58,177,232,15,21,8,28,51,173,114,88,
    221,46,112,235,74,88,153,145,198,233,152,177,29,99,232,62,
    93,149,129,38,100,32,139,142,152,50,168,85,58,230,184,101,
    73,102,49,61,168,83,252,57,218,221,58,92,87,133,68,219,
    71,53,198,188,90,96,110,60,21,43,241,131,24,102,182,225,
    164,237,70,206,141,146,245,129,155,238,219,83,57,38,108,34,
    193,118,51,10,13,124,123,65,232,231,112,26,135,216,11,122,
    236,16,54,236,39,163,137,88,47,114,11,49,24,205,235,69,
    137,113,42,25,219,158,134,32,164,247,6,50,12,102,133,62,
    210,217,215,137,7,7,98,199,50,35,66,3,140,54,58,167,
    176,17,189,115,24,120,89,92,160,201,78,80,99,23,104,179,
    11,76,170,49,110,173,90,147,234,186,218,12,96,65,15,75,
    130,99,84,115,127,248,23,25,20,20,29,88,20,175,74,92,
    242,71,1,42,4,223,145,4,54,222,125,132,117,27,46,135,
    54,227,105,152,71,226,33,236,42,44,249,16,145,202,232,1,
    242,49,234,214,50,124,217,107,140,63,196,67,80,22,199,48,
    22,15,94,165,228,239,196,118,100,224,143,40,115,144,147,10,
    123,64,147,56,80,57,254,153,187,192,19,254,69,252,42,75,
    2,2,120,186,31,36,209,107,19,191,104,75,22,219,226,224,
    120,62,252,112,183,171,189,52,89,99,198,203,232,176,229,185,
    97,24,165,45,215,247,91,110,202,241,189,123,152,234,164,149,
    70,173,187,73,27,160,217,203,185,207,20,227,13,7,218,150,
    134,113,20,63,240,82,206,28,179,242,32,1,152,232,148,33,
    223,143,252,132,249,232,218,209,169,221,68,15,24,55,18,5,
    196,35,28,136,98,90,150,67,140,62,206,53,48,121,164,150,
    59,73,162,123,123,146,154,188,158,155,36,14,52,16,190,184,
    22,86,253,202,237,29,106,25,61,225,241,88,33,52,141,14,
    35,204,56,55,177,132,124,197,178,140,48,10,253,33,107,21,
    120,239,96,194,155,89,222,129,219,205,179,203,141,51,173,241,
    111,77,45,88,94,53,115,180,90,238,108,11,88,46,9,212,
    42,67,155,29,239,132,19,69,219,146,80,151,149,192,81,237,
    239,161,133,206,246,29,144,187,32,223,1,185,151,47,118,52,
    43,158,58,191,98,81,220,146,101,122,149,108,65,69,244,124,
    124,38,122,150,78,163,135,211,216,214,145,108,139,221,74,41,
    10,42,88,114,252,40,11,26,196,23,131,203,241,5,81,137,
    22,222,43,203,254,142,9,55,237,37,76,245,45,38,247,238,
    38,247,90,198,187,90,251,110,210,10,163,83,151,110,225,165,
    73,84,112,104,123,21,182,46,185,108,167,228,178,118,11,18,
    240,87,251,219,32,213,171,140,253,221,111,202,216,29,99,236,
    95,98,150,201,204,167,166,196,151,26,202,131,67,0,129,98,
    19,251,136,201,112,17,102,47,27,124,145,183,175,23,225,50,
    239,72,98,117,108,74,239,200,166,36,27,155,84,121,121,174,
    234,142,229,141,26,108,191,87,161,133,108,183,73,176,29,12,
    226,232,147,97,43,218,107,165,148,43,244,240,110,178,126,55,
    121,159,147,70,235,209,169,149,179,4,17,235,1,2,220,4,
    60,44,144,6,33,63,99,168,103,159,120,90,54,4,121,114,
    28,19,223,166,12,113,178,141,134,1,17,4,172,28,1,201,
    112,92,139,32,177,141,208,252,141,194,252,88,192,115,76,209,
    16,219,87,212,34,71,116,201,242,248,194,23,19,56,212,103,
    36,149,166,162,191,18,12,203,246,203,194,87,226,35,143,17,
    72,38,127,36,9,245,75,118,23,83,248,97,71,17,9,14,
    142,228,93,17,53,155,205,111,232,111,165,60,145,111,9,149,
    172,30,41,135,72,181,8,17,65,228,75,165,253,234,217,40,
    129,181,57,156,32,38,241,96,202,187,59,103,83,142,20,32,
    98,3,157,142,6,142,9,51,184,3,61,94,158,130,129,228,
    186,162,102,45,227,8,226,35,239,130,188,87,196,166,202,121,
    95,187,74,107,231,179,97,41,255,59,38,157,108,99,222,170,
    104,58,61,46,187,146,233,46,165,39,101,81,251,1,132,126,
    200,68,243,233,73,201,113,143,112,80,97,199,0,181,128,235,
    137,165,248,208,199,123,254,27,57,244,153,195,157,109,246,124,
    113,196,252,43,41,0,169,227,76,182,21,43,108,26,251,20,
    208,26,212,64,62,25,97,28,1,184,135,61,183,191,235,187,
    143,14,48,1,102,241,242,184,177,114,149,155,101,149,225,243,
    234,42,173,229,241,253,92,245,87,35,172,30,31,242,120,133,
    202,226,222,126,228,73,148,255,126,95,183,250,186,191,203,7,
    195,253,96,208,218,235,185,29,65,161,146,45,233,195,124,73,
    169,192,88,138,72,201,5,9,54,240,205,168,229,69,33,39,
    178,67,47,141,226,150,175,185,8,215,126,235,126,75,178,96,
    43,72,90,238,46,191,117,189,212,248,240,217,224,147,2,200,
    141,59,137,120,213,193,107,52,71,140,162,195,7,224,128,107,
    189,62,21,155,190,73,246,146,49,80,241,72,21,103,66,130,
    119,9,62,126,165,67,147,124,30,131,60,0,217,160,242,166,
    57,26,220,126,74,226,72,148,192,52,53,181,98,213,45,169,
    128,141,196,115,72,39,23,35,240,63,95,38,2,117,149,118,
    198,242,56,172,65,82,143,227,4,7,90,71,162,222,105,228,
    204,107,66,39,133,57,149,51,175,11,157,22,102,51,103,206,
    8,189,33,204,217,156,57,39,116,94,152,11,57,115,81,232,
    77,97,46,229,23,70,203,194,92,193,237,135,95,19,206,45,
    164,134,241,255,55,53,72,144,141,56,188,210,175,53,35,216,
    63,251,6,53,182,31,81,182,231,95,149,13,84,121,57,83,
    166,111,87,229,197,109,121,45,114,30,158,61,231,162,142,23,
    107,55,213,6,139,59,35,93,153,36,17,51,221,235,211,232,
    190,88,91,62,45,22,113,34,229,205,112,78,32,202,239,179,
    112,137,38,183,137,169,84,145,40,50,127,46,55,86,178,104,
    199,50,117,230,169,211,213,138,181,3,236,80,191,118,202,235,
    55,69,36,100,220,193,64,135,190,253,22,196,223,166,114,49,
    40,50,35,68,28,137,235,207,84,42,55,42,106,142,75,142,
    139,113,133,28,88,90,153,96,214,44,34,105,180,232,137,95,
    126,150,251,101,251,54,149,115,178,141,228,102,178,112,145,128,
    237,103,133,225,23,206,59,157,175,123,238,16,71,142,171,94,
    113,177,35,135,110,121,74,23,207,11,197,110,216,209,137,12,
    112,213,59,140,0,88,205,99,186,116,65,76,255,201,73,130,
    79,181,12,114,245,91,12,131,125,41,103,164,203,23,69,147,
    193,233,72,95,240,26,67,213,101,168,140,147,222,63,47,108,
    110,60,221,132,33,112,120,223,14,249,152,137,59,97,47,58,
    12,83,25,254,171,245,192,140,72,94,95,36,148,254,224,210,
    33,147,158,251,74,95,174,195,87,234,0,21,86,114,21,46,
    151,17,255,151,196,196,104,235,84,159,137,79,9,218,236,0,
    237,51,142,113,52,228,179,219,184,48,89,220,113,70,189,207,
    63,201,92,94,46,90,120,159,87,53,222,233,231,85,241,103,
    213,107,117,37,37,211,185,91,251,18,175,86,240,90,148,159,
    97,134,137,13,142,184,94,86,205,136,50,78,249,63,2,228,
    110,209,196,144,92,117,230,245,14,194,77,124,105,211,237,155,
    139,44,121,159,29,124,19,147,196,228,90,21,69,160,253,125,
    144,251,69,116,254,4,189,225,23,253,7,235,249,186,215,31,
    251,126,108,35,86,88,1,212,138,114,197,218,127,32,224,149,
    229,140,125,126,167,251,230,146,79,14,40,23,223,63,233,69,
    222,129,246,51,153,91,87,203,60,141,250,46,243,47,159,101,
    43,200,103,153,57,247,222,143,209,107,254,28,55,209,113,224,
    246,16,89,176,70,206,78,113,99,124,94,109,24,167,120,146,
    98,174,180,53,10,30,177,238,4,136,24,233,94,136,102,187,
    198,147,28,186,51,129,80,238,54,98,191,52,71,30,115,123,
    241,72,46,43,126,197,4,151,128,245,137,186,170,225,119,154,
    127,45,222,76,172,138,106,168,41,85,229,223,38,255,54,173,
    201,102,189,90,175,179,220,181,73,85,254,91,99,79,110,88,
    107,243,117,245,63,252,252,93,105,
};

EmbeddedPython embedded_m5_internal_param_Bridge(
    "m5/internal/param_Bridge.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_Bridge.py",
    "m5.internal.param_Bridge",
    data_m5_internal_param_Bridge,
    2489,
    7256);

} // anonymous namespace
