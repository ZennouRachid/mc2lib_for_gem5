#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Uart[] = {
    120,156,189,88,109,111,27,199,17,158,61,158,40,145,150,100,
    202,178,252,42,219,231,198,178,104,23,22,147,166,110,210,198,
    117,235,216,65,225,2,81,156,83,10,203,74,209,195,233,110,
    73,29,117,47,196,221,202,54,3,169,5,42,163,45,208,207,
    253,5,253,146,126,239,255,107,103,102,111,169,163,94,208,0,
    13,99,139,203,225,238,220,238,236,204,243,204,236,94,0,229,
    191,41,252,252,26,63,197,138,5,16,226,159,128,24,32,17,
    176,101,129,144,22,132,139,176,59,5,249,79,33,156,130,119,
    0,91,53,144,53,56,68,193,134,175,107,144,190,15,164,115,
    145,117,54,33,156,62,77,103,150,231,157,129,216,230,30,11,
    134,77,144,83,176,85,135,151,233,2,216,114,26,118,155,144,
    191,3,33,68,42,96,115,216,50,250,51,176,213,64,157,27,
    168,211,100,157,127,147,78,57,216,160,65,210,15,27,16,54,
    225,29,90,124,14,194,115,108,0,174,56,203,194,28,132,115,
    44,204,67,56,207,194,121,51,121,11,182,22,140,124,161,34,
    47,86,228,139,21,121,169,34,95,170,200,151,43,242,149,138,
    124,181,34,95,171,200,215,43,242,114,69,190,81,145,111,86,
    228,91,21,217,169,200,183,43,242,143,88,62,15,114,1,250,
    239,65,255,14,244,87,160,43,32,108,209,150,49,16,175,182,
    238,130,180,161,191,10,91,171,32,241,239,46,28,10,16,225,
    66,229,137,54,63,113,97,244,196,61,126,226,62,108,221,7,
    137,127,247,244,19,51,176,209,94,66,184,68,255,193,127,109,
    129,146,154,197,230,181,204,139,40,75,189,40,237,102,145,69,
    227,211,212,16,192,2,106,106,37,210,158,18,210,6,192,48,
    67,219,17,105,7,56,131,128,62,130,200,162,21,194,26,92,
    61,16,244,163,95,131,125,20,108,232,242,64,223,46,53,14,
    16,63,11,176,15,208,159,130,125,238,217,120,153,94,7,91,
    213,25,34,187,4,17,61,138,207,210,232,38,46,180,209,166,
    213,215,217,106,69,86,175,177,109,234,28,54,222,192,207,253,
    196,251,157,159,171,54,89,173,26,100,122,50,200,114,21,71,
    219,106,134,84,188,212,79,164,231,169,38,254,200,81,95,69,
    10,183,171,108,252,217,207,162,20,215,198,205,20,42,143,6,
    106,110,244,180,151,100,225,94,44,121,145,231,220,243,89,158,
    103,121,155,156,225,82,163,168,25,236,246,20,25,151,208,18,
    109,178,138,155,226,57,54,157,157,44,145,157,220,15,118,162,
    176,243,44,11,246,18,153,170,162,211,147,201,195,7,242,131,
    206,246,94,20,135,157,205,143,127,214,25,12,213,78,150,118,
    146,135,29,52,70,230,169,31,119,142,118,181,134,163,23,104,
    202,55,81,207,43,77,219,145,241,64,230,180,211,98,158,150,
    19,179,98,81,220,20,53,177,32,230,68,84,55,113,155,174,
    198,237,219,50,110,86,153,33,48,116,162,140,163,5,7,44,
    80,112,218,20,55,10,87,141,162,132,123,195,32,244,4,28,
    90,240,251,26,41,28,96,107,35,173,111,142,98,214,103,90,
    235,153,166,225,0,227,58,133,97,251,102,153,39,154,225,137,
    44,216,199,22,3,106,195,1,230,13,212,196,46,108,119,27,
    144,255,147,228,126,131,96,43,82,128,205,253,58,198,219,30,
    197,91,163,148,118,18,70,57,57,217,37,128,182,155,166,55,
    43,214,6,190,218,113,231,76,68,208,69,28,217,245,44,213,
    193,235,70,105,104,130,169,225,208,141,98,132,131,75,254,227,
    217,88,45,206,252,145,26,57,45,136,179,66,50,164,120,110,
    247,60,41,146,118,119,192,211,208,170,100,15,63,28,202,34,
    32,248,32,172,244,140,100,1,205,54,41,72,184,196,219,139,
    52,237,53,6,64,11,33,80,71,0,180,17,0,179,98,10,
    165,101,107,86,204,139,245,136,252,23,208,134,8,22,182,65,
    195,191,64,199,64,192,174,5,249,50,51,18,255,4,5,138,
    104,183,207,148,166,177,47,105,215,186,23,73,141,209,212,157,
    251,140,15,4,10,106,62,34,142,98,236,40,224,83,208,175,
    151,209,69,204,104,52,228,67,106,81,157,166,177,112,114,27,
    138,127,0,122,17,195,190,15,37,60,14,107,24,255,22,32,
    73,145,249,216,123,9,23,252,51,163,170,164,63,135,91,237,
    68,69,246,70,115,151,100,206,95,27,72,141,23,195,47,182,
    251,50,80,197,45,236,120,149,237,57,129,159,166,153,114,252,
    48,116,124,133,220,222,222,83,178,112,84,230,172,20,109,10,
    153,123,205,32,102,52,223,112,32,93,22,52,76,194,40,80,
    152,53,22,249,7,211,175,144,10,3,190,147,133,5,246,211,
    163,61,169,220,22,61,65,206,205,216,0,157,149,72,149,150,
    69,61,98,232,19,99,129,206,33,117,3,145,66,198,93,78,
    75,65,236,23,133,71,22,112,63,3,139,118,253,218,143,247,
    36,207,94,224,124,104,16,137,218,134,137,101,155,43,180,1,
    179,95,222,68,154,165,225,16,109,138,130,15,105,185,43,101,
    206,33,208,45,33,224,166,177,173,227,119,93,92,178,2,187,
    132,89,221,64,237,18,109,22,56,208,162,140,53,194,238,16,
    147,68,219,98,154,243,62,8,166,238,125,146,232,97,247,14,
    53,43,212,220,165,102,213,108,117,18,251,157,59,190,95,54,
    219,226,77,6,181,114,59,35,230,124,61,198,156,171,71,204,
    193,4,182,177,207,197,176,95,171,48,160,70,27,206,31,151,
    132,33,110,97,96,145,91,164,202,76,193,10,89,197,58,45,
    184,238,94,165,165,110,99,179,186,82,172,58,26,89,206,142,
    95,56,105,118,4,103,135,6,117,138,34,48,187,203,228,233,
    10,92,123,21,184,186,14,105,16,86,221,247,168,177,207,114,
    245,189,31,198,213,61,237,234,223,208,26,179,37,158,230,24,
    71,77,17,16,24,200,255,163,226,245,37,54,195,203,228,244,
    170,187,47,99,217,122,153,94,195,74,196,62,167,98,244,33,
    23,35,46,104,124,186,52,89,170,63,101,132,58,121,190,91,
    131,75,101,149,41,168,12,12,242,236,237,208,201,186,142,2,
    99,208,163,149,98,109,165,248,4,211,133,243,248,200,199,101,
    106,200,229,128,168,173,169,78,251,87,81,138,191,105,170,207,
    222,6,146,11,1,255,242,60,205,108,125,248,240,202,2,131,
    225,96,255,91,198,255,156,219,240,4,66,41,109,98,206,111,
    142,156,79,230,191,160,5,154,236,249,154,184,140,92,174,248,
    157,62,132,195,130,192,244,87,224,179,165,128,191,0,185,21,
    189,87,18,151,185,97,248,65,154,197,31,128,73,126,74,85,
    209,71,61,170,36,172,129,196,40,62,98,85,93,100,126,11,
    127,171,100,8,83,10,106,229,41,164,74,15,123,68,15,142,
    199,119,74,247,246,56,67,200,215,72,37,82,99,46,232,35,
    221,157,241,100,195,199,14,246,129,84,147,8,198,140,158,218,
    35,43,94,29,133,130,146,234,117,177,104,105,16,48,62,62,
    162,230,227,17,43,133,233,251,158,13,186,117,60,11,86,178,
    190,167,211,200,38,173,106,179,157,231,167,185,78,209,195,124,
    212,132,146,173,159,146,202,79,176,145,120,91,19,124,189,4,
    186,148,32,36,168,181,40,162,135,150,192,75,38,86,249,119,
    124,201,212,151,73,87,87,121,134,160,249,48,245,41,101,140,
    229,88,246,192,186,246,205,40,168,58,94,212,188,157,24,127,
    40,100,143,98,63,217,14,253,199,175,105,122,90,35,48,124,
    177,140,193,173,170,193,132,117,113,150,205,252,243,19,99,248,
    235,137,157,21,31,209,236,198,96,6,117,152,5,204,237,175,
    118,164,147,200,100,27,47,128,59,209,192,233,198,126,143,35,
    80,43,55,244,133,217,144,226,16,86,120,200,25,160,160,130,
    189,158,57,65,150,98,242,218,11,84,150,59,161,196,3,183,
    12,157,7,14,103,62,39,42,28,127,27,71,253,64,105,236,
    142,83,142,97,228,231,189,130,79,54,187,111,72,156,104,4,
    61,188,230,70,120,174,123,11,163,34,175,211,59,103,9,58,
    223,240,137,77,83,1,235,2,94,180,212,80,39,156,39,212,
    60,164,166,3,213,34,57,137,152,253,2,103,219,163,105,201,
    45,117,113,221,106,88,156,192,105,252,5,105,22,39,121,151,
    126,23,222,73,27,182,166,72,65,214,161,63,205,237,12,229,
    227,173,134,233,108,114,123,142,59,103,13,79,231,184,115,158,
    95,193,232,119,73,45,226,108,253,255,229,44,227,127,162,200,
    255,211,247,74,85,247,151,63,152,189,238,99,40,75,240,89,
    52,29,59,35,61,211,52,213,30,199,66,61,188,200,123,51,
    239,98,232,5,16,191,141,83,124,26,162,195,210,175,248,109,
    11,159,169,60,75,159,151,142,98,69,145,213,119,89,162,67,
    42,223,120,71,208,211,71,33,210,240,7,3,153,134,238,251,
    164,252,1,84,143,52,172,51,49,71,17,21,223,65,165,108,
    214,196,69,44,157,39,161,72,172,174,236,138,33,215,26,129,
    239,206,164,131,249,119,19,204,246,194,88,142,113,137,176,58,
    171,140,18,138,246,246,229,49,146,123,131,216,87,221,44,79,
    232,192,124,230,24,86,108,253,78,162,236,56,174,136,230,37,
    17,26,120,218,36,163,49,51,137,233,96,31,43,50,59,148,
    177,84,178,18,127,69,30,44,47,25,161,196,228,158,13,241,
    132,59,205,157,168,236,121,147,205,141,20,216,63,66,249,242,
    11,115,35,94,26,150,196,146,213,168,55,4,23,150,99,239,
    48,43,125,245,81,223,143,193,156,239,134,133,75,61,138,130,
    81,102,125,54,192,171,190,22,229,247,45,58,64,236,104,83,
    23,40,140,124,208,95,199,27,59,95,238,121,188,188,18,20,
    154,24,252,162,137,74,165,75,171,186,15,70,81,255,57,61,
    77,60,73,30,174,153,189,174,233,189,190,48,161,180,120,88,
    221,56,85,235,121,138,183,85,188,106,228,89,204,215,246,147,
    26,27,195,66,201,68,93,63,54,40,211,189,196,251,92,38,
    89,62,252,60,11,165,90,62,54,254,36,12,115,215,79,123,
    18,189,64,101,93,221,62,174,80,214,116,61,135,209,114,78,
    181,97,92,247,132,45,90,9,7,245,27,28,62,137,158,28,
    127,26,103,193,174,12,75,157,211,221,193,58,207,178,196,199,
    254,211,87,217,136,204,42,11,199,198,195,156,158,90,58,214,
    91,200,60,242,227,232,155,147,30,26,205,100,246,126,243,212,
    5,49,117,231,137,31,147,147,227,51,66,253,85,73,184,51,
    188,247,169,95,68,193,139,40,123,38,95,71,129,60,99,95,
    71,227,4,63,51,168,232,13,225,169,179,16,115,198,187,248,
    196,193,94,33,154,49,17,114,217,139,16,61,57,79,51,174,
    93,214,129,167,167,100,172,234,147,19,205,3,250,64,174,111,
    212,143,249,2,77,247,79,122,41,213,152,105,96,78,192,239,
    243,248,109,97,113,176,106,120,189,157,19,54,126,183,240,187,
    101,205,182,26,118,163,129,122,231,102,197,255,254,127,11,51,
    75,211,186,53,223,16,255,5,117,154,21,136,
};

EmbeddedPython embedded_m5_internal_param_Uart(
    "m5/internal/param_Uart.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_Uart.py",
    "m5.internal.param_Uart",
    data_m5_internal_param_Uart,
    2460,
    7034);

} // anonymous namespace