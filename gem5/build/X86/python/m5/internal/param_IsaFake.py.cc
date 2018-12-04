#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_IsaFake[] = {
    120,156,189,25,107,83,27,201,177,103,37,4,146,193,8,243,
    48,6,12,235,51,24,37,41,195,249,121,78,206,113,226,179,
    157,212,165,114,156,111,73,149,49,151,202,214,178,59,192,10,
    105,87,181,59,216,214,5,42,85,193,149,164,42,223,82,117,
    191,32,95,146,239,249,127,73,119,207,142,88,9,129,175,42,
    167,51,208,26,245,244,244,244,123,122,198,62,100,255,134,240,
    239,151,248,151,10,11,32,192,95,1,13,128,166,128,109,11,
    132,180,32,152,132,131,33,72,238,67,48,4,239,1,182,11,
    32,11,112,130,131,34,124,93,128,232,99,32,154,41,166,217,
    130,96,184,31,205,40,243,29,129,70,145,49,22,180,43,32,
    135,96,187,4,175,162,9,40,202,97,56,168,64,242,30,132,
    16,145,128,173,118,213,208,143,192,118,25,105,174,35,77,133,
    105,254,67,52,217,100,153,38,137,62,40,67,80,129,247,40,
    241,37,8,46,177,0,184,227,40,15,198,32,24,227,193,101,
    8,46,243,96,220,48,175,194,246,132,25,95,201,141,39,115,
    227,169,220,120,58,55,158,201,141,175,230,198,179,185,241,181,
    220,120,46,55,158,207,141,23,114,227,235,185,241,98,110,188,
    196,227,113,144,19,80,183,161,126,3,234,31,193,174,128,160,
    74,234,160,145,95,111,223,4,89,132,250,50,108,47,131,196,
    223,155,112,34,64,4,19,185,21,43,188,226,74,103,197,45,
    94,177,10,219,171,32,241,247,150,94,49,2,155,181,105,12,
    133,240,191,248,175,38,112,164,70,17,188,145,73,26,198,145,
    27,70,187,113,104,209,252,48,1,10,30,159,64,33,139,162,
    103,20,69,45,224,16,66,217,49,138,142,145,131,128,58,6,
    136,69,59,4,5,184,118,44,232,75,189,0,71,56,40,194,
    46,79,212,139,25,197,49,198,198,4,28,1,212,135,224,136,
    49,155,175,162,121,40,170,18,187,255,128,220,175,103,113,45,
    205,110,225,70,155,53,218,125,131,165,86,36,245,26,203,166,
    46,35,112,91,94,226,53,221,207,83,239,87,222,129,172,145,
    224,170,76,210,55,91,113,162,26,225,142,26,33,42,55,242,
    154,210,117,85,5,191,36,184,68,133,10,53,86,69,252,90,
    143,195,8,183,71,125,82,149,132,45,53,214,89,237,54,227,
    224,176,33,213,37,196,124,206,152,23,73,18,39,53,178,135,
    67,64,17,104,29,236,41,146,175,73,91,212,72,48,6,233,
    111,17,172,239,199,77,185,158,120,254,126,24,172,63,143,253,
    195,166,140,84,186,190,39,155,15,110,203,59,235,59,135,97,
    35,88,223,122,244,112,189,213,86,251,113,180,222,124,176,142,
    194,200,36,242,26,235,93,138,173,33,193,21,226,250,54,220,
    115,51,233,246,101,163,37,19,82,54,37,75,128,24,21,147,
    98,81,20,196,132,24,19,97,201,120,111,56,239,189,127,101,
    222,179,178,26,128,14,20,153,55,45,56,230,1,185,168,70,
    222,35,167,21,200,87,168,30,186,98,79,192,137,5,191,47,
    16,193,49,194,34,38,238,98,199,115,117,78,92,205,105,24,
    142,209,187,67,232,188,111,22,152,209,8,51,178,224,8,33,
    186,181,8,199,88,25,144,18,81,8,15,202,144,252,147,198,
    245,50,5,175,136,0,182,142,74,232,245,98,199,235,58,86,
    73,147,32,76,200,206,14,133,105,173,98,176,113,186,214,242,
    212,190,51,102,156,130,38,98,231,110,196,145,246,223,110,24,
    5,198,159,58,34,118,195,6,70,132,67,246,99,110,76,214,
    136,189,14,25,25,205,111,196,169,142,42,230,237,140,19,33,
    81,239,182,152,13,237,74,242,240,226,64,166,62,69,16,70,
    150,230,72,18,16,183,1,70,133,67,9,60,69,156,231,56,
    6,170,24,5,37,140,129,26,198,192,168,24,194,209,130,53,
    42,46,139,141,144,76,232,147,78,20,25,69,19,16,255,6,
    237,6,1,7,22,36,11,156,154,248,43,200,87,148,127,71,
    156,219,52,247,21,41,174,177,152,221,232,80,141,60,226,16,
    193,88,65,202,199,148,172,232,62,242,249,16,212,75,153,131,
    49,108,116,64,36,109,130,72,78,108,44,100,94,132,244,91,
    64,67,162,231,143,32,139,144,147,2,134,64,21,48,85,177,
    4,32,118,6,55,252,51,7,86,86,7,216,227,106,63,76,
    227,183,58,131,105,204,133,108,19,179,227,101,251,203,157,186,
    244,85,186,132,136,215,241,161,237,123,81,20,43,219,11,2,
    219,83,152,225,59,135,74,166,182,138,237,149,180,70,94,115,
    230,76,208,116,248,181,91,210,225,129,142,148,32,244,21,214,
    142,73,254,194,25,152,74,133,62,223,143,131,20,241,180,116,
    79,42,167,74,43,200,184,49,11,192,33,225,18,41,109,139,
    116,148,164,79,141,4,186,146,148,76,148,164,178,177,203,197,
    201,111,120,105,234,146,4,140,231,216,34,173,223,120,141,67,
    201,220,83,228,135,2,209,80,203,48,200,154,51,75,58,24,
    149,89,143,40,142,130,54,138,21,250,247,104,199,217,172,242,
    80,220,77,99,204,13,35,44,225,103,73,204,88,126,49,139,
    180,146,137,182,25,210,23,216,215,34,115,55,70,222,9,150,
    138,154,197,201,206,170,80,164,58,63,166,17,45,118,150,9,
    172,16,184,69,96,213,104,59,32,149,199,122,85,102,201,45,
    214,211,47,100,26,117,242,231,235,174,252,185,118,154,63,88,
    201,54,143,248,108,172,23,114,121,80,32,157,147,39,89,218,
    80,134,161,123,49,195,136,148,243,5,15,204,124,196,211,134,
    27,206,53,218,234,6,130,213,149,116,213,214,241,101,239,123,
    169,29,197,167,65,109,211,164,174,85,20,210,206,2,25,59,
    23,180,123,185,160,117,108,162,160,136,117,110,18,40,158,103,
    237,31,253,96,214,222,211,214,254,53,109,51,154,69,213,24,
    71,83,69,248,20,18,228,130,206,65,246,21,130,246,85,178,
    123,222,226,87,241,8,123,21,205,225,169,196,102,167,131,233,
    30,31,76,124,184,113,47,105,202,85,125,200,12,74,100,252,
    221,2,204,100,39,78,74,71,66,43,137,223,181,237,120,215,
    86,96,4,122,188,146,174,173,164,159,98,221,176,159,156,154,
    57,171,17,137,108,81,142,235,156,39,19,168,48,194,239,196,
    234,197,59,95,242,161,192,223,92,87,167,184,238,69,220,236,
    176,65,143,176,11,44,227,2,46,114,216,144,80,109,27,164,
    253,43,29,251,147,6,47,105,143,10,27,191,32,174,98,82,
    231,76,79,127,20,141,41,133,212,95,129,27,78,1,127,1,
    178,44,26,48,203,96,206,16,147,37,68,153,254,1,56,219,
    251,156,48,186,255,163,83,133,41,48,61,210,79,152,84,31,
    56,191,129,191,229,74,133,57,22,10,89,83,146,79,146,98,
    39,73,216,37,223,169,244,23,187,243,132,204,141,9,69,100,
    156,17,186,201,91,238,174,58,220,133,176,13,164,26,144,63,
    70,52,119,151,4,121,125,234,13,42,176,243,98,210,210,161,
    192,81,242,9,129,71,157,244,20,6,247,253,203,180,212,91,
    17,115,135,128,171,75,202,22,109,92,100,81,199,135,217,152,
    217,122,110,65,33,203,220,207,136,234,46,2,137,247,52,193,
    23,75,160,43,11,198,6,65,139,92,123,98,9,188,94,226,
    209,255,158,175,151,250,26,233,232,163,159,99,209,252,113,25,
    160,242,209,85,114,217,14,27,218,66,29,239,106,199,17,120,
    55,200,92,34,223,61,110,120,205,157,192,123,146,210,14,180,
    141,111,114,199,50,50,87,243,50,83,220,139,243,196,230,175,
    159,26,217,223,12,178,141,124,156,201,203,50,115,140,7,177,
    207,169,254,187,125,105,55,101,115,7,47,137,251,97,203,222,
    109,120,123,236,135,66,166,211,151,70,39,197,142,204,165,37,
    23,132,148,14,242,141,216,246,227,8,203,217,161,175,226,196,
    14,36,182,227,50,176,111,219,92,11,237,48,181,189,29,156,
    245,124,165,227,184,59,3,185,19,242,146,189,148,155,158,131,
    183,52,28,180,31,93,188,13,135,216,245,29,66,231,240,215,
    53,159,235,6,181,62,250,250,201,105,129,135,5,222,196,84,
    91,151,160,167,4,30,16,88,135,252,225,57,32,207,253,12,
    25,38,196,153,140,83,18,243,86,217,226,83,53,35,121,73,
    244,233,217,52,172,136,239,144,134,178,8,219,67,38,25,75,
    68,41,135,233,58,71,176,76,5,123,187,98,144,151,24,142,
    50,114,204,32,47,51,28,103,100,213,32,39,24,94,97,228,
    164,65,78,49,156,102,228,140,65,94,101,56,203,200,107,6,
    57,199,112,158,145,11,6,121,157,225,34,35,151,12,210,102,
    120,131,145,31,153,231,173,155,140,92,134,237,21,8,74,140,
    185,69,229,101,248,255,45,47,156,167,131,206,208,163,239,181,
    170,56,63,255,33,69,118,158,64,214,60,156,87,81,68,94,
    159,49,93,81,234,194,244,201,121,101,248,118,61,213,27,228,
    174,159,72,79,73,237,142,229,193,234,198,165,72,239,247,167,
    211,18,113,182,79,125,222,81,227,132,59,165,246,20,123,201,
    188,144,209,179,28,191,127,42,238,72,169,97,253,5,191,129,
    177,218,174,165,123,214,211,192,43,117,180,159,64,16,201,183,
    110,151,5,116,71,74,68,94,171,37,163,192,249,152,232,239,
    64,190,179,100,154,65,122,157,234,223,223,33,215,186,20,196,
    20,182,47,103,179,139,74,105,78,55,118,91,181,147,79,3,
    118,32,7,231,63,76,112,214,168,191,59,173,237,14,149,72,
    93,205,59,133,220,121,209,177,253,220,153,200,219,197,33,182,
    66,77,186,197,92,52,141,13,20,31,47,6,209,135,182,21,
    198,110,26,126,35,207,97,213,153,54,172,12,66,45,158,161,
    77,176,145,220,241,2,23,27,224,132,217,125,128,132,88,210,
    77,39,143,84,11,125,215,4,158,242,238,60,100,166,23,18,
    16,203,74,198,82,163,46,160,191,119,247,3,12,145,160,151,
    225,189,187,23,208,63,188,255,1,134,72,208,203,240,225,125,
    53,127,46,253,35,230,119,209,60,177,43,231,216,61,82,215,
    207,80,31,182,112,70,242,52,243,187,152,130,56,210,189,50,
    135,235,179,2,187,162,200,245,124,95,226,221,178,63,207,60,
    133,225,153,195,113,222,114,81,13,100,67,226,70,93,171,21,
    37,102,246,144,16,72,236,213,226,54,94,97,135,25,137,244,
    174,59,240,62,135,74,198,31,137,51,5,49,246,57,162,132,
    157,206,180,232,249,177,202,165,178,224,214,177,231,127,50,114,
    184,82,7,71,162,234,11,93,59,117,8,163,40,231,179,166,
    142,101,114,243,255,57,194,143,173,186,4,112,230,153,182,143,
    170,5,59,125,195,107,234,151,61,158,207,158,1,82,93,133,
    249,161,153,154,97,231,39,4,110,119,138,203,79,105,181,141,
    160,249,96,205,168,191,166,213,255,204,75,67,255,101,24,63,
    151,111,66,95,242,195,115,243,1,135,223,89,218,83,178,217,
    190,243,155,237,84,97,193,233,93,44,163,195,166,251,133,108,
    198,73,251,139,56,144,156,43,249,249,167,88,3,28,47,218,
    147,104,9,106,222,213,141,94,130,172,115,215,60,12,85,127,
    125,186,105,207,81,4,39,245,19,46,95,60,207,206,63,107,
    196,254,129,12,50,154,235,231,211,60,143,155,30,226,251,239,
    178,25,154,93,38,122,230,131,132,86,77,247,96,83,153,132,
    94,131,234,108,175,133,58,156,140,238,139,125,55,196,174,39,
    105,122,13,50,114,131,195,195,204,115,206,245,245,55,221,48,
    186,81,220,237,231,59,31,142,213,68,238,133,232,220,132,39,
    186,23,100,125,193,179,254,199,86,126,241,160,19,88,95,143,
    245,115,215,19,126,221,162,71,3,122,55,46,143,148,69,137,
    62,199,241,211,194,126,193,42,136,138,24,19,69,252,172,226,
    103,213,26,173,150,139,229,50,210,93,26,21,23,253,44,97,
    242,87,172,165,217,178,248,31,163,17,19,139,
};

EmbeddedPython embedded_m5_internal_param_IsaFake(
    "m5/internal/param_IsaFake.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_IsaFake.py",
    "m5.internal.param_IsaFake",
    data_m5_internal_param_IsaFake,
    2652,
    7935);

} // anonymous namespace