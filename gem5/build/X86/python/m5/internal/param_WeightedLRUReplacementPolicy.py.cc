#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_WeightedLRUReplacementPolicy[] = {
    120,156,197,88,109,115,27,73,17,238,89,201,178,165,216,177,
    156,247,23,39,222,203,11,209,1,177,238,56,194,29,92,8,
    132,36,69,65,129,47,183,134,138,227,163,80,173,119,199,242,
    202,210,174,216,29,39,209,97,23,85,56,117,240,7,238,23,
    240,5,190,243,71,248,69,208,79,207,174,188,142,109,48,5,
    101,219,210,104,118,182,103,166,167,159,167,123,122,38,160,252,
    111,130,191,63,230,111,246,15,69,20,242,71,81,159,104,160,
    104,213,33,165,29,10,207,211,230,4,165,223,165,112,130,222,
    18,173,86,72,87,104,151,43,85,250,162,66,241,7,4,153,
    11,34,179,66,225,228,97,50,211,50,238,20,245,171,210,226,
    208,168,65,122,130,86,107,244,34,158,163,170,158,164,205,6,
    165,111,73,41,21,43,90,25,53,11,249,41,90,173,179,204,
    13,150,105,136,204,223,33,147,191,172,227,37,228,195,58,133,
    13,122,203,26,159,161,240,140,40,192,51,78,75,101,134,194,
    25,169,156,165,240,172,84,102,139,193,155,180,58,87,212,207,
    149,234,231,75,245,11,165,250,197,82,253,82,169,126,185,84,
    191,82,170,95,45,213,175,149,234,215,165,62,75,122,142,122,
    243,212,187,65,189,155,180,174,40,108,66,61,54,218,203,213,
    5,210,85,234,185,180,234,146,230,207,2,237,42,82,225,92,
    169,199,123,210,227,220,184,199,45,233,113,155,86,111,147,230,
    207,45,219,99,138,150,91,23,25,218,232,159,252,215,98,120,
    201,76,115,241,74,167,89,148,196,157,40,94,79,34,7,239,
    39,81,128,12,1,138,74,206,138,39,96,197,144,132,18,172,
    59,179,98,135,71,80,212,99,192,29,204,16,86,232,234,142,
    194,67,175,66,219,92,169,210,186,188,232,85,115,137,29,198,
    122,142,182,137,122,19,180,45,45,203,47,226,235,84,53,53,
    129,115,19,112,218,183,220,23,111,87,120,162,229,22,102,95,
    18,173,13,180,94,20,221,204,109,46,58,67,63,245,7,157,
    23,58,234,110,24,29,254,194,251,181,167,135,125,63,208,3,
    29,155,231,73,63,10,70,45,172,198,212,177,164,193,48,73,
    77,63,90,51,83,232,218,137,253,129,238,116,76,131,31,82,
    30,199,68,134,205,96,170,252,216,75,162,152,117,226,69,102,
    38,141,134,102,102,220,187,51,72,194,173,190,54,103,184,229,
    103,210,242,44,77,147,180,5,35,121,40,12,138,225,102,215,
    64,233,1,166,104,65,91,41,50,159,139,246,70,50,208,237,
    212,15,54,162,176,253,52,9,182,160,106,214,238,234,193,131,
    251,250,195,246,218,86,212,15,219,43,159,124,175,61,28,153,
    141,36,110,15,30,180,89,25,157,198,126,191,253,159,87,187,
    200,189,206,97,170,215,81,183,147,171,188,161,251,67,157,194,
    2,217,89,168,161,166,213,121,117,83,85,212,156,154,81,81,
    173,192,121,178,140,243,95,115,156,157,220,251,25,106,149,227,
    238,208,142,84,0,102,11,56,3,222,10,80,229,53,51,104,
    93,69,187,14,253,166,2,129,29,46,171,236,178,55,199,24,
    247,196,101,237,72,147,180,195,60,152,96,152,191,156,151,129,
    166,100,32,135,182,185,100,2,84,105,135,99,2,75,114,19,
    151,155,117,74,255,130,122,175,14,154,171,152,104,101,187,198,
    252,168,142,249,97,89,141,149,132,81,10,227,123,32,116,171,
    81,180,38,217,226,208,55,27,222,76,129,20,155,72,16,95,
    74,98,11,234,122,20,135,5,200,150,38,235,81,159,105,226,
    193,126,50,154,136,245,19,127,44,6,163,5,253,36,211,66,
    53,25,219,155,133,32,164,215,135,50,12,102,133,62,210,57,
    212,89,0,90,49,221,236,136,208,0,163,157,52,85,60,248,
    255,5,76,119,77,136,209,100,106,212,152,24,45,38,198,180,
    154,224,218,188,51,173,206,170,165,8,118,13,176,80,208,165,
    90,176,228,111,100,177,81,180,233,80,58,47,158,205,31,5,
    0,225,190,219,18,26,240,238,115,88,195,182,114,112,96,148,
    109,227,182,240,134,9,196,146,15,225,235,140,41,136,48,65,
    189,90,142,58,115,201,178,36,29,161,100,113,12,227,240,224,
    85,202,190,38,182,46,211,97,155,114,218,236,86,152,23,77,
    98,167,230,8,194,173,151,120,194,63,10,219,242,48,34,52,
    48,27,81,150,188,182,190,142,186,196,193,101,118,153,231,163,
    207,214,122,58,48,217,2,55,188,76,182,220,192,143,227,196,
    184,126,24,186,190,225,88,176,182,101,116,230,154,196,189,155,
    181,0,165,119,173,96,210,120,188,209,80,123,82,177,244,9,
    163,192,112,148,57,47,15,226,150,153,54,76,132,141,36,204,
    184,29,93,187,218,120,77,244,128,113,19,81,64,120,210,129,
    40,166,101,57,120,238,227,66,3,27,115,106,5,117,50,221,
    95,151,48,22,244,253,44,235,64,3,105,23,194,97,213,175,
    252,254,150,150,209,51,30,143,21,66,213,234,112,226,209,233,
    10,22,86,216,65,22,23,39,113,56,98,93,163,224,35,168,
    113,37,143,81,32,227,69,38,226,36,151,53,254,173,169,75,
    78,80,205,233,87,43,40,120,9,70,32,33,128,202,57,192,
    116,220,229,160,210,114,36,44,200,250,64,95,239,155,168,161,
    179,119,7,197,93,20,223,64,113,175,48,193,73,218,97,230,
    93,59,200,114,28,89,124,80,201,151,57,246,180,47,246,121,
    218,213,61,79,227,64,184,188,45,155,112,175,82,242,152,10,
    12,145,62,202,29,12,190,200,68,96,95,132,168,120,22,239,
    204,101,223,192,132,75,222,85,76,245,30,23,247,238,102,247,
    92,203,68,119,195,207,220,56,217,163,191,139,151,54,212,129,
    252,222,60,16,40,209,187,91,162,183,231,66,2,220,246,176,
    93,139,95,28,10,193,251,167,11,65,215,66,240,83,204,61,
    157,243,111,70,120,215,80,1,200,3,92,198,155,227,231,92,
    140,46,3,140,50,12,151,121,91,124,17,95,227,157,78,176,
    192,102,247,145,108,118,178,97,74,102,90,68,187,222,68,81,
    169,1,145,245,10,93,202,119,177,12,219,204,48,77,222,140,
    220,100,221,53,84,40,244,240,110,182,120,55,251,148,195,142,
    251,104,207,246,121,136,73,245,16,33,194,134,12,216,197,68,
    49,63,99,168,103,111,2,45,27,141,60,117,58,54,66,216,
    164,167,147,111,96,12,147,224,226,20,184,72,140,228,204,7,
    161,241,196,65,105,140,65,193,178,158,99,226,134,32,82,81,
    151,57,38,148,240,192,23,188,205,64,190,63,145,228,192,138,
    190,34,152,155,173,154,7,0,241,165,194,159,32,153,253,150,
    36,88,28,178,107,217,148,20,59,149,72,176,35,101,31,139,
    168,221,196,126,78,127,46,69,154,98,171,169,228,217,79,217,
    157,170,99,119,18,156,142,181,157,84,247,123,20,48,96,215,
    131,152,248,142,77,49,239,236,15,90,146,238,136,13,180,57,
    73,144,166,236,148,29,104,247,114,15,34,4,237,235,234,188,
    99,73,35,124,250,24,197,39,99,239,86,69,219,9,41,186,
    240,110,148,45,237,54,29,27,166,86,160,77,85,244,159,157,
    52,115,252,91,26,212,142,36,249,49,229,33,224,39,144,255,
    14,23,154,143,143,74,206,187,132,147,23,243,9,165,3,58,
    236,58,138,79,189,156,130,188,149,83,175,61,221,122,54,5,
    17,254,22,95,137,39,136,67,251,2,186,152,105,201,26,112,
    204,8,11,54,138,55,39,238,148,192,251,97,223,31,172,133,
    254,163,4,211,98,238,160,112,66,167,88,72,179,188,16,56,
    144,58,106,45,242,248,105,177,160,87,39,158,248,62,228,89,
    198,11,17,15,10,147,64,2,201,175,54,180,59,208,131,53,
    62,21,111,68,67,119,189,239,119,5,177,74,190,208,207,138,
    133,26,129,188,228,244,18,110,50,100,25,75,137,27,36,49,
    71,208,173,192,36,169,27,106,62,85,232,208,189,239,74,248,
    117,163,204,245,215,248,173,31,24,235,16,251,253,91,114,55,
    63,237,102,146,166,109,190,70,245,84,16,239,116,162,56,226,
    228,245,119,52,206,76,236,222,35,161,10,201,154,164,165,214,
    191,120,211,226,83,166,25,217,168,247,24,197,3,20,109,42,
    239,236,39,137,241,15,120,150,24,211,193,140,53,117,221,169,
    59,230,214,126,247,62,208,239,57,70,206,14,250,251,218,113,
    252,93,87,105,117,162,240,250,26,36,245,36,14,181,40,235,
    216,77,86,27,197,181,217,25,105,156,150,27,169,90,126,35,
    197,241,97,242,127,141,15,226,83,167,226,77,111,254,175,97,
    193,251,225,169,175,195,123,68,121,110,113,84,72,80,229,69,
    206,216,144,208,83,69,194,93,94,161,156,242,223,63,22,247,
    58,65,170,125,163,45,154,119,78,193,10,18,117,172,18,191,
    223,115,252,131,89,240,211,241,130,119,37,229,26,93,16,144,
    139,219,63,92,57,202,93,173,145,124,23,233,240,143,228,126,
    79,12,212,113,108,70,188,71,230,218,216,78,72,111,98,253,
    250,223,234,105,109,101,147,96,244,244,135,67,29,135,222,7,
    24,228,67,42,39,179,34,115,226,76,66,252,251,3,149,18,
    163,138,186,192,201,209,65,223,70,40,45,89,65,80,111,142,
    189,249,52,240,23,47,248,170,240,130,22,110,178,246,2,190,
    135,104,104,67,252,56,186,123,207,198,208,125,251,152,20,103,
    237,53,14,93,255,93,7,78,225,236,101,27,158,196,196,226,
    83,161,238,107,163,143,65,23,3,195,230,167,212,80,243,6,
    156,140,248,40,52,41,141,60,72,167,115,58,251,20,120,240,
    154,242,219,89,222,167,84,141,119,170,139,78,189,86,87,146,
    20,188,115,41,95,106,171,141,219,36,111,144,131,192,40,243,
    208,98,128,81,190,51,139,98,157,242,61,191,92,252,89,200,
    228,118,178,216,187,129,174,156,20,151,252,129,189,101,146,247,
    249,153,50,179,254,37,55,161,72,115,188,111,161,184,63,38,
    195,247,209,251,58,23,131,7,139,133,13,22,173,13,188,173,
    181,209,19,192,38,151,162,131,7,114,123,127,136,216,187,246,
    57,98,184,229,104,96,47,234,36,95,47,191,15,83,159,235,
    23,223,105,205,116,26,249,253,232,75,109,230,143,84,111,121,
    148,25,61,48,55,143,154,112,216,215,191,212,131,36,29,25,
    247,80,145,199,121,74,151,11,29,174,56,191,204,21,95,56,
    244,253,147,126,18,108,234,48,151,185,113,180,204,211,100,128,
    133,2,157,226,181,185,12,40,143,176,35,232,80,104,120,224,
    173,164,74,178,242,3,71,31,161,80,170,187,17,27,39,149,
    25,142,138,197,160,177,105,31,207,159,203,131,158,138,211,217,
    19,141,189,255,120,36,215,29,184,105,192,149,99,125,170,174,
    106,248,157,229,95,135,3,183,83,81,13,53,163,170,252,219,
    228,223,166,51,221,172,87,235,117,150,59,51,173,14,251,95,
    96,199,109,56,11,205,186,250,23,47,86,220,116,
};

EmbeddedPython embedded_m5_internal_param_WeightedLRUReplacementPolicy(
    "m5/internal/param_WeightedLRUReplacementPolicy.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_WeightedLRUReplacementPolicy.py",
    "m5.internal.param_WeightedLRUReplacementPolicy",
    data_m5_internal_param_WeightedLRUReplacementPolicy,
    2429,
    7510);

} // anonymous namespace
