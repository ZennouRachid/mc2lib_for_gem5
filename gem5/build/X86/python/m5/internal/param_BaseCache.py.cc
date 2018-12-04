#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseCache[] = {
    120,156,189,25,93,115,219,198,113,15,164,40,145,150,44,202,
    31,178,45,201,18,109,75,22,147,212,162,63,226,216,73,28,
    37,142,157,233,180,51,81,28,42,51,182,149,78,49,16,112,
    36,65,145,0,11,28,109,51,149,94,106,79,219,215,62,116,
    166,239,125,105,223,251,220,191,214,238,238,225,40,144,162,108,
    77,90,90,34,151,135,189,189,189,189,253,186,189,131,11,201,
    223,4,126,191,194,111,44,44,0,15,63,2,90,0,109,1,
    59,22,8,105,129,119,22,246,38,32,250,24,188,9,120,3,
    176,147,1,153,129,215,216,200,194,143,25,8,110,2,209,156,
    99,154,103,224,77,142,162,153,102,190,83,208,202,50,198,130,
    94,1,228,4,236,228,224,105,48,7,89,57,9,123,5,136,
    222,128,16,34,16,240,172,87,52,244,83,176,147,71,154,203,
    72,83,96,154,127,17,77,210,153,167,78,162,247,242,224,21,
    224,13,74,124,10,188,83,44,0,206,56,205,141,25,240,102,
    184,113,26,188,211,220,152,53,204,139,176,51,103,218,103,82,
    237,179,169,246,185,84,251,124,170,61,159,106,95,72,181,47,
    166,218,151,82,237,133,84,123,49,213,94,74,181,47,167,218,
    203,169,246,10,183,103,65,206,65,179,4,205,43,208,188,10,
    53,1,94,145,150,131,74,126,190,115,13,100,22,154,171,176,
    179,10,18,63,215,224,181,0,225,205,165,70,172,241,136,51,
    253,17,215,121,196,58,236,172,131,196,207,117,61,98,10,182,
    203,231,209,21,252,255,224,95,89,96,75,77,35,120,33,163,
    216,15,3,219,15,106,161,111,81,255,36,1,114,30,151,64,
    38,241,162,71,228,69,29,96,23,66,217,209,139,14,144,131,
    128,38,58,136,69,51,120,25,184,116,32,232,161,153,129,125,
    108,100,161,198,29,205,108,66,113,128,190,49,7,251,0,205,
    9,216,103,204,246,211,96,17,178,42,199,230,223,35,243,235,
    94,28,75,189,207,112,162,237,50,205,190,197,82,43,146,122,
    131,101,83,69,4,118,199,137,156,182,253,181,19,203,71,142,
    219,144,101,18,93,229,73,254,118,39,140,84,203,223,85,83,
    68,103,7,78,91,218,182,42,224,67,132,131,148,175,112,205,
    42,139,143,205,208,15,80,0,92,81,172,34,191,163,102,250,
    163,237,118,232,117,91,82,157,66,204,175,24,243,77,20,133,
    81,153,52,82,37,160,8,116,246,234,138,36,108,211,20,101,
    18,141,65,188,133,160,210,8,219,178,18,161,104,190,87,121,
    28,186,221,182,12,84,92,169,203,246,221,27,242,86,101,183,
    235,183,188,202,179,251,159,84,58,61,213,8,131,74,251,110,
    5,133,145,81,224,180,42,67,75,219,64,146,51,196,247,165,
    95,183,19,249,26,178,213,145,17,45,55,62,77,115,138,105,
    113,86,44,139,140,152,19,51,194,207,25,11,78,166,45,248,
    143,196,130,86,146,7,208,136,34,177,168,5,7,220,32,51,
    149,201,130,100,184,12,217,11,23,136,230,168,11,120,109,193,
    111,50,68,112,128,48,139,193,187,220,183,94,147,131,87,115,
    154,132,3,180,240,4,26,240,167,37,102,52,197,140,44,216,
    71,136,166,205,194,1,102,7,164,68,20,194,189,60,68,127,
    167,118,51,79,14,44,2,128,103,251,57,180,124,182,111,121,
    237,175,180,18,207,143,72,211,85,114,213,114,193,96,195,120,
    163,227,168,70,117,198,152,5,85,196,230,221,10,3,109,193,
    154,31,120,198,162,218,39,106,126,11,125,162,74,250,99,110,
    76,214,10,157,62,25,41,205,109,133,177,246,43,230,93,157,
    37,66,162,174,117,152,13,205,74,242,240,96,79,198,46,249,
    16,250,150,230,72,18,16,183,177,250,69,149,194,248,28,241,
    94,96,47,40,162,31,228,208,11,202,232,5,211,98,2,91,
    75,214,180,56,45,182,124,82,162,75,171,34,223,200,26,151,
    248,39,104,67,8,216,179,32,90,226,0,197,143,32,107,81,
    20,238,115,132,83,223,247,180,116,141,197,24,71,147,106,228,
    62,59,9,122,11,82,62,160,144,69,3,146,213,39,160,153,
    75,76,140,142,163,93,34,234,17,68,114,98,99,33,243,44,
    196,127,5,84,37,218,126,31,18,31,121,157,65,39,40,2,
    134,43,38,2,196,206,227,132,127,96,215,74,178,1,219,92,
    53,252,56,124,169,163,152,218,156,206,182,49,62,158,244,190,
    219,109,74,87,197,43,136,120,30,118,75,174,19,4,161,42,
    57,158,87,114,20,70,249,110,87,201,184,164,194,210,90,92,
    38,187,85,23,140,219,244,249,245,58,178,202,13,237,43,158,
    239,42,204,31,103,249,129,99,48,150,10,173,222,8,189,24,
    241,52,180,46,85,149,146,18,39,147,144,5,96,167,176,137,
    148,166,69,58,10,211,135,70,2,157,77,114,198,79,98,217,
    170,113,130,114,91,78,28,219,36,1,227,217,187,104,213,47,
    156,86,87,50,247,24,249,161,64,212,212,50,140,55,239,92,
    164,85,152,69,243,74,130,48,240,122,40,152,239,222,161,57,
    47,38,217,135,60,239,60,122,221,36,194,28,254,230,196,188,
    229,102,19,95,203,25,127,155,167,21,3,91,91,36,6,71,
    223,123,141,233,162,108,113,192,243,98,200,87,171,31,82,139,
    6,87,87,9,172,17,184,78,96,221,172,119,108,139,158,25,
    94,52,203,110,241,74,221,76,178,166,126,12,253,56,16,67,
    151,14,99,8,243,217,246,62,239,146,205,76,42,22,50,180,
    234,104,51,9,29,138,50,52,49,70,25,145,114,204,224,214,
    153,246,122,154,112,171,122,137,166,186,130,96,125,45,94,47,
    105,31,43,53,156,184,20,132,135,142,93,162,78,157,177,200,
    173,171,75,164,238,148,227,214,83,142,91,45,17,5,121,109,
    245,26,129,236,113,250,254,224,61,234,187,174,245,253,75,154,
    104,58,241,172,25,246,168,130,112,201,45,200,8,253,13,237,
    123,4,189,11,164,249,180,206,47,224,86,246,52,88,192,221,
    137,21,79,27,212,29,222,160,120,147,227,186,210,36,173,230,
    132,105,228,72,253,181,12,204,39,59,79,76,91,67,39,10,
    95,245,74,97,173,164,192,8,244,96,45,222,88,139,63,199,
    236,81,218,60,84,116,146,41,34,217,161,72,215,145,79,74,
    80,126,128,207,196,234,155,87,174,228,205,129,159,108,91,7,
    186,174,74,236,100,211,65,155,176,17,44,99,4,78,117,88,
    154,80,134,27,175,5,10,125,11,208,26,158,208,44,5,86,
    127,70,92,192,208,78,41,159,190,228,145,49,185,213,159,128,
    203,79,1,127,4,210,45,170,48,137,99,142,18,19,41,68,
    25,255,22,56,230,71,236,52,186,26,164,221,133,41,48,68,
    226,123,76,170,55,158,95,195,159,83,9,195,108,15,153,164,
    60,73,7,74,182,31,40,108,148,19,109,1,217,193,88,33,
    133,99,80,17,25,71,133,46,248,86,7,115,15,215,35,172,
    3,169,198,102,145,41,205,223,38,81,158,31,218,131,18,237,
    162,56,107,105,119,96,79,185,71,224,126,63,72,133,193,141,
    67,170,149,225,204,152,218,14,108,157,90,158,209,212,89,22,
    118,118,146,189,189,207,129,75,82,72,34,248,107,162,187,141,
    64,226,217,77,240,97,19,232,24,131,30,66,208,34,3,191,
    182,4,30,57,177,16,120,195,71,78,125,180,172,234,66,128,
    61,210,124,57,29,80,26,25,72,190,172,139,45,173,165,190,
    141,181,249,8,188,26,111,76,145,5,31,180,156,246,174,231,
    108,198,52,7,77,228,154,24,178,140,212,197,180,212,228,255,
    226,56,193,249,241,115,35,253,139,241,22,150,15,18,137,89,
    106,246,118,47,116,57,232,127,104,200,82,91,182,119,241,240,
    216,240,59,165,90,203,169,179,45,50,201,170,190,51,171,82,
    108,204,84,128,114,106,136,105,99,223,10,75,110,24,96,106,
    235,186,42,140,74,158,196,18,93,122,165,27,37,206,139,37,
    63,46,57,187,216,235,184,74,251,243,96,44,114,109,228,68,
    245,152,203,160,189,151,212,28,191,45,109,60,39,251,88,9,
    118,161,95,12,232,29,128,115,8,21,67,92,227,233,240,192,
    173,3,207,103,170,167,211,209,67,2,119,9,84,32,189,153,
    142,205,122,159,33,203,136,120,147,130,114,98,209,202,91,106,
    54,29,138,79,104,76,124,52,32,255,45,78,16,144,50,11,
    59,19,68,32,115,208,156,100,56,69,121,123,39,111,144,5,
    134,167,24,57,109,144,51,12,79,51,114,214,32,139,12,231,
    24,121,198,32,207,50,60,199,200,243,6,57,207,240,2,35,
    47,26,228,37,134,11,140,92,52,200,37,134,151,25,185,108,
    144,43,12,75,140,188,98,144,87,25,94,99,228,170,65,174,
    49,188,206,200,117,131,44,51,252,128,145,31,26,228,71,12,
    127,193,200,27,6,185,193,176,194,200,155,6,121,139,225,109,
    70,222,49,200,143,25,222,101,228,39,6,121,143,225,125,70,
    126,106,144,159,49,252,156,145,15,76,66,252,130,145,155,176,
    243,165,185,194,251,138,146,99,238,127,77,142,156,99,198,159,
    93,246,255,175,57,177,250,197,251,21,186,186,9,73,17,116,
    92,62,28,40,85,31,235,124,168,117,143,165,82,239,28,47,
    208,92,152,209,45,29,95,135,42,46,74,169,102,253,146,175,
    196,184,180,181,45,93,182,30,90,141,108,172,175,25,72,130,
    64,190,180,135,34,91,151,165,68,230,116,58,50,240,170,55,
    105,196,45,72,151,151,76,51,94,149,81,226,251,11,164,170,
    151,140,56,135,21,204,81,247,164,28,154,90,31,187,97,177,
    239,144,171,239,197,182,127,51,182,45,63,28,72,235,85,202,
    140,58,145,247,115,184,86,254,202,209,148,106,99,153,25,217,
    145,19,212,101,76,199,153,119,210,96,33,197,39,134,20,78,
    93,26,53,38,142,67,151,57,30,223,75,188,200,229,248,73,
    173,143,160,243,100,219,161,203,176,184,129,147,201,88,70,47,
    36,243,60,41,45,205,64,46,55,162,111,228,74,27,184,99,
    182,28,37,3,183,119,172,54,210,52,70,27,41,156,42,141,
    24,227,199,56,173,227,217,97,208,210,140,223,73,68,156,233,
    4,151,70,170,171,35,70,181,157,87,118,219,199,211,153,27,
    118,3,197,204,79,64,70,236,105,251,31,68,143,180,21,41,
    45,62,214,146,186,215,88,146,159,212,245,17,116,157,72,214,
    164,114,27,184,16,219,113,93,25,107,150,39,36,37,254,116,
    167,124,180,75,45,191,133,131,140,120,146,119,144,16,243,66,
    138,57,22,66,171,35,70,160,223,116,176,8,148,3,14,114,
    34,66,154,128,178,195,112,135,90,27,49,58,150,191,235,98,
    110,240,157,86,90,79,39,163,164,137,230,40,45,12,247,240,
    197,216,145,241,254,79,58,154,142,237,36,126,124,225,135,15,
    106,97,20,85,47,86,178,205,76,222,210,77,108,248,50,144,
    31,71,78,167,156,122,124,172,44,220,105,100,161,7,117,101,
    20,85,93,161,89,209,158,28,229,196,235,221,84,196,148,47,
    226,211,216,145,227,94,70,190,146,246,110,183,86,147,73,52,
    188,155,202,112,31,192,170,219,163,188,145,95,226,144,170,124,
    79,98,44,6,129,116,233,250,37,21,212,63,99,88,156,248,
    254,219,201,142,231,236,118,186,63,71,160,227,135,13,8,116,
    44,25,111,195,106,158,211,118,75,162,230,134,102,209,47,212,
    244,193,197,195,237,39,10,123,182,205,119,33,54,62,183,108,
    251,61,156,88,168,10,248,61,241,222,0,62,177,136,156,56,
    255,238,127,43,159,203,11,62,24,14,189,191,76,225,114,125,
    28,9,175,47,110,122,113,149,48,156,128,147,3,27,75,105,
    167,95,137,242,203,21,189,209,243,235,30,115,164,163,114,128,
    47,54,182,156,182,190,201,231,254,228,194,47,214,165,22,191,
    90,162,163,110,245,35,2,55,250,213,195,167,52,154,106,215,
    246,221,13,163,144,141,135,184,249,87,105,239,71,1,232,68,
    204,175,153,218,119,121,87,75,211,29,42,238,201,97,110,189,
    56,146,104,91,231,134,197,161,78,25,116,219,246,183,178,29,
    70,189,111,67,79,114,208,13,72,146,156,187,53,137,17,103,
    180,28,131,180,71,166,210,68,216,169,95,201,240,222,127,180,
    255,81,43,116,247,164,151,208,92,62,158,230,113,216,118,16,
    63,122,150,109,223,204,50,55,212,239,69,52,234,252,16,22,
    43,22,76,230,148,133,135,77,209,231,100,214,190,60,114,66,
    172,250,163,182,211,34,29,182,56,85,143,54,211,15,148,92,
    201,59,76,31,31,195,135,53,67,206,210,127,226,195,59,71,
    107,63,64,216,69,35,89,247,209,164,17,115,232,83,39,229,
    254,35,227,85,71,118,140,212,200,241,135,177,190,244,210,215,
    217,155,124,123,77,215,129,244,110,40,63,149,199,144,198,223,
    89,252,181,240,32,96,101,68,65,204,136,44,254,22,241,183,
    104,77,23,243,217,124,30,233,78,77,139,183,253,175,96,200,
    23,172,149,229,188,248,47,183,37,123,3,
};

EmbeddedPython embedded_m5_internal_param_BaseCache(
    "m5/internal/param_BaseCache.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_BaseCache.py",
    "m5.internal.param_BaseCache",
    data_m5_internal_param_BaseCache,
    2891,
    8939);

} // anonymous namespace
