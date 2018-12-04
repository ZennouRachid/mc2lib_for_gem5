#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FUPool[] = {
    120,156,189,88,109,83,220,200,17,238,209,138,133,93,192,44,
    198,239,198,70,169,51,241,38,41,179,119,185,144,187,228,28,
    18,199,47,169,187,164,176,79,196,101,204,165,162,18,210,0,
    90,118,165,45,73,216,222,43,248,18,92,73,254,64,126,65,
    190,36,31,238,91,254,95,210,79,143,180,8,176,171,174,42,
    183,7,187,179,163,81,207,75,247,243,116,79,207,4,84,252,
    77,240,247,55,252,205,190,81,68,33,127,20,245,136,250,138,
    182,44,82,218,162,112,129,246,39,40,253,25,133,19,244,150,
    104,171,70,186,70,199,92,177,233,171,26,197,31,18,100,46,
    137,204,38,133,147,239,146,153,145,113,167,168,103,75,139,69,
    195,38,233,9,218,170,211,139,120,158,108,61,73,251,77,74,
    223,146,82,42,86,180,57,108,149,242,83,180,213,96,153,91,
    44,211,20,153,255,64,166,120,217,192,75,200,135,13,10,155,
    244,150,87,60,77,225,180,44,128,103,156,145,202,44,133,179,
    82,185,64,225,5,169,204,149,131,183,104,107,190,172,95,172,
    212,23,42,245,75,149,250,229,74,253,74,165,126,181,82,191,
    38,245,57,210,243,212,189,78,221,27,212,189,73,59,138,194,
    22,166,102,131,188,220,90,36,109,83,247,22,109,221,34,205,
    159,69,58,86,164,194,249,74,143,219,210,227,226,168,199,146,
    244,112,104,203,33,205,159,37,211,99,138,54,218,151,25,182,
    232,191,252,215,102,232,40,159,225,226,149,78,179,40,137,189,
    40,222,73,34,11,239,39,81,0,232,0,69,173,64,252,33,
    16,31,144,192,205,107,103,196,143,120,4,69,93,6,211,194,
    12,97,141,174,31,41,60,116,107,116,200,21,155,118,228,69,
    215,46,36,142,24,199,121,58,36,234,78,208,161,180,108,188,
    136,111,146,157,215,5,170,125,64,101,222,114,95,188,221,228,
    137,54,218,152,125,93,86,157,99,213,43,178,182,124,150,11,
    111,224,167,126,223,123,242,252,89,146,244,218,88,119,222,192,
    226,251,131,36,205,123,209,118,62,5,33,47,246,251,218,243,
    242,38,63,164,220,35,143,114,86,56,183,249,177,155,68,49,
    207,206,234,100,121,26,13,100,80,211,219,235,39,225,65,79,
    231,211,220,242,185,180,60,78,211,36,109,195,28,46,138,28,
    197,96,127,55,199,242,250,152,162,141,117,73,145,253,158,139,
    206,94,210,215,157,212,15,246,162,176,243,40,9,14,250,58,
    206,179,206,174,238,175,222,211,31,117,182,15,162,94,216,217,
    252,244,231,157,193,48,223,75,226,78,127,181,195,139,209,105,
    236,247,58,85,189,86,248,253,69,12,250,58,218,245,138,197,
    237,233,222,64,167,208,53,187,128,9,213,140,90,80,183,85,
    77,205,171,89,21,213,75,236,38,171,216,253,171,192,206,42,
    188,149,225,83,5,150,22,29,73,5,0,181,129,29,32,171,
    1,41,214,142,129,216,85,116,108,209,159,106,16,56,226,210,
    102,23,187,61,194,173,43,46,102,70,154,164,35,198,118,130,
    161,251,122,81,6,154,146,129,44,58,228,146,65,181,233,136,
    125,152,37,185,137,203,253,6,165,255,68,189,219,0,117,85,
    76,180,121,88,103,204,237,17,230,134,169,208,36,140,82,152,
    217,5,73,219,205,178,53,201,86,6,126,190,231,206,150,152,
    176,137,4,219,245,36,54,240,237,68,113,88,194,105,8,177,
    19,245,152,16,46,236,39,163,137,88,47,241,71,98,48,90,
    208,75,50,45,164,146,177,221,57,8,66,122,103,32,195,96,
    86,172,71,58,135,58,11,64,32,38,150,25,17,43,192,104,
    227,35,133,11,239,189,132,129,111,8,5,90,76,130,58,83,
    160,205,20,152,81,19,92,91,180,102,212,5,181,30,193,130,
    1,84,2,49,236,146,15,255,38,131,130,162,125,139,210,69,
    241,75,254,40,64,5,231,59,20,199,198,187,47,161,183,105,
    101,215,102,60,77,227,161,48,132,169,194,146,247,225,169,140,
    30,32,159,160,110,189,192,151,89,99,248,144,14,81,178,56,
    134,177,120,112,155,178,127,16,219,145,129,63,164,130,32,199,
    53,102,64,139,216,81,217,255,185,245,10,79,248,23,225,85,
    17,4,4,240,124,47,202,146,215,198,127,81,151,40,182,193,
    206,241,108,248,116,187,171,131,60,91,226,134,151,201,129,19,
    248,113,156,228,142,31,134,142,159,179,127,111,31,228,58,115,
    242,196,89,206,218,0,205,189,81,114,102,52,222,112,160,93,
    169,24,162,132,81,144,115,228,88,144,7,113,192,76,231,12,
    249,94,18,102,220,142,174,187,58,119,91,232,1,227,38,178,
    0,97,132,7,81,76,203,114,240,209,7,229,10,76,28,169,
    151,36,201,116,111,71,66,83,208,243,179,204,195,10,164,93,
    168,5,173,95,249,189,3,45,163,103,60,30,47,8,85,179,
    134,49,70,156,107,80,161,212,88,212,136,147,56,28,242,170,
    162,224,99,76,120,173,136,59,160,221,101,166,220,36,151,117,
    254,173,171,43,86,96,23,68,171,151,100,187,2,117,73,160,
    86,5,218,76,188,99,14,20,109,75,92,93,52,1,81,221,
    31,163,134,206,238,29,20,203,40,126,136,226,110,169,236,120,
    52,158,61,171,177,44,220,18,53,131,90,161,208,200,123,190,
    58,229,61,215,79,188,135,195,216,198,161,108,139,221,90,197,
    11,106,80,57,93,43,156,6,254,197,224,178,127,65,84,188,
    133,247,202,42,223,49,225,186,123,29,83,253,128,139,187,203,
    217,93,199,176,203,217,243,51,39,78,78,40,237,224,165,9,
    84,32,180,187,8,91,87,40,187,91,161,172,235,64,2,124,
    117,63,64,97,191,207,216,63,250,190,140,189,107,140,253,59,
    204,50,83,112,106,86,184,212,84,1,8,1,4,70,155,216,
    151,92,12,175,194,236,85,131,95,229,237,235,69,124,131,119,
    36,177,58,54,165,143,101,83,146,141,77,50,190,50,86,117,
    39,202,74,29,182,223,169,209,149,98,183,201,176,29,12,210,
    228,205,208,73,118,156,156,202,5,221,95,206,86,150,179,207,
    56,104,56,107,39,86,46,2,68,170,7,112,112,227,240,176,
    64,30,197,252,140,161,30,191,9,180,108,8,242,228,121,198,
    191,77,26,226,21,27,13,3,34,8,88,37,2,18,225,56,
    23,65,96,27,163,249,155,35,243,67,129,103,152,162,41,182,
    175,169,171,236,209,21,203,227,11,46,102,32,212,223,72,50,
    77,69,127,37,24,150,237,87,184,175,248,71,233,35,144,204,
    254,76,226,234,239,216,93,76,226,135,29,69,36,216,57,178,
    79,68,212,108,54,95,208,223,43,113,162,220,18,106,69,62,
    82,117,17,123,228,34,130,200,183,10,251,246,105,47,129,181,
    217,157,32,38,254,96,210,187,59,167,67,142,36,32,98,3,
    157,143,7,142,41,51,184,135,117,188,60,1,3,193,245,166,
    90,176,12,17,132,35,159,160,248,116,228,155,170,108,251,206,
    151,180,116,54,26,86,226,191,103,194,201,38,230,181,101,165,
    115,147,178,43,153,238,146,122,82,225,181,191,133,208,79,185,
    208,124,146,82,114,244,35,28,84,152,24,40,45,224,122,108,
    41,62,0,242,158,255,86,14,128,230,160,231,154,61,95,136,
    88,126,37,4,32,116,156,138,182,98,133,117,99,159,17,180,
    6,53,20,111,198,232,71,0,238,126,207,239,111,135,254,90,
    15,19,96,150,160,244,27,171,92,114,171,186,100,112,94,189,
    111,213,242,248,89,185,244,87,99,204,30,239,147,28,226,204,
    146,133,222,97,18,136,151,255,113,79,59,125,221,223,230,131,
    225,94,52,112,118,122,254,174,160,80,43,84,122,90,170,148,
    11,140,21,143,148,88,144,97,3,95,79,156,32,137,57,144,
    29,4,121,146,58,161,230,36,92,135,206,61,71,162,160,19,
    101,142,191,205,111,253,32,55,28,62,237,124,146,0,249,233,
    110,38,172,218,127,141,234,152,81,244,248,0,28,113,174,23,
    211,104,211,55,193,94,34,6,50,30,201,226,140,75,240,46,
    193,199,175,124,104,130,207,3,20,171,40,58,84,221,52,199,
    131,219,47,97,17,12,12,211,212,213,77,171,97,73,6,108,
    36,158,65,58,59,239,129,219,223,198,3,181,77,91,19,165,
    31,214,33,169,39,113,130,67,217,64,160,222,106,150,119,58,
    211,210,56,35,215,37,245,226,186,132,61,118,242,255,245,88,
    225,254,152,89,127,240,157,58,170,251,171,239,113,197,238,26,
    21,91,241,251,156,84,85,213,153,53,78,218,85,101,206,89,
    213,69,142,169,11,103,152,227,5,169,246,115,109,176,184,51,
    86,205,196,183,205,116,111,78,156,238,124,202,247,104,164,196,
    177,100,29,195,75,2,81,121,205,132,187,45,185,240,203,37,
    185,67,238,247,107,185,72,18,165,61,203,164,127,39,164,171,
    143,116,7,216,177,126,237,85,245,55,185,29,100,252,193,64,
    199,161,251,33,196,63,162,106,142,38,50,99,68,252,129,33,
    225,73,22,80,83,151,56,19,56,239,87,8,77,21,205,4,
    179,214,200,147,198,139,158,240,242,184,228,101,27,151,35,39,
    161,210,69,204,49,193,113,20,23,221,199,35,195,95,61,75,
    186,39,207,255,192,231,120,28,5,222,251,142,179,144,34,197,
    192,163,216,72,200,27,234,158,206,245,41,12,5,216,226,236,
    19,106,222,101,146,33,167,221,147,210,200,226,158,55,238,16,
    253,208,48,214,220,205,113,136,86,117,14,210,151,173,70,189,
    161,100,143,59,115,205,90,105,171,143,218,112,232,51,73,231,
    48,115,209,146,195,156,197,246,35,75,240,170,55,183,114,25,
    100,172,43,119,83,229,6,5,32,228,252,177,238,247,205,205,
    131,188,47,78,42,153,161,183,220,131,97,215,118,127,130,226,
    222,8,183,95,148,243,246,87,87,74,109,87,158,60,127,164,
    179,128,103,199,206,46,23,98,253,85,185,46,168,10,149,38,
    129,232,185,17,158,14,170,35,188,187,171,145,57,247,82,199,
    7,120,247,16,89,68,126,243,157,61,55,162,190,185,7,202,
    231,207,188,15,83,159,235,151,207,180,102,58,141,252,94,244,
    181,185,28,44,155,115,48,250,236,128,48,212,232,73,118,226,
    74,0,21,108,82,189,203,244,100,211,207,85,69,139,216,242,
    176,52,231,41,130,87,187,141,153,153,38,95,53,71,207,53,
    57,105,126,193,5,110,112,26,83,13,62,113,243,239,28,255,
    90,28,114,172,26,159,2,103,149,205,191,45,254,109,89,51,
    173,134,221,104,176,220,244,140,58,253,191,196,188,110,90,75,
    173,134,250,31,75,61,160,229,
};

EmbeddedPython embedded_m5_internal_param_FUPool(
    "m5/internal/param_FUPool.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_FUPool.py",
    "m5.internal.param_FUPool",
    data_m5_internal_param_FUPool,
    2344,
    6691);

} // anonymous namespace