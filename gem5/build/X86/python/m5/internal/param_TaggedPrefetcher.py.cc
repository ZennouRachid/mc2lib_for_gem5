#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TaggedPrefetcher[] = {
    120,156,197,88,109,111,219,200,17,158,165,104,217,82,236,88,
    78,252,146,23,39,97,46,113,172,182,136,117,215,107,122,215,
    94,154,54,119,9,138,22,56,95,66,95,17,71,87,148,160,
    201,149,68,89,36,5,114,149,68,87,27,5,234,160,45,250,
    189,191,160,95,174,223,251,255,218,153,89,146,166,109,185,8,
    208,70,77,172,213,106,119,118,119,102,159,103,102,103,215,131,
    236,223,12,126,126,129,159,84,24,0,62,254,9,24,0,132,
    2,218,6,8,105,128,127,25,246,103,32,249,17,248,51,240,
    22,160,93,1,89,129,35,172,152,240,77,5,162,15,129,100,
    150,89,102,23,252,217,73,50,243,60,239,28,12,76,110,49,
    96,92,7,57,3,237,42,188,136,150,192,148,179,176,95,135,
    228,45,8,33,34,1,187,227,70,46,63,7,237,26,202,220,
    64,153,58,203,252,147,100,178,206,26,117,146,188,95,3,191,
    14,111,81,227,11,224,95,96,5,112,197,121,174,44,128,191,
    192,149,139,224,95,228,202,98,62,121,3,218,75,121,253,82,
    169,126,185,84,95,46,213,87,74,245,213,82,125,173,84,191,
    82,170,95,45,213,175,149,234,215,75,245,245,82,253,70,169,
    126,179,84,191,197,245,69,144,75,208,183,160,127,27,250,31,
    64,71,128,223,32,115,112,147,95,182,239,128,52,161,127,23,
    218,119,65,226,223,29,56,18,32,252,165,210,136,13,30,113,
    169,24,113,143,71,108,66,123,19,36,254,221,211,35,230,96,
    167,185,130,84,8,254,133,255,154,2,107,106,30,139,87,50,
    73,131,56,114,130,168,19,7,6,245,207,82,65,228,241,168,
    168,100,44,250,130,88,52,4,166,16,234,142,44,58,196,25,
    4,244,145,32,6,173,224,87,224,234,161,160,31,253,10,28,
    96,197,132,14,119,244,205,76,226,16,185,177,4,7,0,253,
    25,56,224,150,157,23,209,117,48,85,149,225,223,39,248,117,
    47,142,165,222,93,92,104,167,73,171,111,179,214,138,180,222,
    98,221,212,26,22,206,208,77,220,208,249,218,237,118,165,255,
    44,145,29,169,188,158,76,154,100,129,170,145,25,225,48,78,
    212,32,216,83,115,36,238,68,110,40,29,71,213,241,71,130,
    99,85,160,208,116,101,226,207,126,28,68,168,7,26,150,170,
    36,24,170,133,98,180,19,198,254,104,32,213,5,108,249,21,
    183,60,77,146,56,105,210,198,216,84,40,42,134,251,93,69,
    138,134,180,68,147,52,228,34,253,13,22,173,94,28,202,86,
    226,122,189,192,111,61,137,189,81,40,35,149,182,186,50,124,
    112,95,126,212,218,27,5,3,191,181,251,233,143,91,195,177,
    234,197,81,43,124,208,66,101,100,18,185,131,214,100,11,183,
    80,242,18,77,255,58,232,58,153,154,61,57,24,202,132,172,
    78,47,210,210,98,94,92,22,55,69,69,44,137,5,17,84,
    115,60,103,203,120,126,151,225,105,100,81,1,33,21,25,190,
    6,28,114,133,64,107,18,158,4,99,133,208,67,59,17,156,
    174,128,35,3,126,91,33,129,67,44,77,116,229,155,5,150,
    125,118,101,61,211,44,28,34,222,51,8,231,183,235,60,209,
    28,79,100,192,1,150,8,180,9,135,24,43,80,18,155,176,
    220,175,65,242,119,170,247,107,68,103,17,1,236,30,84,145,
    7,102,193,3,205,94,178,196,15,18,218,112,155,136,219,172,
    231,173,113,186,53,116,85,207,94,200,209,193,45,98,148,183,
    227,72,3,217,9,34,63,7,86,83,163,19,12,144,26,54,
    237,31,207,198,98,131,216,45,196,104,211,188,65,156,74,166,
    23,207,109,47,146,32,73,119,134,60,13,173,74,250,240,96,
    95,166,30,81,9,41,166,103,36,13,104,182,105,208,195,38,
    223,94,166,37,174,49,25,26,72,135,42,146,161,137,100,152,
    23,51,88,91,55,230,197,69,177,29,208,94,122,100,28,81,
    196,204,153,241,15,208,120,8,216,55,32,89,103,175,197,63,
    65,160,145,107,30,176,219,83,223,115,218,1,221,138,142,143,
    200,234,198,3,230,10,146,6,37,31,146,31,35,142,4,254,
    12,244,171,25,210,200,31,205,140,100,76,37,138,211,52,6,
    78,110,66,250,55,192,29,69,10,28,64,70,149,163,10,114,
    161,1,232,188,24,29,176,117,21,23,252,35,51,44,11,17,
    12,189,234,5,105,252,90,251,52,213,57,198,237,160,155,60,
    27,127,181,215,151,158,74,111,97,195,203,120,100,121,110,20,
    197,202,114,125,223,114,21,250,252,222,72,201,212,82,177,181,
    145,54,9,62,251,90,206,158,98,190,241,80,218,92,209,148,
    241,3,79,97,52,185,204,63,216,21,83,169,16,252,94,236,
    167,216,78,67,187,82,217,13,26,65,155,27,179,2,204,13,
    135,68,105,89,148,35,111,125,156,107,160,99,75,53,167,75,
    42,7,29,14,87,222,192,77,83,135,52,224,118,38,25,89,
    253,202,29,140,36,207,158,226,124,168,16,85,181,14,83,137,
    66,87,200,152,220,118,54,40,138,35,127,140,250,5,222,199,
    180,244,149,44,22,17,1,87,144,124,179,88,86,241,187,42,
    86,13,207,204,40,87,205,105,183,74,134,3,131,46,50,220,
    145,130,71,24,60,154,6,187,63,219,68,148,181,191,79,53,
    26,108,223,165,98,131,138,123,84,108,230,102,191,111,219,23,
    78,219,206,38,24,108,176,87,201,76,43,60,234,155,19,30,
    117,245,216,163,48,200,237,28,240,65,218,175,148,60,163,66,
    198,39,143,50,71,34,159,67,192,209,231,72,148,61,8,79,
    215,178,15,208,130,219,246,85,90,234,54,22,155,27,233,166,
    165,25,103,245,220,212,138,226,99,154,91,212,169,195,24,145,
    220,94,167,93,47,209,184,91,162,177,109,145,4,113,216,190,
    67,133,121,222,182,127,111,250,219,222,213,219,254,75,90,111,
    62,227,217,2,243,171,46,60,34,9,97,81,28,118,207,177,
    24,175,17,0,229,173,95,195,99,238,69,116,13,79,46,222,
    127,58,188,62,230,195,139,15,64,206,64,243,72,214,159,201,
    43,85,66,161,83,129,213,236,84,74,233,216,24,38,241,155,
    177,21,119,44,5,185,66,15,55,210,173,141,244,51,12,41,
    214,163,227,253,206,194,71,34,135,228,254,58,28,208,94,168,
    32,194,223,52,213,211,55,158,228,131,131,127,57,142,246,126,
    157,184,56,217,129,132,208,48,22,70,142,5,199,63,204,94,
    40,236,77,5,136,122,1,4,153,242,140,22,171,51,10,21,
    177,134,254,94,194,128,62,196,207,148,72,246,103,224,124,85,
    192,159,128,182,24,119,50,115,110,246,153,220,111,72,50,253,
    29,112,32,152,112,10,233,244,145,78,30,150,64,135,73,63,
    97,81,125,40,253,26,254,82,138,34,249,209,81,201,50,152,
    178,219,152,133,219,48,54,239,116,60,152,39,61,135,246,29,
    93,140,196,216,71,116,106,120,247,100,64,226,148,133,247,64,
    170,247,13,204,156,94,198,33,141,94,30,195,66,65,248,186,
    184,108,104,114,48,111,62,161,226,211,194,115,69,222,246,30,
    149,187,117,58,106,150,78,12,71,135,157,93,210,192,100,157,
    23,103,21,197,158,211,19,113,42,11,153,119,127,78,226,63,
    196,66,226,13,80,240,149,21,232,50,132,180,161,210,32,212,
    143,12,129,23,87,204,28,222,242,197,85,95,80,109,157,57,
    48,77,243,15,135,10,10,49,39,226,51,239,204,182,222,179,
    2,120,141,41,21,111,166,226,111,4,235,195,129,27,238,249,
    238,163,148,150,162,245,188,220,191,140,92,249,70,89,121,242,
    13,113,158,254,252,243,179,220,136,87,83,201,75,31,102,138,
    179,242,236,16,126,236,113,92,248,186,39,173,80,134,123,120,
    33,237,5,67,171,51,112,187,140,76,37,51,238,171,220,56,
    197,208,150,124,152,163,71,74,9,193,118,108,121,113,132,65,
    112,228,169,56,177,124,137,137,190,244,173,251,22,71,80,43,
    72,45,119,15,123,93,79,105,174,159,116,87,78,173,220,164,
    155,114,22,181,255,154,170,83,67,214,193,43,120,128,249,228,
    8,138,36,66,31,25,28,109,40,151,226,76,81,187,14,158,
    53,120,217,83,99,29,184,30,83,241,128,138,22,148,15,225,
    247,141,229,79,113,230,132,150,160,237,170,138,235,70,205,80,
    171,19,188,245,25,205,144,158,245,217,189,119,241,89,105,66,
    123,38,247,220,42,73,202,89,186,67,82,89,163,192,223,174,
    231,175,87,23,184,113,158,31,134,170,217,195,16,250,248,236,
    127,235,227,236,35,83,243,142,131,255,169,107,219,63,251,191,
    232,110,63,130,236,184,63,207,173,69,217,176,5,237,214,125,
    145,231,186,101,171,248,242,124,227,92,94,57,94,34,93,37,
    53,82,119,167,100,45,71,8,189,240,31,142,29,246,108,210,
    249,164,48,236,136,179,157,241,50,3,152,63,146,209,203,28,
    63,129,42,78,47,41,251,252,57,63,131,241,70,56,134,78,
    64,143,201,89,45,246,131,160,142,228,235,51,186,233,61,209,
    121,38,73,187,195,161,140,124,251,67,26,248,17,148,243,69,
    150,153,10,51,40,62,29,65,41,15,169,136,101,204,69,206,
    250,36,133,186,146,181,140,104,163,240,194,105,97,203,76,254,
    107,206,228,38,61,242,28,7,97,155,34,151,14,187,69,196,
    181,159,22,176,220,62,159,166,190,236,38,82,210,165,229,29,
    164,48,55,98,248,244,79,222,65,118,1,95,14,164,146,231,
    160,206,169,82,118,135,243,37,158,115,241,24,47,13,179,220,
    136,3,29,103,122,71,3,193,249,123,200,222,34,241,104,16,
    85,60,28,86,140,90,181,38,248,188,61,245,212,92,106,171,
    22,109,164,163,78,153,199,169,77,45,138,182,61,59,0,89,
    25,167,252,122,205,79,94,26,5,126,139,203,143,72,2,140,
    239,81,219,110,168,223,87,184,63,187,113,165,218,53,248,221,
    143,50,8,251,7,84,220,47,240,253,9,141,254,0,139,240,
    193,86,110,247,150,182,251,249,72,142,202,118,243,75,96,248,
    64,89,19,165,63,119,83,89,146,189,50,81,104,103,156,42,
    25,170,235,167,58,101,52,10,157,47,101,24,39,227,47,99,
    95,170,245,83,253,143,125,63,177,221,168,43,113,67,40,241,
    97,130,157,16,200,178,30,61,71,46,53,89,209,147,178,103,
    116,209,66,216,169,223,211,56,159,63,219,255,197,32,246,246,
    165,159,201,220,56,95,230,73,28,186,216,62,121,149,157,32,
    95,101,233,84,191,159,208,168,149,83,173,169,76,2,119,16,
    124,123,118,135,138,153,114,219,111,78,92,16,15,171,36,116,
    7,180,201,3,102,73,222,207,121,205,57,176,147,215,157,110,
    228,220,104,226,161,197,252,77,100,55,64,164,19,158,246,244,
    216,44,132,147,11,169,59,231,71,138,242,60,83,115,108,125,
    9,209,47,16,143,248,193,129,46,107,244,184,87,155,171,137,
    42,125,47,226,183,129,49,222,168,136,186,88,16,38,126,55,
    240,187,97,204,55,106,102,173,134,114,23,230,197,127,250,127,
    11,131,68,221,184,213,168,137,127,3,138,78,142,236,
};

EmbeddedPython embedded_m5_internal_param_TaggedPrefetcher(
    "m5/internal/param_TaggedPrefetcher.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_TaggedPrefetcher.py",
    "m5.internal.param_TaggedPrefetcher",
    data_m5_internal_param_TaggedPrefetcher,
    2462,
    7368);

} // anonymous namespace