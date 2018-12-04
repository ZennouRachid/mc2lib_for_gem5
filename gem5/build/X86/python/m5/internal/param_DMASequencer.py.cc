#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DMASequencer[] = {
    120,156,189,88,235,111,28,73,17,175,158,29,175,189,142,157,
    172,99,199,121,57,241,228,46,62,47,160,120,239,56,194,29,
    92,48,132,36,66,156,20,95,110,140,20,103,15,49,26,207,
    180,215,179,158,199,50,211,78,178,39,91,66,56,2,196,119,
    254,2,190,192,119,254,63,168,170,158,30,143,237,13,58,9,
    236,196,219,91,219,83,221,93,143,95,61,122,2,40,255,77,
    224,231,23,248,41,102,45,128,16,255,4,196,0,137,128,158,
    5,66,90,16,206,195,222,4,228,63,130,112,2,222,1,244,
    26,32,27,112,132,132,13,223,52,32,253,24,136,103,129,121,
    182,32,156,28,199,51,195,251,78,65,108,243,140,5,163,105,
    144,19,208,107,194,203,116,14,108,57,9,123,211,144,191,3,
    33,68,42,96,107,212,54,252,83,208,107,33,207,29,228,153,
    102,158,127,17,79,249,176,69,15,137,63,108,65,56,13,239,
    80,226,75,16,94,98,1,240,196,25,38,102,33,156,101,226,
    50,132,151,153,184,98,54,111,67,111,206,208,87,107,244,124,
    141,94,168,209,215,106,244,98,141,190,94,163,111,212,232,155,
    53,250,86,141,190,93,163,151,106,244,157,26,125,183,70,47,
    215,104,135,233,43,32,231,96,112,15,6,31,192,224,67,216,
    17,16,182,73,53,52,248,171,222,125,144,54,12,86,160,183,
    2,18,255,238,195,145,0,17,206,213,86,124,196,43,174,86,
    43,86,121,69,7,122,29,144,248,183,170,87,76,193,102,231,
    26,194,34,250,55,254,235,8,164,212,12,14,175,101,94,68,
    89,234,69,233,78,22,89,244,124,146,6,2,82,64,67,163,
    68,212,19,66,212,16,24,78,40,59,34,234,16,119,16,48,
    64,176,88,116,66,216,128,155,135,130,126,12,26,112,128,132,
    13,59,252,96,96,151,28,135,136,147,57,56,0,24,76,192,
    1,207,108,190,76,111,131,173,154,12,133,61,130,130,126,138,
    107,233,233,22,30,180,217,161,211,55,88,106,69,82,175,177,
    108,106,30,7,111,232,231,126,226,61,125,254,120,83,254,126,
    95,166,129,204,59,36,189,106,145,10,201,48,203,85,28,109,
    171,41,98,245,82,63,145,158,167,166,241,71,142,235,84,164,
    80,109,101,227,207,65,22,165,40,3,42,85,168,60,26,170,
    217,106,181,151,100,225,126,44,213,37,156,249,53,207,60,203,
    243,44,239,144,81,92,26,20,13,195,189,190,34,33,19,58,
    162,67,210,241,80,124,141,67,119,55,75,100,55,247,131,221,
    40,236,62,205,130,253,68,166,170,232,246,101,242,240,129,252,
    164,187,189,31,197,97,119,235,243,31,119,135,35,181,155,165,
    221,228,97,23,133,145,121,234,199,221,179,218,173,33,215,85,
    218,250,77,212,247,74,17,119,101,60,148,57,105,92,92,166,
    99,197,140,152,23,119,69,67,204,137,89,17,53,141,31,39,
    235,126,252,71,233,71,171,204,12,232,74,81,250,213,130,67,
    38,200,89,29,242,35,185,175,65,94,67,29,209,41,125,1,
    71,22,252,182,65,12,135,56,218,24,206,119,43,31,14,56,
    156,245,78,147,112,136,126,158,64,55,126,187,196,27,77,241,
    70,22,28,224,136,14,182,225,16,243,5,114,226,20,142,123,
    45,200,255,78,244,160,69,48,22,41,192,214,65,19,253,111,
    87,254,215,168,37,77,194,40,39,99,187,4,216,206,180,153,
    205,138,181,161,175,118,221,89,227,25,52,17,123,120,35,75,
    181,19,119,162,52,52,78,213,176,216,137,98,132,133,75,246,
    227,221,152,45,206,252,138,141,140,22,196,89,33,25,90,188,
    183,123,133,24,137,123,103,200,219,208,169,36,15,47,14,101,
    17,16,140,16,94,122,71,146,128,118,59,111,104,184,20,207,
    11,180,253,45,6,66,27,161,208,68,32,116,16,8,51,98,
    2,169,37,107,70,92,22,27,17,217,49,32,197,8,30,182,
    65,197,63,65,251,66,192,158,5,249,18,71,42,254,9,114,
    24,133,227,1,135,58,61,251,154,180,215,179,24,236,232,85,
    61,121,192,56,65,192,32,231,35,138,93,244,33,57,126,2,
    6,205,210,203,136,29,141,138,124,68,35,178,211,54,22,110,
    110,67,241,55,64,107,162,251,15,160,132,201,81,3,113,208,
    6,12,90,204,8,56,187,136,7,254,145,209,85,166,5,118,
    187,218,141,138,236,141,142,101,162,57,175,109,98,136,188,24,
    125,181,61,144,129,42,150,113,226,85,182,239,4,126,154,102,
    202,241,195,208,241,21,198,250,246,190,146,133,163,50,103,165,
    232,144,235,220,91,6,57,213,126,163,161,116,153,208,112,9,
    163,64,97,22,225,236,227,113,24,22,82,161,227,119,179,176,
    192,121,90,218,151,202,109,211,10,50,110,198,2,48,46,60,
    98,165,99,145,143,34,245,177,145,64,231,148,166,129,74,33,
    227,29,78,83,65,236,23,133,71,18,240,60,3,140,180,126,
    237,199,251,146,119,47,112,63,20,136,72,45,195,185,103,159,
    27,164,136,209,155,149,73,179,52,28,161,108,81,240,41,29,
    123,163,204,65,4,190,107,8,188,73,28,155,248,221,20,139,
    86,96,151,112,107,26,200,45,146,210,192,14,23,165,207,17,
    126,71,152,52,58,22,135,61,235,67,112,117,191,79,20,45,
    118,239,211,176,66,195,71,52,172,26,149,207,83,239,217,211,
    122,179,248,22,43,27,52,74,181,170,72,250,230,68,36,221,
    60,142,36,76,108,155,7,92,52,7,141,90,68,52,72,241,
    124,189,12,32,138,53,116,52,198,26,177,114,228,96,37,173,
    99,159,14,220,112,111,210,81,247,112,88,93,41,86,29,141,
    52,103,215,47,156,52,59,134,183,67,15,117,234,34,112,187,
    75,96,138,167,86,167,95,131,175,235,16,7,97,215,253,144,
    6,251,125,38,255,222,197,154,188,175,77,254,43,58,107,166,
    196,215,44,227,106,90,4,4,14,242,67,85,220,72,154,209,
    117,50,126,221,236,215,177,172,189,76,111,97,165,98,219,83,
    177,250,148,139,21,23,60,238,58,77,246,26,76,24,162,73,
    30,216,105,192,98,89,133,10,42,19,195,60,123,59,114,178,
    29,71,129,17,232,209,74,177,182,82,124,129,105,196,89,63,
    182,117,153,50,114,57,164,144,215,41,128,236,160,162,20,127,
    211,86,207,222,6,146,11,5,255,242,60,29,241,186,73,241,
    202,2,132,110,97,63,88,198,15,156,243,176,83,161,84,119,
    238,78,152,174,156,64,106,188,160,131,166,217,3,13,113,29,
    99,188,102,127,250,16,46,11,2,215,159,129,123,82,1,127,
    2,50,47,90,177,12,104,142,21,19,47,196,89,252,14,56,
    248,199,84,29,221,34,82,165,97,14,12,148,226,51,102,213,
    69,232,75,248,75,45,115,152,82,209,40,187,149,122,184,216,
    85,184,176,95,190,83,57,176,79,70,12,217,28,67,139,216,
    56,54,116,11,120,255,100,18,226,246,132,109,32,213,121,58,
    101,74,31,225,145,52,175,142,93,66,73,247,182,152,183,52,
    40,24,47,159,209,240,121,21,173,194,204,157,147,96,203,167,
    179,100,173,58,120,58,205,108,209,233,54,203,123,101,146,43,
    117,125,19,110,85,161,140,230,95,18,235,15,113,144,120,203,
    19,124,45,5,186,228,32,84,104,180,200,211,71,150,192,203,
    41,118,7,239,248,114,170,47,161,174,238,14,24,154,230,195,
    169,129,82,202,137,92,204,22,217,208,182,170,156,173,253,72,
    195,219,115,143,47,114,229,163,216,79,182,67,127,157,242,73,
    65,103,5,38,158,44,35,120,187,46,56,197,130,120,159,236,
    252,243,11,163,192,235,115,239,57,31,1,87,112,45,56,131,
    63,204,2,206,1,191,217,149,78,34,147,109,188,96,238,70,
    67,103,39,246,251,236,145,70,169,216,87,70,49,197,46,173,
    197,43,103,138,130,10,254,70,230,4,89,138,201,110,63,80,
    89,238,132,18,27,120,25,58,15,28,206,148,78,84,56,254,
    54,62,245,3,165,177,125,50,52,185,109,242,243,126,193,29,
    210,222,27,34,47,196,163,30,94,167,35,236,19,95,67,213,
    36,232,178,192,89,133,250,36,238,0,117,168,96,61,193,11,
    156,26,233,4,245,152,134,135,52,116,161,94,100,207,211,135,
    63,45,253,87,144,153,154,226,182,213,178,248,154,89,231,123,
    65,43,139,179,241,249,252,187,196,167,180,161,55,97,162,180,
    105,94,60,77,130,228,118,191,135,237,125,147,103,46,81,232,
    78,254,175,161,203,240,191,16,224,31,254,95,35,214,253,217,
    133,203,237,174,67,89,177,223,23,173,162,174,212,172,142,214,
    129,48,109,106,93,35,190,235,222,28,11,27,47,200,165,175,
    164,246,206,253,11,208,146,3,94,31,250,135,227,24,60,219,
    43,62,173,20,58,226,70,101,180,192,78,51,239,176,232,197,
    25,191,173,84,220,21,82,211,248,115,126,75,197,6,240,44,
    221,55,30,131,177,89,217,129,46,54,169,124,227,157,181,133,
    110,13,137,211,31,14,101,26,186,31,211,162,79,160,222,226,
    49,207,185,35,129,82,205,17,212,218,135,134,88,192,22,226,
    108,236,81,214,170,105,201,94,108,87,209,118,17,254,100,212,
    254,213,160,182,67,109,195,113,46,117,41,17,233,236,89,37,
    78,247,25,152,100,90,225,50,148,177,84,114,140,75,20,41,
    83,222,135,66,137,245,36,27,97,19,62,201,147,184,200,243,
    46,38,13,63,209,41,67,95,41,48,13,139,166,213,106,180,
    154,45,193,21,237,212,203,217,218,92,179,154,163,123,153,110,
    64,71,133,11,70,239,178,204,176,24,94,253,125,47,191,48,
    210,246,225,183,88,166,16,145,61,249,70,178,225,39,250,237,
    4,63,47,239,46,133,70,44,191,49,163,26,237,254,128,134,
    7,149,249,127,66,171,9,192,201,195,53,163,241,154,214,216,
    221,223,30,189,192,221,248,221,89,242,80,45,189,151,107,115,
    84,40,153,168,187,99,25,54,163,100,24,203,231,50,201,242,
    145,114,198,178,60,46,219,130,146,233,246,88,38,124,168,95,
    16,113,227,122,246,249,147,56,11,246,100,88,242,220,121,63,
    207,211,44,241,113,126,252,41,40,109,185,195,220,169,231,97,
    78,171,174,157,154,45,100,30,249,113,244,173,228,151,45,99,
    246,211,166,57,125,152,76,247,89,35,84,247,121,22,202,51,
    182,125,28,134,185,235,167,125,137,16,160,102,74,221,59,205,
    112,194,100,134,235,244,54,149,54,134,97,188,139,176,156,228,
    137,31,147,36,49,131,199,60,231,198,231,20,26,232,185,249,
    193,205,200,153,50,194,16,206,101,63,66,213,115,222,194,240,
    151,73,149,98,135,189,56,166,248,212,215,94,72,36,235,174,
    94,95,223,215,249,182,222,195,129,222,136,181,166,90,162,73,
    223,87,240,219,194,140,107,53,240,14,61,43,108,252,110,227,
    119,219,154,105,183,236,86,11,249,46,205,136,255,254,127,25,
    51,195,180,181,140,59,253,7,225,40,59,60,
};

EmbeddedPython embedded_m5_internal_param_DMASequencer(
    "m5/internal/param_DMASequencer.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_DMASequencer.py",
    "m5.internal.param_DMASequencer",
    data_m5_internal_param_DMASequencer,
    2428,
    7163);

} // anonymous namespace