#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_grammar[] = {
    120,156,181,87,109,111,35,69,18,174,30,191,197,94,103,19,
    118,151,176,225,117,246,32,196,188,173,197,9,208,129,172,136,
    183,93,64,160,8,77,208,157,88,33,153,201,184,237,140,99,
    207,140,166,219,183,137,148,136,211,46,18,124,225,255,240,55,
    238,31,220,135,251,19,124,64,80,79,245,180,19,22,116,226,
    131,47,182,59,253,82,221,93,83,245,60,85,53,9,85,127,
    53,254,189,203,63,243,5,55,35,254,42,154,17,221,91,246,
    21,221,11,124,191,38,253,128,116,157,198,138,70,53,250,150,
    232,33,209,151,247,26,52,170,147,110,202,108,99,57,219,194,
    166,131,94,147,15,78,127,225,191,125,219,225,238,231,113,105,
    244,157,178,204,203,196,235,16,240,239,125,232,112,131,27,205,
    183,43,236,228,75,191,229,219,107,20,29,244,32,145,212,42,
    117,241,251,0,226,207,112,99,137,166,138,206,136,206,20,61,
    12,72,157,5,24,12,69,231,131,158,98,137,253,30,54,216,
    54,55,119,78,18,93,216,52,207,236,26,143,134,195,52,75,
    237,112,104,27,88,207,143,117,230,36,235,56,91,207,198,182,
    197,157,185,54,38,158,232,8,43,61,242,141,25,112,211,63,
    202,231,186,95,198,201,81,58,234,127,152,39,139,185,206,172,
    233,79,244,252,205,215,244,235,125,83,38,253,226,212,30,229,
    89,127,254,102,127,97,211,89,127,82,198,243,121,92,222,46,
    78,35,60,209,45,156,132,219,72,109,170,253,30,122,149,98,
    89,60,215,172,88,71,6,243,124,180,152,97,8,129,253,60,
    211,178,249,66,153,21,105,132,83,66,156,132,211,155,74,158,
    254,35,183,188,244,84,221,123,234,243,11,79,17,28,14,96,
    40,233,212,128,16,116,234,64,200,168,13,104,0,20,12,158,
    38,141,154,178,196,200,104,73,103,141,70,107,210,105,195,203,
    120,220,68,85,128,192,239,83,92,181,67,130,62,246,239,113,
    147,202,155,240,56,223,240,32,160,76,156,14,111,43,231,109,
    248,104,223,2,111,206,100,230,217,101,55,76,77,24,103,97,
    58,155,233,73,60,11,99,107,203,244,112,97,181,32,203,94,
    229,230,61,63,37,216,20,211,207,244,201,240,248,126,92,78,
    140,136,69,226,32,28,95,77,174,206,248,246,49,193,156,93,
    20,159,233,19,93,222,141,19,155,151,167,47,98,178,41,248,
    232,242,71,76,83,175,8,32,166,249,230,127,152,134,141,95,
    205,151,100,21,77,3,154,214,128,237,135,138,190,10,232,156,
    191,44,80,163,169,112,151,39,205,63,100,123,195,91,54,192,
    118,246,215,128,133,216,91,33,70,107,52,184,48,122,211,25,
    29,188,218,143,96,174,63,97,110,177,94,190,176,197,194,26,
    60,5,63,186,1,11,190,56,210,161,155,14,199,41,111,159,
    47,140,13,117,54,10,239,167,246,40,132,129,218,203,141,163,
    180,76,127,230,112,34,83,54,62,116,55,246,0,215,232,10,
    166,224,171,220,8,91,138,216,30,9,189,77,49,75,109,180,
    225,25,198,71,27,28,109,177,225,52,78,18,239,231,186,247,
    115,180,14,89,232,200,247,201,127,190,106,149,30,191,230,61,
    46,1,209,187,252,21,31,6,197,229,65,87,221,84,27,170,
    166,218,170,163,30,11,18,207,139,186,143,128,31,43,113,7,
    99,224,56,160,242,105,154,144,184,70,218,41,123,7,107,129,
    172,189,45,83,10,145,89,161,23,184,197,154,44,254,93,22,
    107,203,197,186,91,172,203,226,119,196,22,156,54,241,101,116,
    156,185,179,3,250,65,68,25,5,24,54,221,134,166,108,248,
    81,54,180,240,189,216,80,247,27,90,50,108,185,13,45,217,
    240,159,74,93,243,111,129,148,27,48,216,182,57,122,108,139,
    92,71,228,214,84,37,247,19,141,174,252,70,174,91,201,173,
    139,220,43,94,238,150,226,85,145,107,211,180,67,7,236,238,
    209,85,178,93,220,247,80,120,51,14,104,235,65,149,44,54,
    150,225,99,6,18,154,168,11,28,108,121,28,240,164,192,92,
    128,5,204,88,64,36,89,148,37,123,125,40,91,36,205,165,
    228,67,138,95,51,249,162,76,180,48,121,144,113,252,222,75,
    193,100,219,189,188,61,205,180,48,97,119,199,236,134,249,225,
    84,39,54,60,138,77,152,229,23,236,9,177,216,195,173,209,
    147,104,112,135,83,114,251,55,154,22,179,211,232,41,204,60,
    141,6,120,143,158,241,161,11,23,101,185,35,138,196,179,211,
    66,95,138,110,104,112,223,42,145,126,69,178,216,68,91,28,
    60,28,190,141,67,223,169,32,222,86,45,6,121,231,82,251,
    236,165,182,173,234,106,227,145,255,157,160,166,12,158,105,96,
    216,44,217,100,79,236,157,128,228,240,78,203,83,227,191,36,
    197,1,251,216,74,101,192,121,196,74,146,178,62,12,110,85,
    129,82,220,63,107,208,121,163,194,50,163,147,153,112,206,208,
    230,254,154,84,22,202,17,67,96,196,179,28,29,25,57,152,
    77,235,178,233,10,77,187,96,211,91,213,96,29,236,241,131,
    171,224,129,31,108,128,38,111,157,51,13,152,36,155,196,145,
    31,179,215,232,172,5,45,207,249,186,53,154,94,7,53,248,
    30,134,239,153,36,209,51,214,152,106,231,109,170,180,184,225,
    184,218,38,151,53,247,205,243,112,92,57,17,199,184,240,121,
    168,195,56,116,54,122,53,188,207,80,2,122,4,161,226,145,
    162,228,184,153,160,24,50,2,140,88,250,2,128,73,110,115,
    137,174,26,169,112,188,200,18,137,161,2,113,233,141,244,225,
    98,34,129,212,50,38,142,249,134,222,227,24,64,149,212,164,
    124,98,156,37,90,134,135,177,209,78,9,193,92,244,23,200,
    1,254,99,129,106,166,239,11,84,229,216,100,198,228,144,94,
    154,113,160,23,144,59,221,138,130,35,182,131,51,202,129,8,
    153,49,218,69,211,243,33,221,223,26,133,126,230,179,200,133,
    86,57,177,64,215,177,35,47,196,102,23,128,31,197,12,77,
    220,227,136,26,189,140,85,68,226,168,143,230,165,165,92,154,
    88,145,43,220,185,232,150,218,44,102,118,149,116,233,250,11,
    134,206,110,95,227,212,80,248,130,84,112,157,121,176,161,214,
    213,22,247,215,229,179,25,220,100,190,172,171,196,167,6,252,
    164,62,200,30,225,64,185,139,62,39,126,27,84,105,3,144,
    83,148,221,246,98,129,136,189,143,62,231,3,150,204,174,227,
    217,153,35,108,69,71,4,208,198,241,4,66,66,21,198,40,
    51,226,135,96,89,131,193,193,165,249,235,31,97,82,115,218,
    213,229,18,154,97,94,74,202,191,128,104,79,2,214,171,104,
    94,243,150,135,132,116,80,24,95,0,41,26,120,129,82,199,
    163,75,201,251,54,85,25,60,250,27,173,180,74,22,76,59,
    239,136,78,56,115,179,242,77,83,93,227,182,203,241,105,211,
    165,106,216,162,225,227,17,234,107,54,88,217,151,138,77,242,
    19,236,39,89,104,42,175,85,79,56,163,143,235,180,197,229,
    89,182,41,37,156,8,242,123,21,166,248,73,93,89,198,62,
    122,80,213,188,242,78,96,158,227,246,224,52,179,241,73,40,
    156,229,156,17,238,152,119,118,70,252,237,236,237,237,152,193,
    64,114,142,217,254,3,65,212,89,249,152,229,123,80,54,66,
    21,23,221,90,230,11,125,82,112,49,133,149,127,198,179,133,
    150,215,4,241,178,227,143,100,50,225,213,220,76,86,105,104,
    4,242,98,40,74,254,11,7,118,196,202,77,70,253,139,193,
    166,90,218,119,89,10,189,65,190,22,158,74,76,223,94,191,
    108,222,113,205,89,176,246,123,11,10,98,13,98,203,39,85,
    185,154,28,197,172,180,101,148,238,152,240,221,80,172,40,89,
    198,33,236,3,111,160,8,175,66,143,24,36,250,16,205,157,
    21,163,14,198,176,206,24,223,211,242,165,160,198,180,223,119,
    177,12,19,145,148,192,82,20,72,61,240,2,249,236,143,251,
    163,247,208,220,69,243,17,253,31,94,31,145,47,16,155,13,
    20,104,170,118,163,125,181,189,123,237,70,187,219,94,115,140,
    70,193,235,188,58,59,189,141,98,10,49,77,2,53,38,80,
    80,69,202,219,211,189,39,72,21,36,7,175,90,91,185,118,
    224,222,28,246,144,127,164,162,64,189,221,13,182,26,191,2,
    92,190,127,47,
};

EmbeddedPython embedded_m5_util_grammar(
    "m5/util/grammar.py",
    "/home/rachid/Documents/gem5-e1/src/python/m5/util/grammar.py",
    "m5.util.grammar",
    data_m5_util_grammar,
    1844,
    4381);

} // anonymous namespace