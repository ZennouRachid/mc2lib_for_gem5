#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetwork[] = {
    120,156,189,88,235,111,27,199,17,159,61,82,148,72,75,22,
    101,91,146,95,177,232,218,138,153,164,22,253,82,146,54,174,
    91,199,118,130,20,141,226,156,10,88,86,138,30,78,119,75,
    233,168,227,29,113,183,178,204,64,2,218,202,232,11,232,151,
    2,253,208,207,253,210,124,239,255,215,206,204,222,157,86,20,
    89,184,15,201,22,151,195,221,217,221,121,252,102,118,118,61,
    200,254,141,225,231,39,248,73,191,179,0,124,252,19,16,2,
    116,5,172,91,32,164,5,254,121,216,30,131,228,1,248,99,
    240,6,96,189,4,178,4,7,72,148,225,155,18,68,119,128,
    120,46,48,207,26,248,227,195,120,38,121,221,9,8,203,220,
    99,65,191,6,114,12,214,43,240,34,154,129,178,28,135,237,
    26,36,111,64,8,17,9,88,235,215,115,254,9,88,175,34,
    207,59,200,83,99,158,127,16,79,54,88,165,65,226,247,171,
    224,215,224,13,74,124,6,252,51,44,0,238,56,201,196,20,
    248,83,76,156,5,255,44,19,211,249,226,117,88,159,201,233,
    115,6,125,222,160,47,24,244,172,65,207,25,244,188,65,95,
    52,232,75,6,125,217,160,175,24,244,85,131,126,199,160,175,
    25,244,130,65,55,12,250,186,65,127,207,160,111,24,244,77,
    131,94,52,232,119,13,250,150,65,55,13,250,61,131,126,223,
    160,63,48,232,239,27,244,109,166,167,65,206,64,103,9,58,
    45,232,220,129,182,0,191,78,102,71,48,188,92,191,11,178,
    12,157,123,176,126,15,36,254,221,133,3,1,194,159,49,102,
    220,231,25,231,138,25,15,120,198,50,172,47,131,196,191,7,
    122,198,4,172,54,103,17,178,193,63,241,95,83,32,165,38,
    177,121,37,147,52,136,35,39,136,218,113,96,209,248,56,53,
    4,114,143,154,82,134,246,39,132,246,30,48,212,81,118,68,
    251,62,174,32,160,131,64,182,104,7,191,4,151,246,5,253,
    232,148,96,15,137,50,180,121,160,83,206,56,246,17,195,51,
    176,7,208,25,131,61,238,89,125,17,93,129,178,170,48,76,
    183,9,166,122,20,231,210,232,26,110,180,218,164,221,87,88,
    106,69,82,47,177,108,234,2,54,78,207,77,220,174,243,185,
    155,68,82,173,72,181,27,39,219,77,18,95,85,73,135,110,
    47,78,84,24,108,168,9,226,117,34,183,43,29,71,213,240,
    71,130,19,85,160,80,111,85,198,159,157,56,136,80,8,212,
    42,85,73,208,83,83,197,108,167,27,251,59,161,84,103,176,
    231,11,238,121,150,36,113,210,36,171,216,212,40,106,122,219,
    155,138,164,236,210,22,77,18,143,155,212,198,166,181,21,119,
    101,43,113,189,173,192,111,61,141,189,157,174,140,84,218,218,
    148,221,229,219,242,110,107,99,39,8,253,214,218,199,31,182,
    122,125,181,21,71,173,238,114,11,133,145,73,228,134,173,33,
    234,45,33,219,57,90,123,55,216,116,50,25,183,100,216,147,
    9,169,156,158,165,125,197,164,56,47,174,137,146,152,17,83,
    34,168,228,158,28,55,61,249,247,204,147,86,150,183,208,153,
    34,243,172,5,251,76,144,187,154,228,73,114,96,137,252,134,
    74,162,91,54,5,28,88,240,139,18,49,236,99,91,198,100,
    115,173,240,98,135,147,141,94,105,28,246,209,211,99,232,200,
    111,175,242,66,19,188,144,5,123,216,162,139,203,176,143,217,
    12,57,177,11,219,237,42,36,127,35,186,83,37,32,139,8,
    96,109,175,130,8,40,23,8,208,184,37,77,252,32,33,107,
    219,4,217,102,45,239,141,211,165,158,171,182,236,169,220,53,
    104,34,118,241,74,28,105,47,182,131,200,207,189,170,113,209,
    14,66,196,133,77,246,227,213,152,45,140,221,130,141,140,230,
    133,113,42,25,91,188,182,61,77,140,196,221,238,241,50,180,
    43,201,195,147,125,153,122,132,35,196,151,94,145,36,160,213,
    78,28,27,54,133,52,133,70,122,153,145,80,71,44,84,16,
    9,77,68,194,164,24,67,234,170,53,41,206,138,149,128,12,
    233,145,102,132,143,114,14,139,239,64,59,67,192,182,5,201,
    85,14,86,252,19,228,49,138,200,61,142,118,26,251,154,212,
    215,189,24,239,232,86,221,185,199,64,65,196,32,231,67,10,
    95,116,34,121,126,12,58,149,204,205,8,30,13,139,164,79,
    45,178,211,50,22,46,94,134,244,47,128,230,68,255,239,65,
    134,147,131,18,2,161,14,24,182,152,20,176,119,14,55,252,
    13,195,43,203,12,236,119,181,21,164,241,174,142,102,162,57,
    181,173,98,140,60,239,127,181,209,145,158,74,23,176,227,101,
    188,211,240,220,40,138,85,195,245,253,134,171,48,218,55,118,
    148,76,27,42,110,44,166,77,242,157,125,57,135,78,177,94,
    191,39,109,38,52,94,252,192,83,152,71,206,243,15,142,195,
    84,42,244,252,86,236,167,216,79,83,55,165,178,235,52,131,
    140,27,179,0,12,12,135,88,105,91,228,163,80,125,156,75,
    160,179,74,37,199,74,42,195,54,39,42,47,116,211,212,33,
    9,184,159,17,70,90,191,114,195,29,201,171,167,184,30,10,
    68,164,150,225,228,243,207,69,210,36,87,156,181,137,226,200,
    239,163,112,129,119,159,246,189,152,101,33,66,223,44,34,111,
    28,219,10,126,87,196,156,229,149,51,188,85,114,204,205,145,
    214,192,30,23,153,211,17,127,7,152,54,154,22,7,62,43,
    68,120,181,223,39,138,38,219,55,169,89,164,230,93,106,110,
    229,58,159,168,226,83,131,138,179,252,22,107,235,149,50,189,
    138,88,250,230,72,44,93,58,140,37,204,109,171,123,124,114,
    118,74,70,76,148,72,243,228,81,22,66,20,109,232,106,140,
    54,98,229,216,193,227,212,68,63,109,184,98,95,162,173,174,
    99,115,107,49,189,213,208,88,107,108,185,105,35,138,15,1,
    222,160,65,157,189,8,222,246,85,50,185,1,224,77,3,192,
    118,131,56,8,189,246,13,106,202,163,108,254,222,41,219,124,
    83,219,252,115,218,108,50,67,216,20,35,171,38,60,130,7,
    57,162,56,224,190,198,166,63,79,214,55,237,62,143,71,219,
    139,232,50,158,86,108,124,58,176,238,243,129,197,135,30,215,
    197,121,2,235,140,229,68,133,92,208,46,193,92,118,18,165,
    116,84,244,146,248,117,191,17,183,27,10,114,129,30,46,166,
    75,139,233,39,152,73,26,143,14,141,157,101,141,68,246,40,
    234,117,22,32,67,168,32,194,223,180,212,179,215,158,228,195,
    130,127,57,142,14,122,93,169,56,217,33,132,126,97,71,88,
    185,35,56,237,97,185,66,217,238,228,189,80,43,188,64,122,
    60,167,157,106,236,130,146,152,199,48,55,28,64,31,66,102,
    74,240,250,29,112,105,42,224,183,64,246,69,51,102,49,205,
    209,146,71,12,113,166,191,4,142,255,33,39,143,174,20,233,
    180,97,14,12,149,244,35,102,213,7,209,79,225,247,70,242,
    200,143,139,82,86,178,152,1,83,46,2,134,29,243,86,71,
    66,249,104,204,144,209,49,184,136,141,163,67,23,130,55,143,
    230,33,174,81,216,6,82,157,168,87,38,244,30,14,137,243,
    242,208,39,148,120,175,136,243,150,134,5,35,230,35,106,62,
    46,2,86,228,125,39,37,217,194,96,166,52,142,8,71,167,
    154,53,218,190,204,2,79,143,115,152,31,89,133,75,86,200,
    34,250,83,226,189,135,141,196,187,168,224,203,51,208,117,7,
    209,66,173,69,206,62,176,4,94,161,177,72,120,195,87,104,
    125,85,182,117,145,192,232,204,63,156,30,104,191,35,9,153,
    109,178,162,173,85,248,91,187,146,154,215,39,31,99,228,205,
    135,161,219,221,240,221,71,191,166,125,104,51,47,143,41,43,
    151,188,110,74,78,241,32,70,9,207,63,63,201,53,120,117,
    242,197,231,67,92,182,144,156,35,192,143,61,78,4,63,223,
    146,141,174,236,110,224,101,115,43,232,53,218,161,187,201,62,
    41,101,154,125,149,107,166,216,169,70,208,114,186,72,233,224,
    95,137,27,94,28,97,202,219,241,84,156,52,124,137,165,188,
    244,27,183,27,156,47,27,65,218,112,55,112,212,245,148,198,
    247,209,248,228,250,201,77,54,83,46,149,182,119,137,60,29,
    159,58,120,183,14,176,98,60,128,162,88,208,167,3,231,22,
    42,152,184,22,212,225,130,199,10,222,229,84,95,167,169,199,
    212,44,83,211,2,243,176,61,81,47,254,16,151,253,21,173,
    79,134,170,136,43,86,213,226,90,225,8,227,115,154,155,30,
    15,210,221,183,9,82,89,134,245,177,60,84,43,196,41,199,
    233,114,72,109,149,18,252,122,45,239,60,195,237,36,119,78,
    229,175,105,103,185,115,26,214,235,224,87,184,103,134,34,125,
    252,127,141,116,14,150,211,9,147,63,254,95,3,220,254,209,
    233,11,110,63,130,236,148,31,21,220,194,212,106,74,7,119,
    71,228,197,173,169,18,95,146,47,15,199,152,227,37,210,85,
    82,59,232,230,105,232,201,25,66,239,250,167,195,152,61,94,
    98,62,45,84,58,224,242,166,127,129,253,150,63,128,209,171,
    27,63,195,42,46,38,169,214,252,49,63,113,177,9,28,75,
    151,155,135,128,172,20,150,152,199,38,146,187,206,16,107,232,
    146,146,88,221,94,79,70,190,125,135,102,221,5,179,52,100,
    158,147,71,3,37,167,63,131,81,117,148,196,5,172,60,142,
    71,32,229,57,67,79,118,100,189,136,185,83,113,41,67,247,
    175,57,116,155,244,130,118,152,126,109,202,92,58,225,22,185,
    214,126,86,120,227,198,8,92,110,236,180,219,50,113,210,224,
    91,73,119,147,183,226,195,106,136,175,0,70,159,186,61,98,
    94,180,67,33,229,196,109,167,23,244,112,170,114,55,101,202,
    59,253,103,51,104,79,122,248,29,58,202,94,228,208,243,101,
    40,149,28,134,57,69,206,202,110,138,190,196,35,54,238,227,
    237,100,156,59,113,150,227,156,210,193,68,96,250,67,158,33,
    241,96,18,21,60,154,102,197,172,85,173,84,5,159,244,3,
    15,216,70,95,165,232,251,16,242,234,188,207,130,130,34,207,
    103,167,47,203,226,152,111,226,252,162,166,129,192,239,124,249,
    249,76,152,225,251,218,138,219,213,207,55,60,158,221,236,82,
    29,151,252,166,72,181,139,253,1,53,183,11,136,253,32,7,
    86,119,121,41,87,123,73,171,253,169,155,202,35,170,243,51,
    99,119,89,93,29,202,254,153,187,19,170,47,99,244,3,191,
    203,152,12,159,133,177,171,80,25,42,151,212,220,192,224,23,
    81,49,116,101,232,194,171,65,87,63,157,169,153,129,113,63,
    113,145,158,29,232,77,101,18,184,33,1,250,157,161,235,217,
    59,27,253,92,163,133,1,14,212,57,240,158,189,86,63,11,
    162,237,92,170,107,163,172,83,112,170,198,200,141,158,224,101,
    58,137,195,16,93,53,220,108,196,180,218,79,149,236,142,216,
    8,213,239,133,242,75,217,141,147,254,136,141,30,103,229,102,
    198,52,220,140,56,152,153,113,80,105,61,254,36,140,189,109,
    233,103,60,195,77,199,60,79,227,46,153,125,208,201,153,180,
    90,149,65,17,36,198,188,163,197,35,136,28,179,197,99,223,
    79,108,55,218,148,185,209,175,15,50,28,81,49,231,26,92,
    166,128,202,191,247,29,214,9,73,215,13,53,88,135,107,202,
    238,181,99,188,128,143,130,37,115,176,247,135,130,8,97,253,
    150,32,202,56,143,249,246,136,67,70,173,99,200,153,179,80,
    244,231,227,124,130,143,10,103,10,167,99,189,92,117,31,47,
    129,56,45,37,114,51,72,201,34,243,195,102,102,117,1,37,
    71,214,101,216,193,96,174,114,58,201,90,223,102,245,219,213,
    35,253,84,133,13,61,8,87,39,170,162,66,223,211,248,109,
    97,213,96,149,68,77,76,137,50,126,215,241,187,110,77,214,
    171,229,106,21,249,206,76,138,255,246,255,2,30,9,53,107,
    97,166,42,254,5,163,4,105,245,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetwork(
    "m5/internal/param_GarnetNetwork.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_GarnetNetwork.py",
    "m5.internal.param_GarnetNetwork",
    data_m5_internal_param_GarnetNetwork,
    2649,
    8116);

} // anonymous namespace
