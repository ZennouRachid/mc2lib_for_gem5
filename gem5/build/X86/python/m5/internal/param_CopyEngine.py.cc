#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_CopyEngine[] = {
    120,156,189,89,235,111,219,200,17,159,165,100,217,82,252,144,
    227,87,156,56,9,211,196,137,210,34,214,93,175,233,93,123,
    105,218,196,9,250,0,206,201,209,5,226,232,14,37,104,114,
    37,81,22,73,129,92,39,209,193,46,208,58,232,227,91,191,
    244,47,232,151,246,123,209,127,175,157,153,37,105,218,150,219,
    20,173,28,75,163,229,114,118,119,30,191,153,157,221,184,144,
    254,155,192,239,79,240,155,172,26,0,30,126,4,244,1,2,
    1,45,3,132,52,192,91,128,189,9,136,191,7,222,4,188,
    7,104,149,64,150,224,8,27,101,248,170,4,225,71,64,60,
    139,204,179,3,222,228,40,158,105,158,119,10,250,101,238,49,
    96,88,3,57,1,173,10,188,10,231,161,44,39,97,175,6,
    241,123,16,66,132,2,118,134,245,140,127,10,90,85,228,185,
    142,60,53,230,249,59,241,164,47,171,244,146,248,189,42,120,
    53,120,143,18,95,2,239,18,11,128,43,78,115,99,6,188,
    25,110,204,130,55,203,141,185,108,242,58,180,230,179,246,229,
    66,123,161,208,94,44,180,151,10,237,229,66,123,165,208,190,
    82,104,175,22,218,87,11,237,107,133,246,90,161,125,189,208,
    190,81,104,223,44,180,205,66,251,22,183,231,64,206,67,239,
    91,208,187,13,189,59,208,22,224,213,73,77,52,254,235,214,
    58,200,50,244,238,66,235,46,72,252,172,195,145,0,225,205,
    23,70,220,227,17,151,243,17,13,30,113,31,90,247,65,226,
    167,161,71,76,193,118,99,9,33,226,255,19,255,53,4,182,
    212,52,146,55,50,78,252,40,180,253,176,29,249,6,189,159,
    36,66,160,114,137,148,82,116,109,18,186,6,192,208,66,217,
    17,93,135,56,131,128,30,2,199,160,21,188,18,172,30,10,
    122,232,149,224,0,27,101,104,243,139,94,57,229,56,68,204,
    204,195,1,64,111,2,14,184,103,251,85,120,13,202,170,194,
    176,216,35,88,232,183,56,150,222,238,224,66,219,13,90,125,
    139,165,86,36,245,6,203,166,230,145,216,3,39,118,2,123,
    51,26,12,159,135,29,63,148,13,146,93,85,73,129,96,16,
    197,170,239,239,170,41,98,180,67,39,144,182,173,106,248,16,
    227,40,229,43,84,90,149,241,177,23,249,33,74,128,42,37,
    42,246,7,106,38,31,109,7,145,183,223,151,234,18,246,252,
    156,123,158,199,113,20,55,200,36,22,17,69,100,176,215,81,
    36,98,64,75,52,72,54,38,201,11,36,205,110,20,200,102,
    236,184,93,223,107,62,139,220,253,64,134,42,105,118,100,240,
    240,129,252,184,185,187,239,247,189,230,206,103,223,111,14,134,
    170,27,133,205,224,97,19,133,145,113,232,244,155,167,117,219,
    64,158,203,52,241,91,191,99,167,2,118,101,127,32,99,210,
    55,153,165,69,197,180,88,16,55,68,73,204,139,25,225,87,
    50,31,78,22,125,248,215,212,135,70,154,33,208,141,34,245,
    169,1,135,220,32,71,53,200,135,228,186,18,121,12,53,68,
    135,116,4,28,25,240,117,137,24,14,145,150,49,172,111,228,
    254,235,113,88,235,153,38,225,16,125,60,129,46,252,102,141,
    39,154,226,137,12,56,64,138,206,45,195,33,230,13,228,196,
    46,164,123,85,136,255,66,237,94,149,32,44,66,128,157,131,
    10,250,190,156,251,94,35,150,52,241,252,152,76,109,17,88,
    27,181,172,55,74,54,6,142,234,90,51,153,95,208,68,236,
    223,173,40,212,46,108,251,161,151,185,84,131,162,237,247,17,
    20,22,217,143,103,99,182,126,228,228,108,100,52,183,31,37,
    26,88,60,183,53,71,140,196,221,30,240,52,180,42,201,195,
    131,61,153,184,4,34,4,151,158,145,36,160,217,198,11,12,
    139,34,121,145,38,191,202,48,168,35,16,42,8,131,6,194,
    96,90,76,96,107,205,152,22,179,98,203,39,43,186,164,22,
    129,163,156,97,226,111,160,61,33,96,207,128,120,141,99,20,
    63,130,220,69,129,120,192,65,78,239,190,36,221,117,47,134,
    57,250,84,119,30,48,74,16,46,200,249,136,162,22,61,72,
    110,159,128,94,37,245,49,34,71,99,34,30,18,69,118,154,
    198,192,201,203,144,252,25,208,150,232,252,3,72,65,114,84,
    66,20,212,1,3,22,115,1,246,46,227,130,191,101,108,165,
    9,129,157,174,186,126,18,189,213,113,76,109,206,104,219,24,
    32,47,135,47,118,123,210,85,201,77,236,120,29,237,155,174,
    19,134,145,50,29,207,51,29,133,113,190,187,175,100,98,170,
    200,92,79,26,228,56,235,106,134,155,124,190,225,64,90,220,
    208,96,241,124,87,97,6,89,224,7,14,194,68,42,116,123,
    55,242,18,236,167,161,29,169,172,58,141,32,227,70,44,0,
    163,194,38,86,90,22,249,40,78,159,100,18,232,124,82,201,
    128,146,200,126,155,83,148,219,119,146,196,38,9,184,159,225,
    69,90,191,113,250,251,146,103,79,112,62,20,136,154,90,134,
    49,103,158,43,164,70,166,53,171,18,70,161,55,68,201,124,
    247,19,90,244,74,154,127,8,122,75,8,187,73,164,21,252,
    173,136,101,195,45,167,96,171,100,128,91,38,149,129,221,45,
    82,143,35,248,142,48,97,52,12,14,121,214,134,192,106,125,
    155,90,52,216,186,67,100,157,200,93,34,247,50,133,199,167,
    245,204,105,173,89,120,131,85,117,75,169,82,121,20,125,117,
    34,138,86,143,163,8,83,218,246,1,111,149,189,82,33,26,
    74,164,118,252,56,13,30,138,51,116,50,198,25,177,114,212,
    224,254,89,196,61,45,184,101,173,210,82,183,144,220,91,79,
    238,153,26,101,102,215,73,204,48,58,134,182,73,47,117,210,
    34,96,91,107,100,239,2,116,59,5,232,90,38,113,16,110,
    173,219,68,202,231,25,252,254,69,26,188,163,13,254,83,90,
    105,58,197,214,12,99,170,38,92,2,6,121,33,223,212,190,
    68,50,92,33,211,23,141,190,130,219,217,171,240,42,238,80,
    108,121,218,164,62,225,77,138,55,58,174,58,179,188,213,155,
    200,26,21,178,127,187,4,203,233,238,147,208,246,48,136,163,
    119,67,51,106,155,10,50,129,30,173,39,27,235,201,231,152,
    64,204,199,199,150,78,147,69,44,7,20,236,58,248,201,10,
    202,15,241,153,166,122,254,206,149,188,65,240,147,109,235,88,
    215,165,137,157,110,60,232,20,246,130,145,121,129,179,29,214,
    39,148,228,198,236,130,90,238,2,82,226,37,45,83,99,251,
    151,196,10,70,119,193,250,244,37,76,38,4,172,223,3,87,
    161,2,126,7,100,92,180,97,26,202,28,39,89,172,16,103,
    242,43,224,176,31,177,219,232,162,144,118,24,230,192,32,73,
    62,101,86,189,249,252,2,254,80,200,25,217,22,81,74,107,
    148,98,168,148,243,80,97,175,124,208,54,80,62,25,45,100,
    113,12,43,98,227,184,208,101,223,157,147,233,135,139,18,182,
    129,84,227,115,201,148,94,192,38,89,94,31,59,132,146,237,
    53,177,96,104,64,48,86,62,37,242,89,30,167,34,235,27,
    139,88,55,79,103,199,194,158,96,235,244,178,67,107,151,89,
    218,185,73,134,214,241,20,92,154,66,26,197,79,137,241,187,
    72,36,158,238,4,31,71,129,14,52,8,18,162,6,249,248,
    200,16,120,40,197,122,224,61,31,74,245,225,211,210,245,0,
    131,50,251,114,74,160,84,114,34,3,179,53,182,180,157,114,
    55,107,15,18,121,55,230,184,34,39,62,234,59,193,174,231,
    60,222,167,69,104,37,55,139,35,35,19,187,94,20,155,98,
    64,156,39,57,63,126,158,137,255,102,204,21,230,35,156,51,
    23,155,33,239,69,46,71,254,47,187,210,12,100,176,139,7,
    201,174,63,48,219,125,167,195,222,40,165,106,189,200,212,82,
    236,206,66,148,114,126,72,104,131,223,138,76,55,10,49,193,
    237,187,42,138,77,79,98,177,46,61,243,129,201,217,209,244,
    19,211,217,197,183,142,171,52,166,79,6,36,23,73,78,220,
    73,184,30,218,123,75,205,11,240,166,141,135,102,31,107,194,
    183,144,23,5,122,35,224,76,66,85,17,87,123,58,68,112,
    7,193,163,154,26,234,164,244,132,200,67,34,77,40,110,170,
    227,243,223,15,181,3,32,33,19,85,196,53,163,106,168,250,
    137,120,124,73,163,146,179,81,249,143,15,137,74,89,134,214,
    68,22,155,21,226,148,147,116,234,35,90,165,68,222,170,101,
    157,151,152,78,115,231,76,214,57,203,116,142,59,235,89,231,
    60,211,203,220,185,144,117,46,50,93,226,206,229,236,62,107,
    133,59,175,64,107,21,188,10,247,92,165,204,48,249,191,102,
    6,142,175,11,136,172,95,255,95,19,130,245,163,11,150,218,
    122,12,105,25,112,94,50,16,69,149,102,52,22,123,34,171,
    123,139,250,240,177,121,101,4,50,109,55,150,142,146,218,47,
    119,198,174,33,231,18,189,228,111,142,3,252,108,233,249,44,
    87,230,136,43,159,225,34,187,43,187,6,163,187,55,190,252,
    84,92,100,82,13,250,99,190,232,98,229,109,67,151,161,199,
    32,172,228,54,160,243,124,40,223,218,167,237,160,235,76,226,
    115,6,3,25,122,214,71,52,228,99,40,214,139,204,51,102,
    4,80,14,251,35,20,170,145,146,88,196,138,228,108,188,81,
    58,44,104,200,254,171,231,17,54,126,79,50,86,255,148,97,
    181,113,13,138,41,218,162,28,167,147,114,158,143,173,231,185,
    19,214,70,1,113,179,235,132,155,161,162,51,202,191,103,192,
    186,136,235,200,244,121,52,243,78,91,198,155,206,224,252,217,
    50,134,108,182,244,89,221,27,197,220,119,212,147,54,218,98,
    51,10,6,125,73,231,12,158,248,67,121,105,13,186,101,60,
    251,74,221,62,103,138,167,178,29,197,242,169,196,94,94,234,
    67,248,104,153,89,189,76,161,91,109,140,26,202,55,157,94,
    224,216,88,33,96,213,200,98,186,209,126,106,255,255,114,8,
    45,76,206,62,151,131,97,205,249,199,147,168,184,60,19,126,
    188,107,166,199,104,79,98,81,18,13,241,244,54,201,157,56,
    196,182,47,98,55,167,184,58,132,244,34,5,119,115,81,193,
    253,124,73,164,127,70,181,82,21,92,30,157,186,209,47,244,
    85,242,62,170,191,244,25,102,152,88,212,195,6,74,171,22,
    22,199,46,254,39,1,223,53,234,224,224,235,207,172,174,161,
    56,226,35,237,150,19,232,139,45,126,159,30,126,19,157,165,
    248,170,149,22,180,190,67,228,65,30,118,63,160,209,20,153,
    193,195,141,76,243,13,173,249,75,215,127,38,223,248,174,228,
    91,215,224,33,139,55,146,237,103,81,162,206,155,196,143,210,
    73,174,140,124,191,61,76,148,12,206,12,150,225,126,96,127,
    33,131,40,30,126,17,121,146,227,179,248,254,137,231,197,150,
    19,118,36,154,136,42,87,117,235,52,67,90,182,234,57,50,
    46,115,164,12,39,121,207,81,4,95,234,171,77,62,126,157,
    125,191,217,143,220,61,233,165,60,215,207,231,121,22,5,14,
    246,143,94,101,219,207,86,153,63,245,222,139,105,212,210,169,
    222,68,198,190,211,247,191,57,107,161,124,166,76,247,27,35,
    23,196,186,33,14,156,62,25,185,127,142,76,207,2,39,117,
    33,225,42,123,169,232,62,254,52,80,8,102,249,147,46,125,
    79,86,20,140,238,24,115,14,122,61,230,41,114,246,116,147,
    165,8,99,243,157,73,46,197,161,23,16,235,250,224,168,239,
    133,30,243,53,208,215,72,232,154,181,58,85,21,21,250,157,
    195,95,3,247,95,163,36,106,98,70,148,241,183,142,191,117,
    99,186,94,45,87,171,200,119,105,90,252,167,191,155,152,51,
    106,198,205,197,170,248,23,144,129,248,234,
};

EmbeddedPython embedded_m5_internal_param_CopyEngine(
    "m5/internal/param_CopyEngine.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_CopyEngine.py",
    "m5.internal.param_CopyEngine",
    data_m5_internal_param_CopyEngine,
    2603,
    7766);

} // anonymous namespace