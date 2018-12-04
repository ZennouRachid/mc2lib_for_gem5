#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TimingSimpleCPU[] = {
    120,156,197,88,235,111,27,199,17,159,61,82,148,40,75,54,
    229,247,67,182,207,137,21,51,73,45,250,165,36,109,92,183,
    242,3,133,139,88,81,78,46,44,43,69,137,211,221,138,58,
    234,30,196,221,202,54,3,9,104,43,163,47,160,64,191,20,
    253,3,250,165,249,222,255,175,157,153,189,59,173,40,42,8,
    218,154,181,197,229,112,119,118,119,30,191,153,157,93,15,242,
    127,99,248,249,41,126,178,111,45,0,31,255,4,132,0,145,
    128,53,11,132,180,192,63,5,91,99,144,222,3,127,12,222,
    2,172,85,64,86,96,15,137,42,124,93,129,248,22,16,207,
    105,230,89,5,127,124,24,207,20,175,59,1,97,149,123,44,
    232,79,130,28,131,181,26,188,136,103,160,42,199,97,107,18,
    210,183,32,132,136,5,172,246,27,5,255,4,172,213,145,231,
    50,242,76,50,207,63,137,39,31,172,211,32,241,251,117,240,
    39,225,45,74,124,12,252,99,44,0,238,56,197,196,52,248,
    211,76,28,7,255,56,19,39,138,197,27,176,54,83,208,39,
    13,250,148,65,159,54,232,51,6,125,214,160,207,25,244,121,
    131,190,96,208,23,13,250,146,65,207,26,244,101,131,190,98,
    208,87,13,218,54,232,107,6,253,158,65,191,111,208,215,13,
    122,206,160,63,48,232,27,6,221,52,232,15,13,250,35,131,
    254,216,160,127,96,208,55,153,62,1,114,6,186,243,208,109,
    65,247,22,108,8,240,27,100,118,4,195,203,181,219,32,171,
    208,189,3,107,119,64,226,223,109,216,19,32,252,25,99,198,
    93,158,113,178,156,113,143,103,44,192,218,2,72,252,187,167,
    103,76,192,74,243,12,66,54,248,23,254,107,10,164,212,20,
    54,175,100,154,5,73,220,14,226,141,36,176,104,124,156,26,
    2,185,71,77,37,71,251,35,66,123,15,24,234,40,59,162,
    125,23,87,16,208,69,32,91,180,131,95,129,11,187,130,126,
    116,43,176,131,68,21,54,120,160,91,205,57,118,17,195,51,
    176,3,208,29,131,29,238,89,121,17,95,130,170,170,49,76,
    183,8,166,122,20,231,210,232,42,110,180,210,164,221,151,88,
    106,69,82,207,179,108,234,44,54,237,158,155,186,81,251,121,
    16,5,113,103,37,136,122,161,124,180,252,139,38,41,160,234,
    164,69,212,75,82,21,6,235,106,130,184,219,177,27,201,118,
    91,77,226,143,20,167,170,64,161,230,170,138,63,187,73,16,
    163,24,168,87,166,210,160,167,166,203,217,237,40,241,183,67,
    169,142,97,207,83,238,121,146,166,73,218,36,187,56,212,40,
    106,122,91,29,69,114,70,180,69,147,4,228,38,123,142,77,
    107,51,137,100,43,117,189,205,192,111,61,78,188,237,72,198,
    42,107,117,100,180,112,83,222,110,173,111,7,161,223,90,253,
    236,147,86,175,175,54,147,184,21,45,180,80,24,153,198,110,
    216,26,170,224,60,50,158,164,213,95,7,157,118,46,229,166,
    12,123,50,37,165,179,227,180,179,152,18,167,196,21,81,17,
    51,98,90,4,181,194,155,227,166,55,255,145,123,211,202,115,
    23,58,84,228,222,181,96,151,9,114,89,147,188,73,78,172,
    144,239,80,77,116,77,71,192,158,5,191,172,16,195,46,182,
    85,76,56,87,74,79,118,57,225,232,149,198,97,23,189,61,
    134,206,252,102,150,23,154,224,133,44,216,193,22,221,92,133,
    93,204,104,200,137,93,216,110,213,33,253,59,209,221,58,129,
    89,196,0,171,59,53,68,65,181,68,129,198,46,105,226,7,
    41,217,219,33,216,54,39,139,222,36,155,239,185,106,211,153,
    46,156,131,38,98,39,47,37,177,246,227,70,16,251,133,95,
    53,50,54,130,16,145,225,144,253,120,53,102,11,19,183,100,
    35,163,121,97,146,73,70,23,175,237,156,32,70,226,222,232,
    241,50,180,43,201,195,147,125,153,121,132,36,68,152,94,145,
    36,160,213,70,128,14,135,2,251,52,237,112,145,177,208,64,
    52,212,16,11,77,196,194,148,24,67,106,214,154,18,199,197,
    82,64,166,244,72,55,66,72,181,0,198,183,160,221,33,96,
    203,130,116,150,67,22,255,4,249,140,226,114,135,99,158,198,
    190,34,3,232,94,140,122,116,172,238,220,97,168,32,102,144,
    243,62,5,49,186,145,124,63,6,221,90,238,104,132,143,6,
    70,218,167,22,217,105,25,11,23,175,66,246,87,64,131,34,
    2,118,32,71,202,94,5,161,208,0,12,93,76,13,216,123,
    22,55,252,45,3,44,207,15,236,121,181,25,100,201,107,29,
    209,68,115,130,91,193,40,89,238,127,185,222,149,158,202,174,
    98,199,203,100,219,246,220,56,78,148,237,250,190,237,42,140,
    248,245,109,37,51,91,37,246,92,214,36,239,57,23,11,240,
    148,235,245,123,210,97,66,35,198,15,60,133,185,228,20,255,
    224,72,204,164,66,223,111,38,126,134,253,52,181,35,149,211,
    160,25,100,220,132,5,96,104,180,137,149,182,69,62,10,214,
    197,66,2,157,89,106,5,90,50,25,110,112,178,242,66,55,
    203,218,36,1,247,51,198,72,235,87,110,184,45,121,245,12,
    215,67,129,136,212,50,140,34,7,157,39,93,10,213,89,159,
    56,137,253,62,138,23,120,119,105,231,243,121,38,34,252,157,
    65,236,141,99,91,195,239,154,56,107,121,213,28,113,181,2,
    117,148,209,21,176,207,69,238,118,68,224,30,166,142,166,197,
    193,207,42,17,98,157,143,136,162,201,206,117,106,230,168,249,
    128,154,27,133,214,239,88,245,233,65,213,89,3,139,245,245,
    42,185,102,101,60,125,125,32,158,46,236,199,19,102,184,149,
    29,62,67,187,21,35,46,42,164,123,250,32,15,35,138,56,
    116,55,70,28,177,114,252,224,193,106,70,0,109,184,228,92,
    160,173,174,97,115,99,46,187,97,107,188,217,155,110,102,199,
    201,62,200,109,26,212,57,140,32,238,204,146,209,13,16,119,
    12,16,59,54,113,16,130,157,247,169,169,30,101,245,15,71,
    110,245,142,182,250,207,104,187,169,28,101,211,140,174,73,225,
    17,68,200,21,229,65,247,21,54,253,115,100,127,211,242,231,
    240,136,123,17,95,196,83,139,205,79,7,215,93,62,184,248,
    240,227,26,185,72,99,221,177,130,168,145,19,54,42,112,54,
    63,145,50,58,50,122,105,242,166,111,39,27,182,130,66,160,
    251,115,217,252,92,246,57,230,19,251,193,190,185,243,220,145,
    202,30,197,190,206,5,100,10,21,196,248,155,150,122,242,198,
    147,124,104,240,175,118,91,135,190,174,89,218,249,97,132,158,
    97,87,88,133,43,56,249,97,225,66,57,111,20,126,152,44,
    253,64,154,44,211,94,147,236,132,138,56,135,193,110,184,128,
    62,132,206,140,32,246,123,224,66,85,192,239,128,44,140,134,
    204,35,155,35,166,136,26,226,204,126,5,156,5,134,156,64,
    186,110,164,83,135,57,48,92,178,79,153,85,31,72,63,135,
    63,24,41,164,56,54,42,121,241,98,6,77,181,12,26,118,
    205,247,58,26,170,7,227,134,204,142,1,70,108,28,33,186,
    40,188,126,48,27,113,181,194,54,144,234,29,251,101,66,239,
    210,38,129,94,238,123,133,18,240,37,113,202,210,208,96,212,
    124,74,205,103,101,216,138,162,239,221,201,118,117,48,99,26,
    135,69,91,167,156,85,18,160,202,34,159,24,87,84,93,13,
    172,195,37,44,228,145,253,144,184,239,96,35,241,126,42,248,
    66,13,116,5,66,204,80,107,145,203,247,44,129,215,106,44,
    25,222,242,181,90,95,159,29,93,50,48,70,139,15,167,9,
    74,47,7,82,51,219,101,73,91,172,244,186,118,40,53,111,
    70,17,107,228,211,251,161,27,173,251,238,131,223,208,78,180,
    157,87,196,150,85,200,222,48,101,167,184,16,71,137,207,63,
    63,47,116,120,53,138,114,244,62,46,92,202,206,177,224,39,
    30,167,132,231,155,210,142,100,180,142,151,208,205,160,103,111,
    132,110,135,253,82,201,117,251,178,208,77,177,99,141,240,229,
    196,145,81,33,176,148,216,94,18,99,250,219,246,84,146,218,
    190,196,242,94,250,246,77,155,115,167,29,100,182,187,142,163,
    174,167,52,206,15,70,42,87,84,110,218,201,184,120,218,122,
    77,228,168,252,218,198,91,119,128,85,228,30,148,197,131,62,
    43,56,207,80,9,197,245,161,14,27,60,100,240,134,167,250,
    58,101,45,82,179,64,77,11,204,195,247,29,123,242,71,184,
    240,175,105,7,50,86,77,92,178,234,150,58,115,56,80,151,
    105,126,118,56,92,159,125,159,112,149,85,88,27,43,130,182,
    86,188,160,141,131,228,43,193,26,94,1,106,220,115,140,34,
    121,252,191,141,100,14,133,81,5,193,159,254,167,1,236,252,
    248,255,33,186,243,0,242,243,252,168,224,21,166,94,211,58,
    120,187,162,40,101,77,165,248,98,60,123,20,126,218,94,42,
    93,37,181,155,174,143,70,87,206,2,122,223,63,239,71,229,
    225,146,242,113,169,214,30,23,51,253,211,236,189,226,241,139,
    94,220,248,9,86,113,241,72,181,229,79,248,121,139,205,208,
    182,116,121,185,15,204,90,105,13,138,238,88,190,30,20,77,
    91,68,23,145,196,236,246,122,50,246,157,91,52,239,54,152,
    197,32,243,140,2,21,148,130,254,2,70,149,81,17,167,177,
    210,56,28,141,148,205,12,93,217,157,141,50,254,70,228,88,
    6,241,223,10,16,55,169,70,223,79,179,14,101,39,157,88,
    203,156,234,60,129,34,207,150,48,245,101,40,149,28,238,27,
    69,42,229,183,40,95,226,129,147,244,177,110,31,231,78,156,
    215,110,143,44,73,147,209,255,8,249,69,4,147,180,168,89,
    245,74,189,86,23,124,234,13,60,242,26,125,181,178,239,19,
    40,106,214,126,230,64,1,203,252,28,98,73,218,230,187,49,
    191,55,105,43,241,59,88,113,82,145,85,249,30,179,228,70,
    250,113,131,199,243,27,79,166,209,203,111,110,116,142,59,31,
    83,115,179,116,194,15,105,54,149,141,209,194,124,161,244,188,
    86,250,161,155,201,82,101,126,130,139,22,212,181,225,172,169,
    27,123,155,203,169,164,7,27,20,224,210,80,46,92,76,191,
    16,169,153,129,113,63,117,145,62,51,208,155,201,52,112,195,
    224,27,201,134,25,46,32,137,118,126,232,40,58,244,249,23,
    15,213,245,163,6,151,93,186,223,174,135,242,133,27,110,161,
    37,135,175,178,210,207,148,140,14,41,36,227,237,168,253,76,
    70,73,218,127,150,248,146,113,107,142,47,250,126,234,184,113,
    71,162,11,217,34,131,118,91,204,171,37,189,70,193,101,15,
    149,225,32,239,17,198,197,193,220,184,195,189,249,40,76,188,
    45,233,231,60,151,143,230,121,156,68,228,140,65,141,74,231,
    21,178,94,25,186,4,30,87,105,228,134,100,148,240,59,220,
    70,158,25,148,19,125,242,69,226,185,225,98,15,47,43,223,
    185,137,201,121,132,205,112,147,192,91,14,146,199,242,85,224,
    201,35,108,182,63,62,40,41,238,240,116,101,177,144,226,72,
    128,33,143,186,56,48,248,40,217,38,178,152,59,104,71,61,
    247,41,150,210,207,209,167,136,187,193,249,203,105,226,201,44,
    43,230,15,183,97,206,196,145,94,12,241,11,211,176,208,165,
    234,224,64,15,87,152,195,74,2,78,62,169,236,4,8,250,
    148,215,59,48,47,63,31,41,245,169,247,14,207,206,11,10,
    115,141,81,165,99,125,131,211,47,55,15,244,67,13,54,244,
    36,90,159,168,139,26,125,159,192,111,11,207,79,171,34,38,
    197,180,168,226,119,3,191,27,214,84,163,94,173,215,145,239,
    216,148,248,79,255,95,197,196,63,105,93,197,61,254,13,53,
    206,10,39,
};

EmbeddedPython embedded_m5_internal_param_TimingSimpleCPU(
    "m5/internal/param_TimingSimpleCPU.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_TimingSimpleCPU.py",
    "m5.internal.param_TimingSimpleCPU",
    data_m5_internal_param_TimingSimpleCPU,
    2595,
    7870);

} // anonymous namespace