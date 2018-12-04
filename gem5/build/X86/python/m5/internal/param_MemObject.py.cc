#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_MemObject[] = {
    120,156,189,88,109,115,219,198,17,222,3,33,74,164,37,139,
    242,187,37,217,70,167,86,205,182,99,49,105,234,38,109,92,
    181,105,156,233,36,51,85,28,168,51,150,149,78,49,16,112,
    146,64,145,0,11,156,108,51,35,125,169,60,125,249,1,253,
    5,253,210,126,239,255,75,247,217,3,104,72,182,103,50,211,
    210,182,120,60,30,246,238,246,246,121,246,229,16,81,249,111,
    134,63,191,230,79,241,119,69,20,243,159,162,1,209,80,209,
    142,67,74,59,20,95,166,195,25,202,127,74,241,12,189,36,
    218,105,144,110,208,41,119,92,250,186,65,233,123,4,153,43,
    34,179,77,241,236,155,100,230,101,221,57,26,184,50,226,208,
    184,77,122,134,118,154,244,36,93,34,87,207,210,97,155,242,
    151,164,148,74,21,109,143,59,149,252,28,237,180,88,230,22,
    203,180,69,230,63,144,41,31,182,240,16,242,113,139,226,54,
    189,100,141,47,80,124,65,20,224,29,231,165,179,64,241,130,
    116,46,82,124,81,58,139,213,226,29,218,89,170,250,151,106,
    253,203,181,254,149,90,255,170,244,23,73,47,81,255,26,245,
    175,83,255,6,237,41,138,59,88,150,15,251,116,231,38,105,
    151,250,203,180,179,76,154,255,110,210,169,34,21,47,213,102,
    172,200,140,75,147,25,171,50,227,22,237,220,34,205,127,171,
    118,198,28,109,117,175,50,36,201,183,252,175,203,176,144,153,
    231,230,153,206,139,36,75,131,36,221,203,18,7,207,103,209,
    0,196,8,77,163,68,243,83,160,57,34,129,146,117,103,52,
    79,120,5,69,125,6,202,193,14,113,131,110,158,40,252,232,
    55,232,152,59,46,237,201,131,190,91,74,156,48,70,75,116,
    76,212,159,161,99,25,217,122,146,174,144,107,154,2,195,33,
    96,176,79,121,46,158,110,243,70,91,93,236,190,41,90,27,
    104,189,46,186,153,14,55,193,40,204,195,97,240,59,61,252,
    114,183,175,35,211,133,234,166,5,253,135,163,44,55,131,100,
    215,204,65,46,72,195,161,14,2,211,230,31,57,79,50,137,
    225,51,27,151,127,246,179,36,101,5,248,68,133,201,147,145,
    89,152,204,14,134,89,124,52,208,230,2,143,124,46,35,159,
    229,121,150,119,97,17,31,141,65,51,58,220,55,208,112,136,
    45,186,80,77,154,98,147,155,222,65,54,212,189,60,140,14,
    146,184,247,40,139,142,134,58,53,69,111,95,15,31,220,215,
    239,247,118,143,146,65,220,219,254,232,103,189,209,216,28,100,
    105,111,248,160,199,202,232,60,13,7,189,115,71,91,103,145,
    75,88,247,121,178,31,148,250,29,232,193,72,231,56,110,113,
    17,123,170,121,117,89,221,86,13,181,164,22,84,210,172,16,
    156,173,35,248,175,18,65,167,244,71,6,81,149,136,58,116,
    34,29,192,212,5,130,0,174,1,188,248,128,12,199,190,162,
    83,135,254,208,128,192,9,183,46,59,209,237,9,122,125,113,
    34,187,210,44,157,48,194,51,12,224,55,171,178,208,156,44,
    228,208,49,183,12,173,75,39,236,165,44,201,67,220,30,182,
    40,255,39,250,253,22,8,172,82,162,237,227,38,35,239,78,
    144,183,124,197,73,226,36,135,165,125,80,181,219,174,70,179,
    98,125,20,154,3,127,161,130,133,77,36,240,110,102,169,69,
    112,47,73,227,10,81,203,137,189,100,192,156,240,97,63,89,
    77,196,6,89,56,17,131,209,162,65,86,104,225,149,172,237,
    47,66,16,210,123,35,89,6,187,66,31,153,28,235,34,2,
    135,152,91,118,69,104,128,213,166,202,11,31,110,124,5,107,
    47,11,11,58,204,131,38,179,160,203,44,152,87,51,220,91,
    117,230,213,69,181,153,192,136,17,78,5,110,184,21,37,254,
    77,22,8,69,135,14,229,171,226,160,252,167,128,22,188,240,
    88,60,28,207,190,194,209,237,40,251,56,67,106,7,143,133,
    36,204,22,150,124,8,151,101,0,129,250,12,245,155,37,196,
    76,28,75,137,124,140,150,197,177,140,195,139,187,84,252,131,
    216,148,140,253,49,149,28,57,109,48,9,58,196,238,202,129,
    128,71,175,241,134,127,22,106,149,209,64,48,55,7,73,145,
    61,183,94,140,190,132,179,45,246,143,199,99,107,155,226,14,
    15,60,205,142,188,40,76,211,204,120,97,28,123,161,97,47,
    223,61,50,186,240,76,230,173,21,93,224,230,47,87,180,153,
    172,55,30,105,95,58,150,43,113,18,25,142,31,151,229,135,
    248,96,161,13,163,126,144,197,5,143,99,234,190,54,62,130,
    146,4,147,76,20,16,82,4,16,197,182,44,7,55,253,164,
    210,192,70,147,102,197,147,66,15,246,36,64,69,131,176,40,
    2,104,32,227,194,46,156,250,89,56,56,210,178,122,193,235,
    177,66,232,90,29,166,27,119,110,224,20,213,161,229,36,105,
    150,198,99,86,44,137,62,192,158,55,202,232,3,230,93,101,
    214,205,114,219,228,239,166,186,230,68,110,201,181,102,197,183,
    107,56,49,9,218,170,4,156,185,119,202,225,162,235,136,195,
    203,97,192,85,255,71,232,97,178,127,23,205,26,154,31,160,
    185,87,157,119,106,135,94,56,127,104,209,221,145,147,70,141,
    242,76,19,31,250,250,140,15,221,124,229,67,28,207,182,142,
    37,75,246,27,53,95,104,224,212,249,70,233,58,240,50,134,
    152,189,12,162,226,51,156,58,235,172,199,134,155,254,77,108,
    245,61,110,238,173,21,247,60,203,49,239,32,44,188,52,123,
    69,108,15,15,109,196,2,173,253,85,152,187,70,220,253,26,
    113,125,15,18,96,173,255,125,52,238,219,236,253,195,119,104,
    239,125,107,239,223,98,163,249,146,89,11,194,168,182,138,64,
    11,128,48,73,104,95,113,51,190,14,203,215,109,126,157,83,
    217,147,116,153,179,147,24,30,9,234,3,73,80,146,228,164,
    190,171,130,86,127,166,234,52,97,254,189,6,93,43,51,79,
    129,212,48,202,179,23,99,47,219,243,12,85,10,61,92,43,
    214,215,138,143,57,122,120,27,175,12,93,70,138,92,143,224,
    233,214,243,97,4,147,164,252,27,75,125,246,34,210,146,28,
    228,87,16,88,71,183,85,73,80,38,29,198,68,64,112,42,
    16,36,212,113,105,130,8,55,93,4,218,19,4,112,134,199,
    216,165,45,230,111,168,235,236,218,53,227,227,3,70,22,160,
    213,95,73,202,79,69,127,33,216,150,77,88,250,177,120,73,
    229,41,144,44,254,72,226,243,111,200,52,182,26,68,118,17,
    9,118,145,226,67,17,181,137,231,11,250,91,45,96,84,233,
    161,81,150,39,117,71,113,39,142,34,160,124,167,20,224,158,
    245,21,24,156,157,10,98,226,21,182,224,187,123,54,246,72,
    61,34,54,208,102,106,136,204,217,245,3,168,242,244,21,30,
    8,180,43,234,178,99,233,32,76,249,16,205,71,19,39,85,
    213,216,52,180,186,115,62,50,214,210,65,96,67,203,54,182,
    118,69,217,197,89,97,251,100,5,41,73,169,244,224,223,64,
    238,39,220,104,190,67,41,185,244,17,174,49,204,16,180,14,
    0,62,117,20,95,253,184,16,120,41,87,63,123,197,243,109,
    33,32,140,172,62,18,14,16,70,206,4,95,177,197,166,181,
    210,4,99,11,31,154,23,211,245,41,32,248,112,16,14,119,
    227,112,3,121,173,192,70,81,229,67,78,165,117,167,174,53,
    248,175,222,166,184,252,252,184,210,254,217,116,11,203,135,100,
    111,130,162,181,176,61,206,34,113,250,223,31,104,111,168,135,
    187,124,121,60,72,70,222,222,32,220,23,44,26,229,169,190,
    172,78,101,4,204,154,131,74,104,40,144,216,55,51,47,202,
    82,14,109,71,145,201,114,47,214,92,162,235,216,187,239,73,
    92,244,146,194,11,119,249,105,200,247,58,225,243,89,95,148,
    218,40,204,247,11,41,131,14,159,163,59,125,44,3,190,39,
    39,92,9,30,210,164,24,176,25,64,98,8,138,33,169,241,
    172,123,112,234,224,251,153,25,219,112,244,9,154,7,104,122,
    84,79,166,83,67,239,23,136,99,88,27,6,106,170,21,167,
    229,152,197,186,43,62,198,156,226,117,135,124,244,93,28,82,
    187,180,51,83,185,101,147,244,44,110,121,59,173,234,133,78,
    27,46,218,252,95,93,84,152,62,125,142,231,255,87,207,244,
    127,249,110,149,246,55,168,76,197,111,243,202,51,5,211,35,
    235,149,214,246,156,176,199,87,228,128,213,107,27,188,43,146,
    151,99,70,74,35,84,78,191,146,23,51,82,96,5,142,45,
    158,94,161,6,140,237,101,23,26,164,250,121,112,142,95,182,
    56,130,88,56,26,233,52,246,223,195,140,247,169,94,228,136,
    204,116,77,6,247,59,162,90,14,109,168,43,156,71,95,167,
    39,60,185,118,62,161,97,103,66,200,187,239,4,219,227,10,
    91,123,61,157,4,23,31,254,105,195,201,36,146,216,192,34,
    8,224,102,21,235,129,54,250,60,8,246,117,153,13,75,177,
    230,168,154,141,185,240,156,149,65,158,17,4,239,32,30,193,
    186,127,170,16,224,120,164,154,78,171,217,82,18,210,207,189,
    121,172,141,53,39,99,183,169,42,185,198,133,143,17,3,67,
    148,161,86,52,8,234,47,51,229,181,136,181,139,188,168,169,
    130,49,76,40,37,201,38,95,172,229,14,46,207,203,82,189,
    176,244,148,151,66,72,82,254,143,209,220,159,88,252,231,152,
    141,10,104,248,96,189,58,236,186,61,236,167,131,44,58,212,
    177,61,176,188,35,26,62,48,183,222,46,250,40,27,134,60,
    190,242,70,137,173,164,180,156,89,58,247,60,206,49,235,234,
    185,209,66,231,73,56,72,190,177,47,183,170,97,241,201,55,
    105,135,24,124,102,68,178,133,16,104,130,153,88,54,215,251,
    73,193,139,201,74,103,102,148,222,13,84,205,42,189,150,86,
    206,204,158,62,187,108,165,101,239,80,27,179,85,156,195,11,
    137,214,92,139,175,142,252,189,200,223,14,251,189,211,224,187,
    204,130,114,249,187,195,223,29,103,190,211,114,91,45,150,187,
    48,175,170,255,119,152,153,109,231,206,124,75,253,23,111,59,
    95,20,
};

EmbeddedPython embedded_m5_internal_param_MemObject(
    "m5/internal/param_MemObject.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_MemObject.py",
    "m5.internal.param_MemObject",
    data_m5_internal_param_MemObject,
    2242,
    6356);

} // anonymous namespace