#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RandomRepl[] = {
    120,156,189,88,109,111,219,200,17,158,165,40,201,146,237,88,
    142,29,59,177,157,152,197,197,141,218,34,214,93,175,238,93,
    123,169,219,92,18,180,87,160,78,142,62,32,142,174,40,65,
    147,43,137,178,68,10,228,58,142,2,251,67,235,160,237,31,
    232,15,40,250,165,253,222,255,215,206,204,146,52,253,6,28,
    208,202,137,181,90,45,103,119,103,230,121,102,118,150,30,164,
    255,202,248,249,21,126,146,191,11,0,31,255,4,12,0,134,
    2,218,6,8,105,128,191,0,7,101,136,127,2,126,25,62,
    0,180,75,32,75,112,138,29,19,190,45,65,248,49,144,204,
    34,203,236,129,95,189,74,102,134,215,157,130,129,201,35,6,
    140,235,32,203,208,174,192,235,112,30,76,89,133,131,58,196,
    31,64,8,17,10,216,27,55,50,249,41,104,215,80,230,62,
    202,212,89,230,223,36,147,62,172,209,67,146,247,107,224,215,
    225,3,106,60,13,254,52,43,128,59,206,112,103,22,252,89,
    238,220,2,255,22,119,230,178,197,27,208,158,207,250,183,11,
    253,133,66,127,177,208,191,83,232,47,21,250,203,220,159,3,
    57,15,253,187,208,191,7,253,21,232,8,240,27,180,29,58,
    225,77,123,21,164,9,253,53,104,175,129,196,191,85,56,21,
    32,252,249,194,140,251,60,227,118,62,227,1,207,88,135,246,
    58,72,252,123,160,103,76,193,110,243,14,66,21,252,7,255,
    53,17,46,80,51,216,188,149,113,18,68,161,19,132,157,40,
    48,232,121,149,26,2,215,163,166,148,162,252,140,80,30,1,
    67,140,186,35,202,39,184,130,128,62,2,104,208,14,126,9,
    238,157,8,250,209,47,193,49,118,76,232,240,131,190,153,74,
    156,32,118,243,112,12,208,47,195,49,143,236,190,14,87,193,
    84,21,134,231,128,224,209,79,113,46,61,221,195,141,118,155,
    180,251,14,107,173,72,235,77,214,77,205,99,227,140,220,216,
    29,58,182,27,250,209,208,150,163,65,147,116,87,53,50,96,
    56,138,98,53,8,246,213,20,9,58,161,59,148,142,163,234,
    248,35,198,89,42,80,104,180,50,241,103,63,10,66,212,0,
    77,74,84,28,140,212,108,62,219,25,70,254,225,64,170,105,
    28,249,138,71,94,196,113,20,55,201,37,54,53,138,154,209,
    65,87,145,138,67,218,162,73,186,113,147,188,196,166,213,139,
    134,178,21,187,94,47,240,91,207,35,239,112,40,67,149,180,
    186,114,184,245,88,126,210,218,63,12,6,126,107,239,243,159,
    182,70,99,213,139,194,214,112,171,133,202,200,56,116,7,173,
    139,182,109,162,204,109,90,248,40,232,58,169,130,61,57,24,
    201,152,236,77,110,209,166,98,70,44,136,7,162,36,230,197,
    172,8,42,25,134,213,34,134,255,76,49,52,210,72,69,24,
    69,138,169,1,39,220,33,160,154,132,33,65,87,34,196,208,
    66,4,164,43,224,212,128,223,151,72,224,4,91,19,195,235,
    65,142,95,159,195,75,175,84,133,19,196,184,140,16,190,95,
    227,133,166,120,33,3,142,177,69,112,77,56,193,248,69,73,
    28,194,246,160,6,241,63,168,223,175,17,133,69,8,176,119,
    92,65,236,205,28,123,205,88,178,196,15,98,114,181,77,100,
    109,214,179,209,40,217,28,185,170,103,207,102,184,160,139,24,
    223,157,40,212,16,118,130,208,207,32,213,164,232,4,3,36,
    133,77,254,227,213,88,108,16,185,185,24,57,205,27,68,137,
    100,98,241,218,246,28,9,146,116,103,196,203,208,174,164,15,
    79,246,101,226,17,137,144,92,122,69,210,128,86,155,44,49,
    108,138,228,69,90,124,133,105,208,64,34,84,144,6,77,164,
    193,140,40,99,111,205,152,17,183,196,78,64,94,244,200,44,
    34,135,153,113,226,95,160,145,16,112,96,64,188,198,49,138,
    127,130,224,162,64,60,230,32,167,103,95,147,237,122,20,195,
    28,49,213,131,199,204,18,164,11,74,62,161,168,69,4,9,
    246,50,244,43,41,198,200,28,205,137,120,76,45,138,211,50,
    6,46,110,66,242,55,64,95,34,248,199,144,146,228,180,132,
    44,104,0,6,44,230,2,28,93,194,13,255,196,220,74,19,
    2,131,174,122,65,18,29,233,56,166,62,103,180,93,12,144,
    87,227,151,251,125,233,169,100,29,7,222,68,135,150,231,134,
    97,164,44,215,247,45,87,97,156,239,31,42,153,88,42,178,
    54,146,38,1,103,175,100,188,201,215,27,143,164,205,29,77,
    22,63,240,20,102,144,5,254,193,65,152,72,133,176,247,34,
    63,193,113,154,218,149,202,110,208,12,114,110,196,10,48,43,
    28,18,165,109,81,142,226,244,105,166,129,206,39,149,140,40,
    137,28,116,56,69,121,3,55,73,28,210,128,199,153,94,100,
    245,91,119,112,40,121,245,4,215,67,133,168,171,117,152,112,
    230,185,75,102,100,86,179,41,97,20,250,99,212,44,240,62,
    165,77,239,166,249,135,168,119,7,105,87,197,182,130,223,21,
    177,100,120,102,74,182,74,70,184,37,50,25,24,110,145,34,
    142,228,59,197,132,209,52,56,228,217,26,34,171,253,67,234,
    209,100,251,33,53,27,212,124,159,154,71,153,193,147,179,122,
    246,162,213,172,188,193,166,122,165,212,168,60,138,190,61,23,
    69,247,206,162,8,83,218,238,49,31,149,253,82,33,26,74,
    100,118,188,157,6,15,197,25,130,140,113,70,162,28,53,120,
    126,22,121,79,27,238,216,247,104,171,239,97,243,104,35,121,
    100,105,150,89,61,55,177,194,232,140,218,22,61,212,73,139,
    136,109,175,145,191,11,212,237,22,168,107,91,36,65,188,181,
    63,162,198,188,206,225,63,184,73,135,119,181,195,127,77,59,
    205,164,220,154,101,78,213,133,71,196,32,20,242,67,237,107,
    108,198,203,228,250,162,211,151,241,56,123,29,174,224,9,197,
    158,167,67,234,83,62,164,248,160,227,234,47,203,91,253,114,
    214,169,144,255,59,37,88,74,79,159,132,142,135,81,28,189,
    27,91,81,199,82,144,41,244,100,35,217,220,72,190,192,4,
    98,109,159,121,58,77,22,177,28,81,176,235,224,39,47,168,
    32,196,223,180,212,139,119,158,228,3,130,127,57,142,142,117,
    93,154,56,233,193,131,160,48,10,70,134,2,103,59,172,79,
    40,201,77,24,130,122,14,1,25,241,138,182,169,179,255,75,
    98,25,163,187,224,125,250,16,39,19,34,214,95,128,171,80,
    1,127,6,114,46,250,48,13,101,142,147,44,86,72,50,249,
    3,112,216,95,113,218,232,162,144,78,24,150,192,32,73,62,
    99,81,125,248,252,22,254,90,200,25,217,17,81,74,107,148,
    98,168,152,121,168,48,42,223,233,24,48,207,71,11,121,28,
    195,138,196,56,46,116,217,247,240,124,250,225,162,132,125,32,
    213,228,32,153,210,27,56,164,203,155,51,64,40,217,174,138,
    5,67,19,130,185,242,25,53,159,231,113,42,178,177,137,168,
    181,126,49,59,22,206,4,71,167,151,61,218,219,100,109,231,
    170,76,173,179,37,184,52,133,52,138,191,36,193,31,99,35,
    241,150,37,248,90,8,116,161,65,146,80,107,16,198,167,134,
    192,203,33,214,3,31,248,114,168,47,129,182,174,7,152,148,
    217,135,83,2,165,146,115,25,152,189,177,163,253,148,195,172,
    17,164,230,221,132,227,138,64,124,50,112,135,251,190,187,125,
    64,155,208,78,94,22,71,70,166,118,163,168,54,197,128,184,
    78,115,254,249,69,166,254,219,9,87,152,79,112,205,92,109,
    166,188,31,121,28,249,223,244,164,53,148,195,125,188,72,246,
    130,145,213,25,184,93,70,163,148,154,245,50,51,75,49,156,
    133,40,229,252,144,208,1,191,19,89,94,20,98,130,59,244,
    84,20,91,190,196,98,93,250,214,99,139,179,163,21,36,150,
    187,143,79,93,79,105,78,159,15,72,46,146,220,184,155,112,
    61,116,112,68,221,27,64,211,193,75,115,128,53,225,16,242,
    162,64,31,4,156,73,168,42,226,106,79,135,8,158,32,120,
    85,83,99,157,148,158,82,179,69,77,11,138,135,234,228,240,
    251,57,48,169,32,33,23,85,196,170,81,51,84,227,92,60,
    190,162,89,201,229,168,252,221,119,137,74,105,66,187,156,197,
    102,37,123,221,83,5,201,101,125,27,203,248,10,143,76,83,
    192,86,255,215,128,101,218,223,0,225,213,255,53,78,237,95,
    220,176,214,246,54,164,167,243,117,49,42,138,38,205,234,185,
    125,145,149,163,69,123,248,54,187,124,5,97,28,47,150,174,
    146,26,151,135,19,183,144,67,92,111,121,116,22,119,151,43,
    194,231,185,49,167,92,144,140,23,25,174,236,237,20,189,18,
    227,119,131,138,107,63,42,13,127,201,239,159,216,120,199,208,
    213,225,25,9,43,185,15,232,154,29,202,35,231,162,31,116,
    249,71,114,238,104,36,67,223,254,152,166,124,2,197,50,142,
    101,38,204,0,74,45,239,161,80,36,148,196,34,22,10,151,
    227,141,178,84,193,66,198,175,145,71,216,228,145,100,174,254,
    49,227,106,147,106,234,179,204,105,83,234,209,185,50,79,147,
    246,11,200,82,103,206,70,95,14,164,146,151,192,224,212,150,
    222,117,124,137,39,71,52,198,18,187,202,131,56,197,113,110,
    34,229,62,75,109,227,235,2,166,92,81,49,106,165,90,165,
    38,248,228,186,240,178,181,48,86,201,199,44,200,202,203,113,
    98,211,136,34,143,164,7,10,43,225,20,223,223,242,107,32,
    237,27,126,51,149,29,57,228,75,190,109,236,184,67,253,206,
    129,159,167,247,146,68,51,149,223,130,209,89,108,255,136,154,
    199,185,235,127,70,179,31,96,51,220,218,204,236,221,212,246,
    126,233,38,114,87,170,167,73,18,121,252,78,108,184,165,86,
    174,149,252,198,197,19,122,253,202,199,207,6,145,119,32,125,
    253,210,70,221,191,94,230,121,52,116,113,124,245,74,137,221,
    96,152,174,48,127,225,185,31,211,172,59,23,70,19,25,7,
    238,32,120,175,223,7,102,195,252,150,245,10,251,200,185,197,
    1,62,82,47,164,68,134,38,150,221,32,193,181,120,161,226,
    140,52,81,16,47,216,198,75,169,180,56,251,6,24,170,107,
    82,125,229,220,230,27,230,111,176,161,55,56,181,169,26,222,
    180,241,123,14,191,13,204,33,70,9,111,126,179,194,196,239,
    6,126,55,140,153,70,205,172,213,80,110,122,70,20,255,175,
    35,191,235,198,58,206,251,47,13,119,182,215,
};

EmbeddedPython embedded_m5_internal_param_RandomRepl(
    "m5/internal/param_RandomRepl.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_RandomRepl.py",
    "m5.internal.param_RandomRepl",
    data_m5_internal_param_RandomRepl,
    2316,
    6693);

} // anonymous namespace
