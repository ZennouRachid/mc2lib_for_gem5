#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_OpDesc[] = {
    120,156,189,88,221,115,220,72,17,239,209,106,215,222,245,215,
    250,51,254,186,139,40,98,178,64,197,123,199,17,238,224,130,
    225,72,82,212,29,148,147,147,169,138,179,71,161,146,165,241,
    174,214,187,210,34,141,147,108,202,126,0,167,128,7,94,249,
    11,120,225,222,249,255,160,187,71,35,203,206,153,186,42,110,
    47,177,199,163,81,107,166,187,127,191,238,158,153,0,242,127,
    85,252,253,37,254,102,231,2,32,196,31,1,3,128,161,128,
    142,5,66,90,16,46,195,73,21,210,31,67,88,133,55,0,
    157,10,200,10,92,96,199,134,47,42,16,191,7,36,179,194,
    50,135,16,78,125,149,204,44,207,59,13,3,155,71,44,24,
    55,64,86,161,83,131,103,241,34,216,114,10,78,26,144,190,
    1,33,68,44,224,112,220,52,242,211,208,169,163,204,59,40,
    211,96,153,127,147,76,254,178,78,47,73,62,172,67,216,128,
    55,168,241,12,132,51,172,0,174,56,203,157,57,8,231,184,
    51,15,225,60,119,22,204,228,77,232,44,154,254,82,169,191,
    92,234,175,112,127,1,228,34,244,87,161,191,6,253,91,112,
    44,32,108,210,84,104,224,243,206,58,72,27,250,27,208,217,
    0,137,63,235,112,33,64,132,139,165,47,54,249,139,165,226,
    139,45,254,98,27,58,219,32,241,103,75,127,49,13,7,173,
    85,132,33,250,15,254,107,33,20,160,102,177,121,33,211,44,
    74,98,47,138,143,147,200,162,247,83,212,16,112,1,53,149,
    28,193,135,132,224,8,24,62,212,29,17,60,199,25,4,244,
    17,28,139,86,8,43,176,129,8,227,67,191,2,103,216,177,
    225,152,95,244,237,92,226,28,113,89,132,51,128,126,21,206,
    120,228,224,89,188,5,182,170,177,235,79,200,245,250,45,126,
    75,111,15,113,161,131,22,173,190,207,90,43,210,122,151,117,
    83,115,216,120,35,63,245,135,222,147,209,35,153,5,45,210,
    91,213,73,249,225,40,73,213,32,58,82,211,36,228,197,254,
    80,122,158,106,224,67,138,95,168,72,161,193,202,198,199,126,
    18,197,184,58,154,147,169,52,26,241,164,250,107,111,152,132,
    167,3,169,102,112,228,83,30,121,156,166,73,218,34,119,184,
    212,40,106,70,39,93,69,234,13,105,137,22,233,197,77,246,
    27,108,218,189,100,40,219,169,31,244,162,176,253,40,9,78,
    135,50,86,89,187,43,135,247,239,201,247,219,71,167,209,32,
    108,31,126,244,147,246,104,172,122,73,220,30,222,111,163,50,
    50,141,253,65,187,108,215,46,190,95,162,73,95,70,93,47,
    87,174,39,7,35,153,146,173,217,60,45,40,102,197,178,120,
    87,84,196,162,152,19,81,205,96,55,85,198,238,95,57,118,
    86,30,125,8,159,200,177,180,224,156,59,4,80,139,176,35,
    200,42,132,20,90,135,64,116,5,92,88,240,251,10,9,156,
    99,107,99,200,188,91,224,214,231,144,209,51,77,193,57,98,
    91,69,232,94,111,243,68,211,60,145,5,103,216,34,168,54,
    156,99,76,162,36,14,97,123,82,135,244,159,212,239,215,137,
    186,34,6,56,60,171,33,230,118,129,185,102,42,89,18,70,
    41,185,217,37,146,182,26,102,52,201,118,71,190,234,185,115,
    6,19,116,17,99,187,159,196,26,190,227,40,14,13,156,154,
    16,199,209,0,9,225,146,255,120,54,22,27,36,126,33,70,
    78,11,6,73,38,153,84,60,183,187,64,130,36,125,60,226,
    105,104,85,210,135,63,14,17,40,34,16,18,75,207,72,26,
    208,108,147,35,133,75,209,187,66,19,111,50,5,154,72,130,
    26,82,160,133,20,152,21,85,236,109,91,179,98,94,236,71,
    228,193,128,76,34,98,216,134,15,95,130,70,65,192,137,5,
    233,54,199,37,254,8,130,138,130,239,140,3,155,222,125,78,
    118,235,81,12,109,196,83,15,158,49,67,144,42,40,249,128,
    34,21,209,35,200,171,208,175,229,248,34,107,52,31,210,49,
    181,40,78,211,88,56,185,13,217,63,0,253,136,192,159,65,
    78,144,139,10,50,160,9,24,168,24,255,56,186,134,11,254,
    153,121,149,39,1,6,92,245,162,44,121,169,227,151,250,156,
    197,14,48,56,158,142,159,28,245,101,160,178,219,56,240,60,
    57,117,2,63,142,19,229,248,97,232,248,10,227,251,232,84,
    201,204,81,137,179,147,181,8,52,119,211,112,166,152,111,60,
    146,46,119,52,81,194,40,80,152,57,150,249,129,3,48,147,
    10,33,239,37,97,134,227,244,105,87,42,183,73,95,144,115,
    19,86,128,25,225,145,40,45,139,114,20,163,159,24,13,116,
    30,169,25,146,100,114,112,204,169,41,24,248,89,230,145,6,
    60,206,212,34,171,95,248,131,83,201,179,103,56,31,42,68,
    93,173,195,4,51,206,58,153,96,44,102,51,226,36,14,199,
    168,85,20,124,64,11,174,231,121,135,104,183,138,148,155,194,
    182,134,127,107,98,205,10,236,156,104,53,67,182,53,50,23,
    24,106,145,163,141,196,187,192,68,209,178,56,212,217,18,34,
    170,251,3,234,209,199,238,29,106,118,168,249,30,53,119,141,
    177,147,177,120,238,186,197,172,184,197,102,6,149,220,160,34,
    122,190,184,18,61,27,151,209,131,105,236,224,140,203,98,191,
    82,138,130,10,153,156,238,229,65,67,241,133,224,98,124,145,
    40,71,11,214,202,50,223,105,193,125,119,131,150,250,14,54,
    119,119,178,187,142,102,151,211,243,51,39,78,46,41,237,208,
    75,157,168,136,208,238,54,249,186,68,217,110,137,178,174,67,
    18,196,87,247,187,212,216,55,57,251,251,223,150,179,187,218,
    217,191,166,85,102,115,78,205,49,151,26,34,32,66,16,2,
    69,17,251,28,155,241,45,114,123,217,225,183,176,124,61,139,
    55,177,34,177,215,169,40,125,192,69,137,11,27,239,224,76,
    174,234,87,77,167,70,190,63,174,192,90,94,109,50,42,7,
    163,52,121,53,118,146,99,71,129,81,232,193,78,182,187,147,
    125,140,73,195,217,187,244,114,158,32,82,57,162,0,215,1,
    79,30,80,81,140,207,52,213,227,87,129,228,130,192,79,158,
    167,227,91,111,67,188,188,208,32,32,140,128,101,16,224,12,
    135,123,17,74,108,19,116,127,163,112,63,25,240,148,150,104,
    176,239,43,226,22,70,116,201,243,244,75,92,204,136,80,127,
    5,222,105,10,248,11,144,99,209,127,121,248,114,124,152,24,
    33,201,236,15,192,161,254,21,213,69,111,252,168,162,176,4,
    6,71,246,33,139,234,98,243,25,252,173,148,39,76,73,168,
    228,251,145,114,136,216,69,136,48,34,95,43,237,219,87,163,
    132,188,141,225,68,98,28,15,122,123,119,231,106,202,225,13,
    8,251,64,170,201,192,49,173,39,247,72,143,231,151,96,80,
    114,221,18,203,150,38,2,115,228,67,106,62,42,98,83,152,
    177,111,92,165,219,215,179,97,41,255,123,58,157,28,210,186,
    54,107,186,48,197,85,73,127,206,91,79,200,163,246,87,36,
    244,35,108,36,158,140,4,31,229,128,14,42,72,12,106,45,
    194,245,194,18,120,160,195,154,255,134,15,116,250,224,230,234,
    154,207,68,52,191,156,2,40,117,92,201,182,236,133,125,237,
    159,2,90,141,26,53,175,38,24,71,4,220,131,129,63,60,
    10,253,189,30,45,64,171,4,38,110,44,163,114,179,172,50,
    113,94,220,164,53,63,126,108,84,127,49,193,221,227,3,162,
    190,81,153,233,29,38,1,71,249,239,122,210,25,202,225,17,
    30,12,123,209,200,57,30,248,93,70,161,146,155,244,196,152,
    164,24,198,82,68,114,46,200,168,128,239,39,78,144,196,152,
    200,78,3,149,164,78,40,113,19,46,67,231,158,195,89,208,
    137,50,199,63,194,183,126,160,52,135,175,6,31,111,128,252,
    180,155,49,171,78,94,82,119,194,40,122,120,0,142,112,175,
    215,135,162,232,235,100,207,25,131,118,60,188,139,211,33,129,
    85,2,143,95,106,172,147,207,39,212,220,167,166,13,229,162,
    57,25,220,126,134,243,117,105,98,114,77,77,108,89,117,139,
    119,192,90,226,41,73,103,111,71,224,223,191,78,4,74,27,
    58,85,19,135,53,146,148,83,116,130,163,182,78,137,186,211,
    48,131,51,220,206,242,224,156,25,156,231,118,129,7,155,230,
    54,103,145,7,151,160,179,12,97,141,71,86,40,182,167,254,
    223,216,230,40,153,112,124,252,241,27,13,105,247,231,223,162,
    198,238,30,228,69,251,166,112,22,101,115,230,116,56,247,133,
    217,157,150,109,225,3,237,242,53,142,121,65,42,125,37,53,
    22,119,38,106,25,103,1,189,156,186,12,207,183,55,135,143,
    10,35,46,120,127,50,94,97,136,204,133,20,221,130,241,85,
    159,226,109,32,237,18,127,193,87,78,108,180,103,233,141,226,
    37,233,106,133,237,4,118,44,95,122,101,251,245,46,144,100,
    252,209,72,198,161,251,30,137,191,15,229,221,28,203,76,16,
    113,202,60,175,161,180,95,168,136,21,220,51,188,29,87,148,
    196,74,150,49,102,205,34,146,38,139,30,243,242,79,134,151,
    124,5,121,153,84,93,202,78,58,141,22,25,212,125,92,56,
    126,253,58,233,146,209,67,222,70,227,169,225,230,151,184,99,
    209,87,67,250,89,173,189,45,248,91,95,241,28,55,188,162,
    25,170,60,3,62,169,205,235,66,163,104,36,7,84,208,120,
    142,255,241,154,230,225,99,133,25,97,200,56,150,66,57,144,
    74,94,161,20,243,44,63,180,133,18,203,99,50,198,243,194,
    20,15,162,184,231,77,186,182,16,87,232,138,55,163,251,70,
    172,45,162,134,213,101,21,15,99,171,86,189,86,23,92,160,
    175,221,17,151,198,106,197,216,59,96,118,204,227,204,165,17,
    69,8,231,181,147,213,240,202,215,206,124,147,165,1,231,139,
    53,83,93,137,27,236,190,125,127,168,175,77,248,125,126,204,
    202,116,196,241,37,30,109,57,220,31,82,115,175,160,210,79,
    13,129,134,247,119,141,197,187,50,62,37,131,53,47,44,126,
    169,182,174,201,104,175,28,68,67,125,157,164,22,175,189,15,
    83,31,251,171,215,70,51,153,70,254,32,122,173,239,24,205,
    176,162,91,195,235,19,146,202,197,19,23,244,82,118,101,47,
    165,178,27,101,56,3,127,94,136,230,137,231,161,113,232,21,
    210,149,63,155,48,79,244,182,87,159,96,247,248,192,74,72,
    209,69,80,125,186,142,7,119,252,187,128,127,45,204,71,86,
    5,15,147,115,194,198,191,77,252,219,180,102,155,117,187,94,
    71,185,153,89,161,255,223,70,102,53,172,219,75,117,241,95,
    200,158,170,134,
};

EmbeddedPython embedded_m5_internal_param_OpDesc(
    "m5/internal/param_OpDesc.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_OpDesc.py",
    "m5.internal.param_OpDesc",
    data_m5_internal_param_OpDesc,
    2356,
    6706);

} // anonymous namespace
