#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivO3CPU[] = {
    120,156,189,91,249,127,19,199,21,159,149,100,25,25,27,204,
    125,131,146,64,112,72,193,36,132,144,131,210,130,13,141,83,
    98,140,100,10,56,109,213,245,238,216,90,89,218,85,119,71,
    128,82,211,35,144,52,189,219,180,233,125,167,71,122,223,237,
    127,209,223,250,39,244,159,232,47,237,123,111,247,173,70,210,
    202,82,63,173,1,252,60,250,206,119,174,119,205,204,106,177,
    68,244,103,8,126,222,11,63,193,63,83,66,216,240,207,16,
    85,33,106,134,88,72,9,67,166,132,189,77,172,12,9,255,
    41,97,15,137,251,66,44,164,133,76,139,123,80,200,136,151,
    211,194,61,41,144,179,157,56,55,132,61,156,196,25,165,126,
    55,136,106,134,144,148,104,142,8,57,36,22,178,226,186,187,
    69,100,228,176,88,25,17,254,125,97,24,134,107,136,27,205,
    113,230,111,16,11,57,224,28,0,206,8,113,254,140,156,168,
    50,135,149,200,183,115,194,30,17,247,97,198,27,133,189,145,
    38,0,35,142,82,97,76,216,99,84,216,36,236,77,84,216,
    204,157,143,139,133,45,92,222,170,149,183,105,229,237,90,121,
    135,86,222,169,149,119,105,229,221,90,121,143,86,222,171,149,
    247,105,229,253,90,249,128,86,62,168,149,15,105,229,188,86,
    126,72,43,63,172,149,31,209,202,135,181,242,17,173,252,168,
    86,62,170,149,39,180,242,99,90,249,152,86,126,92,43,191,
    75,43,31,215,202,39,180,242,164,86,62,169,149,159,208,202,
    79,82,121,179,144,91,68,229,148,168,60,37,42,167,197,146,
    33,236,113,52,25,56,210,205,133,167,133,204,136,202,25,177,
    112,70,72,248,247,180,184,103,8,195,222,162,181,120,134,90,
    108,141,91,60,75,45,158,19,11,207,9,9,255,158,13,91,
    108,16,197,137,29,224,238,206,191,225,207,132,1,37,53,10,
    226,150,244,3,199,115,75,142,187,228,57,41,172,31,70,129,
    1,98,161,72,71,145,50,133,145,82,23,20,38,48,119,136,
    148,187,208,131,33,42,16,4,41,28,193,78,139,61,119,13,
    252,80,73,139,85,40,100,196,18,85,84,50,17,227,46,248,
    255,22,177,42,68,101,72,172,18,82,188,238,238,19,25,149,
    37,23,95,65,23,15,107,161,45,214,222,128,129,138,19,56,
    250,44,205,90,225,172,79,208,220,212,22,16,165,186,233,155,
    181,210,180,244,157,91,87,78,77,205,93,155,192,185,171,28,
    46,160,86,247,124,85,117,22,213,6,36,150,92,179,38,75,
    37,53,2,31,124,104,165,28,5,139,86,25,248,88,241,28,
    23,102,0,75,10,148,239,212,213,88,220,186,84,243,236,70,
    85,170,141,128,204,16,114,209,247,61,127,2,85,82,64,161,
    80,212,87,150,21,78,177,134,67,76,224,220,72,4,87,64,
    76,150,189,154,156,244,77,171,236,216,147,211,158,213,168,73,
    87,5,147,203,178,118,250,184,124,98,114,177,225,84,237,201,
    27,207,60,61,89,111,170,178,231,78,214,78,79,194,100,164,
    239,154,213,201,206,181,157,0,206,86,236,248,182,179,92,138,
    38,88,150,213,186,244,113,189,193,38,28,212,24,53,182,25,
    7,141,180,177,197,24,51,156,44,219,112,88,183,225,59,145,
    13,83,81,182,3,51,26,145,77,83,226,46,21,208,80,19,
    104,67,52,93,26,45,6,43,4,131,44,27,226,94,74,124,
    48,141,132,187,32,51,144,162,14,198,246,171,80,138,10,123,
    26,22,119,193,198,67,96,194,87,246,83,71,27,168,163,148,
    88,5,9,198,205,136,187,144,3,129,9,16,200,149,156,240,
    223,198,114,37,135,46,108,184,66,220,88,205,130,237,51,177,
    237,67,143,197,149,216,142,143,170,46,160,179,78,140,48,234,
    5,39,234,166,42,23,198,216,46,160,34,178,239,172,231,134,
    38,92,114,92,155,77,26,58,197,146,83,5,167,40,160,254,
    168,55,162,85,61,51,166,161,210,172,170,23,72,114,44,234,
    187,176,25,137,200,94,170,83,55,56,42,206,135,26,219,50,
    176,208,137,192,185,194,30,113,6,216,219,250,58,70,1,35,
    121,59,118,190,151,220,96,28,28,33,11,110,48,1,110,48,
    106,12,65,105,127,106,212,216,100,204,58,168,69,11,151,133,
    206,145,97,159,248,133,8,45,97,136,149,148,240,247,83,140,
    194,63,3,205,133,129,184,74,65,142,117,87,113,237,33,10,
    97,14,54,13,193,85,242,18,112,23,96,158,197,168,5,11,
    162,217,135,68,37,27,217,24,60,39,244,9,191,137,18,232,
    216,77,10,58,207,136,224,45,1,186,4,227,175,138,200,73,
    238,165,193,11,198,5,4,44,228,2,64,119,194,128,175,146,
    111,69,9,129,140,174,202,78,224,221,14,227,24,203,148,209,
    138,16,32,115,205,43,139,21,105,169,224,16,0,55,189,70,
    222,50,93,215,83,121,211,182,243,166,130,56,95,108,40,25,
    228,149,151,63,18,76,160,225,10,123,217,111,226,254,154,117,
    89,160,66,232,44,182,99,41,200,32,219,232,3,5,97,32,
    21,152,189,236,217,1,224,216,116,89,170,194,56,182,64,229,
    122,52,1,242,138,18,82,113,88,224,97,156,158,231,25,132,
    249,36,203,142,18,200,234,18,165,40,171,106,6,65,9,103,
    64,56,185,23,174,250,150,89,109,72,234,61,128,254,96,66,
    88,12,231,176,206,153,103,55,46,131,87,77,75,113,61,215,
    110,194,204,28,235,20,14,186,59,202,63,232,122,59,192,237,
    134,65,102,225,119,214,216,153,178,50,145,179,101,217,225,118,
    226,146,5,153,219,136,44,14,206,119,15,18,198,68,138,66,
    158,86,131,206,90,56,134,37,108,92,56,140,226,8,138,71,
    81,28,229,5,175,223,170,199,58,87,77,147,79,209,82,173,
    116,180,168,56,138,94,110,139,162,61,173,40,130,148,86,92,
    165,173,178,146,214,162,33,141,203,246,207,69,193,131,113,6,
    70,134,56,67,42,69,13,236,159,186,223,227,128,179,133,61,
    56,212,67,32,142,30,9,142,230,67,47,203,151,205,32,239,
    122,45,215,206,99,101,152,180,208,177,11,251,81,223,154,235,
    46,107,174,91,200,35,3,253,182,240,8,138,76,47,133,63,
    246,32,21,190,28,42,252,125,56,210,104,228,91,99,228,83,
    35,134,133,142,129,86,136,55,181,171,32,154,187,80,245,186,
    210,119,193,118,118,221,221,11,59,20,105,30,55,169,83,180,
    73,209,70,71,39,104,206,91,149,33,46,100,81,255,75,105,
    177,51,218,125,2,220,30,234,190,119,167,153,247,150,242,74,
    240,132,206,30,9,78,28,9,158,135,4,146,63,215,210,116,
    148,44,124,89,199,96,15,131,31,181,160,28,23,62,99,87,
    23,239,88,146,54,8,250,84,42,133,177,30,30,77,74,209,
    198,3,70,33,43,164,216,10,148,237,224,124,130,73,110,157,
    77,48,18,155,0,23,49,135,195,140,144,254,211,198,46,136,
    110,77,251,248,131,62,25,160,99,125,90,208,41,212,16,175,
    11,84,46,232,48,10,101,138,19,142,21,100,6,31,22,20,
    246,9,187,77,120,40,196,29,134,24,16,36,193,25,162,134,
    155,207,139,226,13,45,103,240,22,145,142,206,40,122,168,100,
    226,80,33,171,12,180,13,100,218,163,5,53,14,97,133,52,
    138,139,240,216,119,184,61,253,208,161,132,116,32,213,250,153,
    100,67,56,64,9,231,114,179,101,16,76,182,251,140,109,169,
    208,33,200,87,206,160,120,38,142,83,131,177,117,153,214,161,
    206,236,168,237,9,165,48,189,220,192,177,51,52,219,205,195,
    228,90,173,46,232,104,42,162,40,190,128,196,39,65,72,184,
    169,26,116,181,22,120,161,1,39,65,153,66,27,223,75,25,
    112,193,134,243,192,125,186,96,135,23,233,66,120,30,32,167,
    228,31,74,9,152,74,218,50,48,105,99,54,212,83,108,230,
    208,130,40,238,172,115,92,161,17,207,86,205,218,162,109,158,
    123,29,7,193,145,44,142,163,20,79,123,92,159,54,198,128,
    209,107,230,244,241,121,158,254,173,117,62,97,158,133,62,227,
    105,147,203,219,158,69,145,63,95,150,249,154,172,45,194,69,
    178,236,212,243,75,85,115,153,172,145,142,150,117,133,151,165,
    200,156,90,148,82,126,8,112,131,159,245,242,150,231,66,130,
    107,88,202,243,243,182,132,195,186,180,243,199,243,148,29,243,
    78,144,55,23,161,214,180,84,232,211,237,1,73,135,36,211,
    95,14,232,60,180,114,27,139,15,192,154,37,184,52,59,112,
    38,124,67,196,135,130,112,35,160,76,130,167,34,58,237,133,
    33,2,59,8,92,213,84,51,76,74,231,81,156,70,49,41,
    244,77,117,253,236,247,28,244,249,26,118,142,42,202,26,251,
    82,185,148,26,111,139,199,57,108,21,116,71,229,191,50,3,
    68,165,204,136,133,33,142,205,44,50,229,48,222,250,80,230,
    48,145,47,140,48,184,145,228,40,129,99,12,110,34,185,153,
    192,113,6,183,144,220,74,224,54,6,183,147,220,65,224,78,
    6,119,145,220,77,224,30,6,247,146,220,71,224,126,6,15,
    144,60,72,224,33,6,243,36,31,34,240,97,6,31,33,121,
    152,192,35,12,62,74,242,40,129,19,12,62,70,242,24,129,
    143,51,248,46,146,199,9,60,193,224,36,201,147,4,62,193,
    224,147,36,79,17,248,20,131,167,73,62,77,224,25,6,159,
    33,249,44,129,207,49,248,60,201,179,4,190,155,193,115,36,
    223,67,224,123,25,60,79,242,2,129,83,12,78,147,188,72,
    224,37,6,223,71,242,5,2,103,24,124,145,228,251,9,188,
    204,224,75,36,103,9,188,194,224,28,201,171,4,22,24,44,
    146,156,39,240,26,131,31,32,121,157,192,27,12,222,36,185,
    64,224,203,12,126,144,228,135,8,252,48,131,37,146,31,33,
    208,100,112,145,164,69,160,205,160,36,185,68,224,50,131,101,
    146,14,129,21,6,87,72,86,9,172,49,232,146,244,8,172,
    51,248,81,146,62,129,1,131,138,100,131,192,91,12,222,38,
    121,135,192,38,131,175,144,252,24,129,171,12,222,37,249,113,
    2,63,193,224,39,73,126,138,192,87,25,188,71,242,62,129,
    175,49,248,58,201,79,19,248,6,131,159,33,249,89,2,63,
    199,224,231,73,126,129,192,47,50,248,37,146,95,38,240,43,
    12,190,73,242,171,4,126,141,193,183,72,126,157,192,111,48,
    248,77,146,223,34,240,219,12,126,135,228,119,9,252,30,131,
    223,39,249,3,2,127,200,224,143,72,254,152,192,183,25,252,
    9,201,159,18,248,51,6,127,78,242,29,2,127,193,224,47,
    73,254,138,192,95,51,248,27,146,191,37,240,119,12,254,158,
    228,31,8,252,35,63,223,255,19,129,127,22,11,127,17,118,
    150,144,191,226,233,98,248,127,61,93,208,30,253,0,118,231,
    47,253,95,15,21,133,119,63,224,89,23,206,137,232,42,209,
    235,64,97,232,75,26,11,15,20,21,131,239,206,250,122,232,
    209,219,174,132,221,173,100,249,210,84,50,180,203,225,117,95,
    33,157,71,194,33,223,108,29,18,186,175,175,211,241,98,238,
    209,237,169,185,157,204,197,143,210,241,249,61,125,25,164,232,
    162,138,247,216,247,208,195,114,90,124,41,21,94,101,91,78,
    152,141,117,128,207,4,93,121,187,212,169,135,240,174,138,60,
    179,94,151,174,93,56,137,77,158,16,250,157,147,56,235,236,
    1,120,14,250,187,208,110,52,105,99,59,220,106,186,227,13,
    143,84,218,10,201,126,227,113,132,173,191,37,201,87,255,193,
    190,58,241,55,161,31,243,10,120,78,10,15,118,241,153,174,
    112,49,54,194,129,36,71,188,124,169,56,95,116,94,145,248,
    160,163,15,3,110,87,116,222,100,64,29,76,164,95,189,232,
    194,141,86,6,212,99,31,10,118,137,143,31,98,68,61,156,
    216,160,120,117,170,44,173,149,203,158,105,135,253,14,64,195,
    190,49,58,219,80,117,164,71,195,105,89,39,86,177,236,44,
    41,26,98,48,38,142,50,30,142,210,86,145,188,242,98,127,
    229,20,187,148,19,35,201,246,41,22,103,250,88,48,102,176,
    5,25,72,166,195,237,198,185,229,168,102,239,14,99,6,119,
    200,128,202,39,209,23,77,107,101,202,171,197,147,236,75,194,
    110,241,153,149,134,209,45,191,187,145,111,186,86,121,206,151,
    54,117,220,143,131,253,98,132,183,160,228,38,22,132,171,156,
    243,124,21,244,238,86,227,112,183,45,136,30,194,116,55,241,
    106,53,71,205,123,211,210,242,108,57,45,171,102,168,227,129,
    201,56,16,238,76,9,117,234,232,90,157,92,146,202,42,183,
    6,28,148,139,227,109,213,198,107,85,37,71,7,243,102,46,
    94,111,13,54,24,147,227,168,179,98,109,229,20,36,126,39,
    49,160,38,117,114,167,38,181,186,100,247,12,137,215,29,91,
    149,123,251,176,78,98,31,214,176,100,189,219,100,196,193,108,
    148,192,101,27,117,87,37,107,131,121,3,169,46,137,204,170,
    75,168,75,214,74,72,236,163,58,157,196,170,211,176,228,132,
    111,59,65,221,132,229,182,250,30,128,198,251,66,27,170,14,
    39,53,92,66,93,94,104,44,45,73,63,78,94,3,17,113,
    12,252,130,182,3,87,143,244,108,124,181,33,27,50,30,100,
    16,30,142,177,137,199,136,225,100,191,33,78,119,226,25,148,
    203,62,214,93,149,28,221,33,207,55,235,151,225,196,233,90,
    107,228,129,46,38,231,129,206,138,228,36,76,172,150,245,251,
    113,56,81,183,160,30,154,246,252,219,166,111,235,123,214,32,
    188,216,34,109,176,218,151,216,180,49,231,121,85,234,122,173,
    122,236,18,143,199,225,199,100,29,58,242,246,188,55,69,105,
    166,79,214,237,98,178,182,59,43,214,104,222,233,67,131,49,
    219,6,210,253,39,49,156,136,213,145,15,7,34,114,220,117,
    224,107,76,178,51,13,14,198,108,91,142,158,0,19,179,168,
    19,4,13,72,148,23,239,72,171,161,250,165,220,36,50,167,
    220,132,186,100,159,39,98,159,184,208,56,28,23,45,40,249,
    220,231,74,105,7,243,197,43,189,79,134,49,131,79,134,12,
    168,135,18,233,141,218,76,219,145,184,63,11,59,198,239,61,
    117,48,57,237,3,99,174,220,12,166,166,10,114,121,141,91,
    67,59,141,119,135,54,52,217,43,34,202,165,170,103,170,120,
    136,193,152,236,63,157,21,201,105,38,98,205,184,173,97,6,
    225,113,58,106,135,123,42,161,112,229,130,110,137,1,104,154,
    174,90,168,218,223,171,161,183,24,246,188,38,1,251,28,142,
    250,132,207,201,49,226,83,196,13,120,144,78,34,115,64,37,
    212,37,111,138,76,28,228,144,150,192,229,13,180,187,42,217,
    97,152,215,255,32,221,197,100,215,234,172,88,187,57,216,111,
    192,129,98,102,231,64,92,145,124,190,11,89,125,14,129,58,
    137,15,129,26,150,188,7,4,53,21,238,92,115,94,213,177,
    214,216,44,58,137,188,89,116,224,201,177,5,36,50,154,54,
    200,32,60,142,193,118,56,121,245,192,153,185,170,245,223,151,
    196,42,210,176,158,147,154,185,58,95,246,101,80,246,170,246,
    154,147,215,121,218,228,53,56,57,71,3,231,114,81,159,125,
    127,22,103,114,29,236,105,57,96,180,47,96,32,162,102,98,
    29,87,199,122,52,158,109,212,200,76,142,187,140,100,126,218,
    244,95,208,113,196,29,225,136,221,181,61,149,2,177,51,128,
    234,90,44,77,117,49,216,83,35,192,24,76,117,109,68,77,
    117,58,222,195,43,63,218,48,131,114,159,232,214,73,177,235,
    182,48,245,120,98,35,229,249,116,178,46,89,85,105,250,165,
    58,16,188,112,25,255,13,31,199,195,151,253,146,171,147,231,
    171,58,46,48,125,73,188,40,13,75,222,236,110,47,182,84,
    181,38,129,119,195,232,51,61,167,166,47,20,108,89,149,74,
    118,61,79,167,132,28,189,91,103,195,94,236,123,205,82,137,
    122,40,193,231,106,169,244,32,190,226,199,7,229,95,196,206,
    63,46,232,43,126,35,155,202,165,118,24,15,248,111,42,151,
    205,25,244,110,70,199,127,39,208,176,108,140,209,251,43,244,
    2,85,51,40,32,162,240,49,122,244,202,4,45,187,164,255,
    15,5,122,209,57,124,170,78,239,94,243,75,21,248,0,158,
    158,217,206,194,158,69,111,213,82,125,244,230,93,16,126,189,
    65,239,121,99,74,41,160,7,23,142,11,126,94,255,44,182,
    198,224,175,157,62,193,26,62,17,106,248,66,252,196,210,193,
    55,83,232,197,239,218,105,186,58,118,147,139,78,45,124,237,
    152,254,119,130,94,111,251,38,148,119,116,160,1,152,207,172,
    226,85,117,119,98,127,151,174,209,229,115,79,71,229,165,107,
    211,50,176,64,47,52,163,94,77,145,211,213,244,74,189,127,
    211,144,211,85,41,225,100,8,117,83,248,66,78,87,191,145,
    178,204,64,130,47,246,232,23,60,121,254,242,5,74,130,137,
    149,115,38,190,243,185,88,149,215,205,234,138,236,53,187,98,
    51,80,178,214,101,0,154,221,75,178,230,249,205,151,224,68,
    73,209,173,215,159,183,109,191,96,186,203,146,215,222,105,238,
    243,209,251,69,97,31,204,202,39,206,161,157,219,195,25,160,
    50,114,134,67,137,245,83,85,207,90,145,118,196,57,208,155,
    51,237,213,208,121,58,87,20,59,27,207,245,96,98,23,243,
    101,233,215,204,42,42,165,219,147,90,102,67,203,116,206,19,
    108,114,217,179,204,234,249,186,99,173,61,136,206,236,161,51,
    24,196,177,230,28,56,241,223,114,44,217,67,103,173,250,206,
    153,194,8,51,197,243,107,59,110,200,81,123,59,42,167,188,
    6,22,185,109,167,30,195,182,51,110,160,230,193,166,224,119,
    157,237,231,124,207,146,65,192,237,147,117,24,145,40,235,112,
    21,221,209,218,35,3,147,97,84,166,55,178,58,190,164,166,
    188,231,203,101,7,124,220,167,230,17,57,220,101,40,195,39,
    223,255,245,134,15,96,175,9,223,102,12,95,86,62,55,204,
    123,14,190,251,159,219,144,51,178,248,123,51,252,78,141,26,
    233,84,218,24,49,198,140,12,252,30,135,223,227,169,209,241,
    92,38,151,3,222,198,81,227,127,255,123,8,118,155,145,212,
    161,23,114,198,127,0,151,109,92,144,
};

EmbeddedPython embedded_m5_internal_param_DerivO3CPU(
    "m5/internal/param_DerivO3CPU.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_DerivO3CPU.py",
    "m5.internal.param_DerivO3CPU",
    data_m5_internal_param_DerivO3CPU,
    4058,
    14809);

} // anonymous namespace
