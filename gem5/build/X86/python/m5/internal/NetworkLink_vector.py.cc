#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_NetworkLink_vector[] = {
    120,156,205,92,127,104,36,87,29,255,190,217,205,38,155,31,
    151,205,229,215,93,114,63,246,218,187,94,90,237,165,165,158,
    173,237,121,218,246,106,105,213,180,157,40,119,77,213,97,50,
    243,146,204,102,119,102,59,51,185,187,173,137,162,57,173,63,
    81,145,42,254,64,68,69,171,8,130,40,8,130,32,8,130,
    32,8,130,32,8,130,34,8,130,224,127,130,160,126,191,223,
    55,111,119,54,217,149,222,237,237,196,75,242,205,203,204,219,
    247,125,159,247,253,241,190,223,239,188,57,7,146,127,3,248,
    243,86,252,137,118,5,128,139,223,2,170,0,53,1,43,6,
    8,105,128,59,9,155,3,16,190,1,220,1,184,1,176,146,
    3,153,131,93,108,228,225,133,28,248,247,1,245,153,226,62,
    87,192,29,236,212,103,148,199,29,130,106,158,175,24,208,24,
    6,57,0,43,5,184,236,79,64,94,14,194,230,48,132,55,
    64,8,225,11,184,210,40,233,254,67,176,82,196,62,199,177,
    207,48,247,249,17,245,73,110,22,233,38,245,119,139,224,14,
    195,13,156,241,8,184,35,60,1,228,56,202,141,49,112,199,
    184,113,8,220,67,220,24,7,119,28,100,9,214,4,184,37,
    186,130,243,124,126,101,2,100,30,42,135,97,229,48,72,252,
    158,0,92,13,205,104,18,86,166,244,140,166,83,237,153,84,
    123,54,213,62,146,106,31,229,246,132,102,120,184,201,112,142,
    25,206,195,202,60,72,252,158,83,12,135,96,121,97,26,133,
    225,253,7,255,45,160,64,32,30,69,114,85,134,145,23,248,
    150,231,175,5,158,65,247,7,137,144,248,28,34,185,68,142,
    143,147,28,235,192,66,196,9,160,28,119,112,4,1,21,20,
    145,65,28,220,28,28,221,17,244,71,37,7,219,216,200,195,
    26,223,168,228,147,30,59,40,157,9,216,6,168,12,192,54,
    95,89,190,236,207,67,62,46,176,0,54,73,0,234,46,126,
    150,238,94,65,70,203,11,196,125,137,103,29,211,172,207,241,
    220,226,73,36,214,146,140,175,5,225,230,59,60,127,211,186,
    42,157,56,8,23,104,246,113,145,32,212,234,65,24,87,189,
    213,120,136,186,90,190,93,147,150,21,15,227,31,97,221,14,
    99,47,70,216,113,30,255,172,4,158,143,115,64,80,81,28,
    122,245,120,172,249,105,171,22,184,91,85,25,143,224,149,167,
    248,202,19,97,136,76,104,81,76,34,49,145,250,230,122,76,
    147,172,17,139,5,154,29,147,232,57,36,139,27,65,77,46,
    134,182,179,225,185,139,151,2,103,171,38,253,56,90,92,151,
    181,243,247,202,251,23,87,183,188,170,187,120,229,161,55,46,
    214,27,241,70,224,47,214,206,47,226,100,100,232,219,213,197,
    253,232,206,97,175,195,52,244,53,111,221,74,166,184,33,171,
    117,25,18,226,232,16,177,21,163,98,82,156,16,57,49,33,
    198,132,87,208,114,28,76,203,241,213,68,142,70,98,143,40,
    74,145,200,213,128,29,110,144,176,22,72,142,36,190,28,73,
    13,49,162,80,214,5,236,26,240,158,28,117,216,65,154,71,
    35,58,209,148,97,133,141,72,141,52,8,59,40,231,1,20,
    227,75,199,120,160,33,30,200,128,109,164,40,224,60,236,160,
    149,98,79,188,132,116,179,8,225,55,169,93,41,146,26,11,
    31,224,202,118,1,229,159,111,202,95,105,45,33,113,189,144,
    22,219,36,133,93,24,214,87,131,232,92,221,142,55,204,49,
    45,25,92,34,150,240,82,224,43,33,174,121,190,171,133,170,
    212,98,205,171,162,90,152,180,126,60,26,119,171,6,118,179,
    27,45,154,83,13,34,201,170,197,99,155,227,212,145,122,175,
    213,121,24,226,74,243,225,15,187,50,114,72,141,80,189,212,
    136,52,3,26,173,223,170,97,146,61,79,209,240,115,172,8,
    37,84,133,2,42,194,2,42,194,168,24,192,214,49,99,84,
    28,18,75,30,173,163,67,192,72,61,242,90,43,190,11,74,
    22,2,54,13,8,143,177,165,226,183,32,129,145,57,110,179,
    169,211,189,231,8,189,186,138,198,142,82,85,23,183,89,79,
    80,97,176,231,5,178,93,148,33,9,126,0,42,133,68,202,
    168,59,74,43,194,6,81,236,78,195,24,56,120,30,162,87,
    0,87,19,197,191,13,137,154,236,230,80,15,74,128,70,139,
    30,1,175,206,32,195,15,179,118,37,110,129,197,30,111,120,
    81,112,77,217,50,181,217,175,45,163,137,60,219,120,102,181,
    130,171,19,157,196,11,207,7,91,101,199,246,253,32,46,219,
    174,91,182,99,180,245,213,173,88,70,229,56,40,159,137,22,
    72,116,230,156,214,156,230,120,141,186,52,185,161,212,197,245,
    156,24,189,8,123,31,139,205,48,146,49,10,126,35,112,35,
    188,78,31,93,151,177,89,162,79,208,226,6,60,1,214,11,
    139,186,18,91,236,71,150,250,168,158,129,242,41,5,173,42,
    145,172,174,177,155,114,170,118,20,89,52,3,190,206,10,70,
    168,175,218,213,45,201,163,71,56,30,78,136,154,106,14,125,
    247,62,71,8,136,198,205,96,252,192,119,27,56,55,207,121,
    128,216,30,73,124,16,41,223,52,42,222,32,210,2,254,46,
    136,25,195,201,39,234,86,208,42,55,67,160,129,5,46,18,
    153,163,250,237,162,211,88,48,216,236,25,15,169,171,121,15,
    181,232,195,230,105,34,103,136,220,69,228,172,134,220,79,220,
    99,123,113,243,244,13,6,235,228,18,88,77,75,122,161,205,
    146,142,182,44,9,29,219,242,54,111,154,149,92,202,34,114,
    4,60,188,152,24,16,217,26,10,26,109,141,186,178,229,224,
    78,154,214,125,98,184,100,30,37,86,167,144,156,61,19,157,
    45,43,77,43,111,216,81,217,15,90,234,93,166,155,202,117,
    145,114,155,199,64,111,158,10,206,122,74,125,205,50,245,32,
    221,53,239,36,146,239,182,228,119,103,187,228,235,106,201,159,
    36,94,163,137,126,141,177,94,13,11,135,148,131,228,208,220,
    220,104,54,141,89,90,252,244,178,207,226,182,118,217,159,195,
    157,138,215,158,54,171,7,120,179,226,13,143,99,61,237,189,
    42,3,186,81,32,9,172,229,96,38,217,133,34,218,38,234,
    97,112,189,81,14,214,202,49,232,9,93,56,19,157,59,19,
    61,130,110,164,124,177,181,214,137,203,8,101,157,76,94,185,
    0,90,135,216,243,241,111,26,234,137,235,142,228,141,130,255,
    178,44,101,241,42,72,177,146,13,8,197,194,114,48,180,28,
    216,231,97,164,66,174,174,239,66,24,110,10,129,96,60,75,
    140,134,89,2,57,49,139,54,158,90,127,250,33,189,140,72,
    185,94,6,142,73,5,124,20,104,121,113,21,19,131,102,91,
    209,246,66,61,163,247,1,27,127,135,93,71,133,136,180,211,
    112,15,52,148,232,65,238,170,54,161,167,225,99,41,207,161,
    183,138,92,18,173,164,205,37,223,52,23,150,203,107,218,14,
    242,237,22,67,107,142,166,69,221,216,54,84,8,120,186,221,
    9,113,120,194,107,32,227,126,10,101,72,177,176,104,54,207,
    183,68,66,78,119,94,76,26,74,41,88,95,30,36,242,80,
    211,90,133,190,214,167,137,157,220,235,37,83,187,131,165,220,
    204,21,226,158,231,249,142,15,242,62,168,118,234,167,112,96,
    27,135,225,96,21,18,123,126,140,58,255,25,137,196,236,74,
    112,58,8,148,230,160,178,16,53,72,214,187,134,192,164,16,
    227,131,27,156,20,170,228,15,243,190,10,103,120,73,102,137,
    1,68,129,27,35,148,71,98,46,68,41,221,40,183,139,220,
    30,227,60,79,37,115,35,58,153,83,121,94,73,231,121,19,
    58,207,59,76,121,30,53,38,147,60,79,37,98,212,152,78,
    18,177,149,25,202,110,169,49,75,41,44,53,142,128,59,205,
    141,163,224,206,112,99,14,220,89,110,204,131,185,188,64,59,
    39,91,147,254,97,111,70,94,176,109,251,96,33,46,41,241,
    54,245,83,169,30,145,235,125,119,9,164,125,23,170,118,109,
    213,181,47,186,196,134,120,57,218,5,24,122,226,165,244,196,
    201,124,69,183,185,243,159,143,104,0,87,251,30,38,95,0,
    174,70,168,137,179,189,186,129,195,110,235,93,27,178,92,147,
    181,85,204,137,55,188,122,121,173,106,175,179,68,114,9,176,
    103,52,176,152,117,48,229,98,216,185,69,20,163,44,5,101,
    39,240,209,63,111,17,191,178,43,49,231,144,110,249,222,50,
    59,247,178,23,149,237,85,188,107,59,177,50,199,118,111,194,
    145,158,29,174,71,28,212,109,94,163,102,38,18,181,44,207,
    247,48,180,93,131,86,92,179,79,25,243,106,229,180,28,121,
    254,165,166,99,57,13,253,143,10,88,120,149,166,214,233,217,
    53,181,110,76,9,167,34,116,32,149,86,57,206,198,166,246,
    185,28,139,3,234,12,49,208,102,81,109,173,179,74,199,210,
    123,104,211,128,154,80,212,254,183,31,205,228,126,52,158,239,
    132,169,104,129,62,225,247,93,133,72,51,136,113,144,82,159,
    219,134,200,149,105,68,230,165,12,100,196,128,136,111,216,51,
    160,217,14,128,48,73,181,125,71,166,64,61,146,5,40,50,
    116,205,123,171,103,96,29,44,73,190,184,101,87,179,70,69,
    145,2,51,190,222,193,119,221,132,103,232,160,121,78,80,111,
    100,231,24,88,233,136,229,251,111,59,16,95,94,143,51,6,
    66,44,63,208,27,144,14,166,99,49,20,203,202,16,76,82,
    63,102,182,31,186,237,128,234,161,188,234,5,91,81,198,128,
    52,219,27,61,187,129,153,253,152,108,247,234,30,247,150,137,
    207,166,36,45,97,253,114,207,176,166,59,233,158,124,17,53,
    47,99,247,86,96,245,35,206,159,232,15,40,95,30,20,40,
    226,252,233,158,65,117,244,18,30,102,245,109,176,50,209,192,
    36,146,102,222,159,237,19,176,104,107,245,192,128,49,239,207,
    247,195,101,88,214,129,8,108,144,113,49,235,47,64,187,107,
    215,176,158,236,4,235,83,157,188,123,71,88,123,197,245,150,
    236,96,49,235,47,193,254,29,171,45,161,219,110,37,116,60,
    173,172,55,86,15,251,88,214,87,90,211,92,160,170,0,23,
    61,77,122,164,192,69,34,85,85,170,135,65,93,134,113,67,
    213,242,30,37,114,158,200,98,155,131,115,101,85,198,210,106,
    151,68,92,130,102,205,219,149,152,128,7,13,203,74,214,9,
    63,96,89,156,149,153,79,16,33,137,155,79,17,121,59,145,
    119,18,161,212,223,164,101,48,151,137,188,155,200,101,34,84,
    128,51,169,224,111,190,151,136,69,196,38,178,218,182,132,253,
    204,39,31,6,245,144,55,122,61,146,130,152,55,138,70,65,
    20,69,209,40,230,70,241,171,216,237,203,224,135,201,106,156,
    244,179,244,253,53,56,87,188,134,26,156,204,195,202,128,174,
    196,21,116,233,109,80,151,222,134,244,17,142,34,23,224,84,
    85,174,168,171,114,195,250,112,197,136,62,92,49,170,235,113,
    99,186,30,119,72,215,227,198,117,61,174,164,235,113,19,186,
    30,119,88,215,227,38,117,61,110,74,215,227,166,117,61,110,
    70,215,227,102,117,61,238,136,174,199,29,77,234,113,238,28,
    55,142,129,59,207,141,227,224,30,227,198,9,112,143,115,227,
    36,184,39,184,81,6,247,36,55,78,129,91,230,198,29,224,
    158,226,198,157,224,222,193,141,211,224,222,201,141,51,224,158,
    230,198,93,32,207,66,101,1,86,238,6,247,12,95,185,135,
    138,128,84,76,238,169,8,152,201,246,205,85,152,239,192,237,
    172,253,153,111,206,124,222,230,69,72,30,87,116,171,251,221,
    100,116,63,223,209,154,216,193,145,11,202,216,179,106,182,223,
    131,255,177,1,12,55,37,181,187,167,174,231,65,150,123,1,
    123,203,239,119,152,233,77,44,255,137,206,203,111,209,67,136,
    151,100,24,100,154,52,170,199,125,77,206,63,232,13,90,23,
    205,178,172,213,32,168,30,64,50,172,216,254,176,55,80,115,
    221,64,85,165,159,41,38,21,5,48,215,31,167,32,165,31,
    85,62,174,93,69,58,8,84,143,29,247,3,59,217,13,216,
    186,140,163,170,231,80,190,213,170,248,11,182,85,162,149,190,
    35,29,101,164,173,105,252,100,143,4,111,62,230,237,138,53,
    106,97,205,56,248,85,32,91,252,127,218,87,153,98,240,184,
    79,166,230,139,68,194,236,192,182,38,241,179,158,37,218,213,
    141,34,19,220,83,106,217,11,116,68,99,84,236,127,222,63,
    136,104,25,7,9,177,201,254,23,253,131,24,29,44,196,38,
    251,95,66,79,155,199,76,103,124,245,160,158,225,198,193,167,
    127,131,250,175,82,80,110,173,32,114,180,51,26,187,94,151,
    190,123,16,181,57,197,249,215,189,201,232,72,103,84,178,86,
    143,179,124,170,194,207,135,136,231,111,122,131,51,219,25,78,
    228,189,148,225,195,99,117,68,20,89,254,182,103,165,235,134,
    231,154,93,79,169,92,22,121,153,2,133,124,127,215,23,133,
    91,149,235,158,159,177,194,49,207,223,247,197,199,145,75,200,
    214,199,33,199,63,244,6,165,139,131,11,179,22,13,249,54,
    197,244,143,125,113,6,97,182,194,33,187,33,150,127,234,139,
    221,56,85,105,103,89,181,80,175,90,32,207,191,244,6,167,
    220,25,206,58,29,153,172,86,3,39,227,98,12,77,184,141,
    247,95,123,131,215,165,24,128,129,136,181,106,59,155,89,63,
    72,78,216,254,109,15,168,155,15,89,187,133,11,161,29,201,
    172,131,85,142,25,136,241,223,247,192,210,239,195,49,172,39,
    91,176,16,147,122,105,106,138,235,105,250,128,63,189,122,199,
    111,25,198,124,174,156,142,157,63,198,239,185,241,169,102,203,
    80,39,207,91,165,183,2,164,157,191,47,175,89,251,87,68,
    149,79,233,36,130,121,31,145,251,161,237,60,50,173,15,119,
    233,123,205,142,30,192,252,3,64,159,63,30,23,57,49,37,
    74,183,26,142,28,235,162,214,91,209,134,210,235,140,195,96,
    62,235,175,153,255,179,55,147,237,162,218,107,97,224,103,121,
    44,135,20,151,121,254,171,55,56,93,54,191,140,189,15,109,
    126,196,242,223,41,48,183,92,223,233,150,129,69,145,183,238,
    167,172,235,82,102,250,199,105,24,179,23,162,87,215,218,45,
    252,146,156,188,100,236,91,57,6,99,206,249,126,1,243,252,
    72,134,241,65,0,83,156,7,83,192,110,205,27,118,41,142,
    227,186,201,240,234,129,156,172,74,88,15,139,126,4,47,142,
    93,183,29,47,211,178,0,5,47,154,237,88,7,80,109,135,
    36,254,15,78,189,151,68,242,220,114,225,117,144,62,31,97,
    210,227,122,117,34,162,117,24,130,158,222,241,51,53,115,147,
    72,141,8,157,205,54,105,4,147,206,254,154,215,136,52,136,
    208,113,83,115,135,200,7,65,71,22,187,68,62,66,132,142,
    210,153,31,39,242,73,34,116,94,203,252,12,145,207,17,161,
    195,64,230,43,68,190,72,132,207,100,124,153,200,87,137,124,
    141,200,215,137,124,131,200,183,136,124,155,200,171,109,22,156,
    156,216,232,16,234,72,234,183,214,182,196,253,92,231,117,28,
    149,230,23,61,13,124,146,66,20,12,58,69,113,83,95,131,
    123,79,89,20,5,239,31,123,254,119,133,212,181,66,243,26,
    191,107,198,111,144,53,34,19,244,242,36,135,95,24,132,149,
    254,15,27,248,141,111,181,140,234,76,103,114,60,134,52,130,
    227,151,37,187,166,94,47,230,251,201,203,135,145,10,27,249,
    149,119,122,99,197,100,125,186,183,169,64,111,34,114,138,200,
    195,218,98,247,156,106,162,249,132,152,68,71,120,33,62,142,
    247,107,231,207,233,149,61,87,183,67,187,150,22,34,191,41,
    95,59,207,143,80,246,119,124,28,147,162,77,233,170,55,181,
    187,12,198,125,46,5,53,27,175,207,119,236,177,236,213,146,
    17,38,246,220,119,67,250,212,244,158,171,232,202,60,187,138,
    91,16,139,188,219,211,157,52,206,76,20,80,189,92,165,94,
    252,188,200,239,121,190,141,45,127,84,20,135,138,162,64,191,
    199,241,183,49,42,114,70,78,12,139,49,145,199,223,37,252,
    93,50,70,75,197,124,177,136,253,70,102,30,46,138,97,236,
    211,250,154,217,44,138,255,2,141,49,214,223,
};

EmbeddedPython embedded_m5_internal_NetworkLink_vector(
    "m5/internal/NetworkLink_vector.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/NetworkLink_vector.py",
    "m5.internal.NetworkLink_vector",
    data_m5_internal_NetworkLink_vector,
    3612,
    17815);

} // anonymous namespace