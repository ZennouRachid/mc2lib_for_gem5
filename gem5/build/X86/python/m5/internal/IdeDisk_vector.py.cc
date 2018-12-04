#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_IdeDisk_vector[] = {
    120,156,197,92,127,136,28,87,29,255,190,217,189,189,219,251,
    145,236,229,126,37,119,105,179,105,147,230,90,109,174,165,198,
    214,54,70,219,166,150,84,76,219,57,37,233,85,29,230,102,
    222,221,205,222,238,204,118,102,46,201,213,59,69,47,90,127,
    162,34,85,252,129,136,138,86,17,4,81,16,4,65,16,4,
    65,16,4,65,16,4,69,16,4,193,255,4,65,253,126,191,
    111,222,238,236,238,68,154,236,237,36,119,247,189,119,51,111,
    223,247,251,121,223,31,239,125,191,243,38,14,36,255,134,240,
    231,237,248,19,237,9,0,23,191,5,212,1,26,2,86,12,
    16,210,0,119,10,54,135,32,124,19,184,67,112,29,96,165,
    0,178,0,123,216,40,194,139,5,240,31,0,234,51,205,125,
    46,131,59,156,213,103,156,199,29,129,122,145,175,24,176,61,
    10,114,8,86,74,112,201,159,132,162,28,134,205,81,8,175,
    131,16,194,23,112,121,187,162,251,143,192,74,25,251,220,129,
    125,70,185,207,143,169,79,114,179,76,55,169,191,91,6,119,
    20,174,163,196,99,224,142,177,0,200,113,156,27,19,224,78,
    112,227,0,184,7,184,113,16,220,131,32,43,176,38,192,173,
    208,21,148,243,133,149,73,144,69,168,29,130,149,67,32,241,
    123,18,112,54,52,163,41,88,153,214,18,205,164,218,179,169,
    246,92,170,125,56,213,62,194,237,73,205,240,80,139,225,60,
    51,92,128,149,5,144,248,61,175,24,142,192,242,226,12,42,
    195,251,47,254,91,68,133,64,60,142,228,138,12,35,47,240,
    45,207,95,11,60,131,238,15,19,33,245,57,68,10,137,30,
    159,36,61,54,129,149,136,2,160,30,119,113,4,1,53,84,
    145,65,28,220,2,28,217,21,244,71,173,0,59,216,40,194,
    26,223,168,21,147,30,187,168,157,73,216,1,168,13,193,14,
    95,89,190,228,47,64,49,46,177,2,54,73,1,234,46,126,
    150,238,94,70,70,203,139,196,253,34,75,29,147,212,167,89,
    182,248,32,18,235,130,43,207,123,209,166,117,69,58,113,16,
    46,146,228,113,153,196,111,52,131,48,174,123,171,241,8,117,
    179,124,187,33,45,43,30,197,63,194,166,29,198,94,140,144,
    227,34,254,89,11,60,31,249,35,160,40,14,189,102,60,209,
    250,180,213,8,220,173,186,140,199,240,202,5,190,242,84,24,
    34,19,154,16,147,72,76,164,185,185,30,147,128,13,98,177,
    72,146,49,137,222,133,100,105,35,104,200,165,208,118,54,60,
    119,233,124,224,108,53,164,31,71,75,235,178,113,230,126,249,
    224,210,234,150,87,119,151,46,63,242,230,165,230,118,188,17,
    248,75,141,51,75,40,140,12,125,187,190,212,137,236,52,246,
    56,68,195,94,245,214,173,68,188,13,89,111,202,144,208,70,
    7,136,165,24,23,83,226,78,81,16,147,98,66,120,37,173,
    191,225,180,254,94,75,244,103,36,126,136,42,20,137,62,13,
    216,229,6,41,105,145,244,71,106,43,144,182,16,31,42,99,
    93,192,158,1,239,45,80,135,93,164,69,116,158,59,91,186,
    171,177,243,168,145,134,97,23,245,59,132,234,123,249,40,15,
    52,194,3,25,176,131,20,21,91,132,93,244,78,236,137,151,
    144,110,150,33,252,22,181,107,101,50,95,225,3,92,222,41,
    161,222,139,45,189,43,107,37,36,174,23,210,68,155,100,168,
    139,163,250,106,16,157,110,218,241,134,57,161,181,130,83,196,
    218,189,24,248,74,129,107,158,239,106,133,42,147,88,243,234,
    104,18,38,205,31,143,198,221,234,129,221,234,70,147,230,212,
    131,72,178,89,241,216,38,25,93,76,189,215,154,60,12,113,
    37,121,248,195,174,140,28,50,33,52,45,53,34,73,64,163,
    13,210,44,76,242,225,105,26,122,158,141,160,130,102,80,66,
    35,88,68,35,24,23,67,216,58,106,140,139,3,226,162,71,
    115,232,16,40,50,141,162,182,136,239,129,210,131,128,77,3,
    194,163,236,157,248,45,72,89,228,130,59,236,222,116,239,121,
    66,174,174,162,131,163,70,213,197,29,182,17,52,22,236,121,
    150,252,21,245,71,74,31,130,90,41,209,48,218,141,178,136,
    112,155,40,118,167,97,12,28,188,8,209,171,128,51,137,170,
    223,129,196,68,246,10,104,3,21,64,103,197,40,128,87,103,
    145,225,71,216,178,146,80,192,42,143,55,188,40,184,170,124,
    152,218,28,203,150,209,61,158,219,126,118,181,134,179,19,29,
    195,11,47,4,91,85,199,246,253,32,174,218,174,91,181,99,
    244,241,213,173,88,70,213,56,168,158,140,22,73,109,230,188,
    182,154,214,120,219,77,105,114,67,153,138,235,57,49,70,143,
    41,254,131,93,48,146,49,42,125,35,112,35,188,78,31,93,
    151,177,89,161,79,208,228,6,44,0,219,132,69,93,137,45,
    246,35,47,125,92,75,160,98,73,73,155,73,36,235,107,28,
    158,156,186,29,69,22,73,192,215,217,184,8,245,21,187,190,
    37,121,244,8,199,67,129,168,169,100,24,104,212,57,76,32,
    52,102,6,226,7,190,187,141,114,121,206,67,196,242,112,18,
    123,200,240,102,208,232,134,145,150,240,119,73,204,26,78,49,
    49,181,146,54,183,89,2,12,172,108,145,232,27,77,111,15,
    131,197,162,193,238,206,88,200,84,205,251,168,69,31,54,79,
    16,57,73,228,30,34,167,52,220,65,97,158,232,198,204,162,
    27,12,212,41,36,144,90,30,244,98,135,7,29,105,123,16,
    6,179,229,29,94,32,107,133,148,39,20,8,116,120,46,113,
    28,242,49,84,48,250,24,117,101,143,193,85,51,109,243,196,
    240,162,121,132,88,29,71,114,234,100,116,170,170,44,172,186,
    97,71,85,63,104,155,117,149,110,170,112,69,70,109,30,165,
    217,78,153,237,122,202,108,205,42,245,32,155,53,239,38,82,
    188,209,116,223,155,223,116,175,171,233,126,154,248,140,39,118,
    53,193,246,52,42,28,50,10,210,65,107,49,123,30,201,246,
    28,77,124,122,202,231,112,25,187,228,207,227,202,196,243,78,
    139,211,67,188,56,241,2,199,123,58,29,177,106,67,186,81,
    162,217,95,43,192,108,178,234,68,180,44,52,195,224,218,118,
    53,88,171,198,160,5,58,123,50,58,125,50,122,12,67,71,
    245,92,123,158,147,48,17,202,38,185,185,114,123,154,131,216,
    243,241,111,26,234,169,107,142,228,133,129,255,178,44,229,229,
    106,67,98,37,11,14,170,132,117,96,104,29,112,156,195,93,
    9,133,183,129,42,96,180,165,0,130,240,28,49,25,229,217,
    47,136,57,244,235,212,220,211,15,217,99,68,70,245,10,240,
    190,83,192,199,128,166,22,103,48,113,98,246,17,237,39,212,
    51,122,63,176,195,103,172,50,106,27,72,43,11,247,64,7,
    137,30,230,174,106,209,121,6,62,158,138,22,122,105,40,36,
    59,147,180,155,20,91,110,194,58,121,93,225,191,216,233,41,
    52,223,232,82,212,141,125,66,109,245,78,116,6,30,222,138,
    240,28,200,120,80,10,25,81,195,91,36,201,11,109,117,80,
    144,93,16,83,134,50,6,182,147,135,137,60,210,242,80,161,
    175,13,64,168,99,221,81,49,181,18,88,42,172,92,38,206,
    69,150,245,224,48,175,119,106,69,190,128,131,218,56,12,111,
    72,33,241,225,39,168,243,95,144,72,204,156,4,167,122,64,
    41,12,26,9,81,131,116,188,103,8,76,248,112,31,112,157,
    19,62,149,216,97,78,87,227,236,45,201,26,113,163,80,226,
    198,24,229,136,152,231,80,186,54,206,237,50,183,39,56,135,
    83,137,218,152,78,212,84,14,87,209,57,220,164,206,225,14,
    81,14,71,141,169,36,135,83,73,22,53,102,146,36,107,101,
    150,50,87,106,204,81,122,74,141,195,224,206,112,227,8,184,
    179,220,152,7,119,142,27,11,96,46,47,210,42,201,94,164,
    127,56,130,81,228,235,88,46,88,129,23,149,106,91,118,169,
    76,142,200,181,129,134,1,178,186,179,117,187,177,234,218,231,
    92,98,65,124,28,237,246,134,22,186,146,22,154,92,86,220,
    72,110,254,243,49,45,252,149,129,110,131,207,2,87,24,148,
    208,236,159,110,224,112,152,122,247,134,172,54,100,99,21,243,
    220,13,175,89,93,171,219,235,172,137,66,2,234,89,13,42,
    102,219,75,133,20,14,102,17,237,67,46,6,85,39,240,49,
    22,111,17,191,170,43,49,159,144,110,245,254,42,7,242,170,
    23,85,237,85,188,107,59,177,114,193,206,232,193,59,57,59,
    92,143,120,211,182,121,149,154,3,215,164,133,25,189,135,219,
    214,53,104,239,93,122,12,176,168,102,77,235,143,101,175,180,
    2,201,9,24,236,202,207,74,171,181,44,77,75,214,178,180,
    9,165,148,154,208,27,165,180,153,113,134,53,221,19,98,44,
    222,40,231,36,63,45,8,245,246,252,170,20,43,189,78,182,
    28,166,5,67,173,113,189,72,166,122,145,120,190,19,166,118,
    3,244,9,127,160,102,67,214,64,76,131,148,201,236,27,26,
    87,166,209,152,231,7,172,27,6,67,60,195,190,193,204,101,
    128,193,132,211,246,29,153,2,244,216,160,1,145,83,107,190,
    91,125,131,202,240,28,249,210,150,93,207,19,17,237,2,152,
    233,181,140,24,117,19,81,32,195,218,156,160,185,157,79,16,
    96,67,35,118,31,216,119,16,190,188,22,231,8,130,216,125,
    176,63,16,25,174,98,49,12,203,202,9,72,82,239,101,150,
    31,222,119,48,205,80,94,241,130,173,40,71,48,154,229,245,
    190,93,126,182,23,143,237,94,233,10,99,3,143,203,148,100,
    37,108,95,233,27,210,76,150,189,201,151,208,218,114,12,99,
    37,54,57,226,250,201,193,0,242,229,237,0,68,92,63,211,
    55,160,204,136,224,97,54,222,1,105,224,86,151,236,136,153,
    239,231,6,4,42,218,90,189,45,160,152,239,23,6,17,30,
    44,43,119,69,13,51,38,102,251,69,232,12,223,26,210,211,
    89,144,62,157,21,193,51,33,117,171,233,109,249,64,98,182,
    95,134,222,21,169,35,25,219,105,39,99,44,82,158,139,166,
    135,247,45,235,171,109,17,23,41,139,231,162,164,73,165,126,
    46,232,168,10,80,51,12,154,50,140,183,85,189,237,113,34,
    103,136,44,117,4,50,87,214,101,44,173,78,13,196,21,104,
    213,163,93,137,73,115,176,109,89,201,28,225,7,44,139,179,
    42,243,41,34,164,105,243,2,145,119,18,33,224,38,165,235,
    38,149,126,205,101,34,239,33,114,137,8,21,202,76,42,198,
    155,239,35,98,17,177,137,172,118,76,223,160,114,193,71,65,
    61,112,141,222,136,164,36,22,140,178,81,18,101,81,54,202,
    133,113,252,42,223,232,203,224,105,85,227,232,231,217,189,117,
    50,87,188,142,58,153,44,194,202,144,174,150,149,116,121,108,
    88,151,199,70,244,17,138,50,23,201,84,229,172,172,43,103,
    163,250,112,195,152,62,220,48,174,107,102,19,186,102,118,64,
    215,204,14,234,154,89,69,215,204,38,117,205,236,144,174,153,
    77,233,154,217,180,174,153,205,232,154,217,172,174,153,205,233,
    154,217,97,93,51,59,146,212,204,220,121,110,28,5,119,129,
    27,119,128,123,148,27,119,130,123,7,55,142,129,123,39,55,
    170,224,30,227,198,113,112,171,220,184,11,220,227,220,184,27,
    220,187,184,113,2,220,187,185,113,18,220,19,220,184,7,228,
    41,168,45,194,202,189,224,158,228,43,247,81,161,142,10,189,
    125,21,234,6,190,60,115,213,228,187,176,159,245,57,243,173,
    185,202,108,158,131,228,17,194,141,106,115,183,176,83,239,244,
    32,14,102,20,110,114,140,160,154,229,247,225,255,4,249,209,
    150,118,246,186,234,110,30,228,21,239,57,34,254,32,67,202,
    155,152,242,249,222,41,183,232,129,192,203,50,12,114,75,246,
    212,163,182,22,215,31,246,7,41,195,138,44,107,53,8,234,
    57,39,175,138,229,143,250,3,51,155,5,166,46,253,220,176,
    168,21,157,57,254,36,5,37,253,104,240,73,29,6,210,27,
    57,245,152,175,23,208,66,22,160,117,25,71,117,207,161,252,
    168,93,109,23,236,139,68,107,3,69,56,206,8,219,34,252,
    180,75,99,55,191,95,205,196,24,181,49,230,184,105,85,224,
    218,188,127,54,48,29,226,166,175,71,135,230,75,68,194,124,
    64,182,5,248,121,223,26,204,12,139,200,0,215,134,70,190,
    10,28,211,216,20,235,95,12,6,26,90,255,237,130,214,98,
    253,203,193,64,139,110,31,180,22,235,95,65,95,139,192,161,
    94,92,205,160,153,211,2,192,167,99,131,230,175,83,16,110,
    189,38,214,133,194,110,54,165,239,230,93,19,83,92,127,211,
    159,78,166,123,209,200,70,51,206,235,105,5,63,115,33,126,
    191,237,15,198,84,47,140,200,123,57,167,7,175,234,200,36,
    178,251,93,223,198,149,133,227,170,221,76,153,214,160,115,35,
    5,6,121,254,126,223,13,107,85,174,123,126,142,134,197,252,
    254,176,239,49,139,92,61,191,152,133,220,254,216,31,132,140,
    128,21,230,169,10,138,85,138,225,159,246,221,201,195,252,148,
    65,126,65,236,254,188,239,126,225,212,165,157,87,101,64,189,
    70,128,252,254,218,31,140,163,189,48,214,233,136,96,189,30,
    56,57,22,58,72,208,14,190,127,235,15,86,70,210,141,155,
    6,107,213,118,54,243,124,200,154,176,252,123,23,152,155,223,
    74,102,45,239,161,29,201,60,55,145,188,198,19,211,127,116,
    193,209,239,114,49,156,167,219,112,16,139,122,241,103,154,107,
    83,250,192,58,189,54,198,111,200,197,124,86,154,142,82,63,
    193,239,104,241,105,93,203,80,167,169,219,101,172,18,164,131,
    184,47,175,90,157,51,161,74,143,244,84,222,124,128,200,131,
    208,113,198,150,230,133,187,12,180,246,69,15,43,254,9,160,
    207,212,30,20,5,49,45,42,183,186,125,56,156,97,190,91,
    209,134,178,223,28,183,167,124,94,93,51,254,215,190,7,204,
    181,48,240,243,58,138,66,6,202,252,254,221,31,140,140,197,
    43,199,168,66,139,23,177,251,79,10,196,45,215,77,178,50,
    160,40,242,214,253,148,247,156,207,197,206,56,13,98,214,66,
    244,27,42,179,182,73,146,147,136,28,99,37,239,149,152,107,
    113,16,128,60,63,146,97,156,55,32,197,117,56,5,232,214,
    162,91,70,17,25,231,74,134,87,114,63,49,148,176,29,21,
    251,189,217,112,236,166,237,120,185,165,223,180,217,208,44,39,
    50,192,116,28,6,184,205,39,179,43,34,121,94,183,248,6,
    72,159,3,48,233,241,180,122,242,223,126,232,79,79,175,248,
    185,146,185,73,164,65,132,206,17,155,52,130,73,231,85,205,
    171,68,182,137,208,81,73,115,151,200,135,64,239,8,246,136,
    124,148,8,29,11,51,63,65,228,83,68,232,12,146,249,89,
    34,159,39,66,7,93,204,87,137,124,137,8,159,61,248,10,
    145,175,17,249,58,145,111,16,249,38,145,111,19,249,14,145,
    215,58,188,52,57,153,208,181,61,145,212,103,173,99,106,7,
    53,191,235,56,34,201,21,61,3,124,90,64,148,12,58,41,
    112,83,95,195,221,39,9,202,130,215,131,174,183,248,83,215,
    74,173,107,252,190,19,191,197,180,29,153,116,37,38,125,38,
    135,59,24,128,149,254,143,1,248,45,99,53,125,234,76,98,
    114,252,131,44,129,247,30,23,237,134,122,165,149,239,39,47,
    191,69,106,155,199,175,88,211,91,20,38,219,209,253,45,195,
    121,11,145,227,68,232,240,4,63,29,232,58,173,67,242,132,
    152,200,70,120,129,37,108,156,57,173,103,245,116,211,14,237,
    134,86,30,191,149,221,56,195,33,43,221,73,250,91,220,231,
    194,121,30,191,247,243,244,225,11,13,27,115,154,236,251,203,
    94,67,189,80,28,79,118,221,119,67,27,219,51,93,87,49,
    78,121,118,29,215,19,214,113,214,35,143,52,168,129,91,154,
    122,171,71,189,97,120,142,95,40,124,7,187,246,184,40,143,
    148,69,137,126,31,196,223,198,184,40,24,5,49,42,38,68,
    17,127,87,240,119,197,24,175,148,139,229,50,246,27,155,125,
    180,44,70,177,79,251,107,118,179,44,254,7,171,235,13,190,
};

EmbeddedPython embedded_m5_internal_IdeDisk_vector(
    "m5/internal/IdeDisk_vector.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/IdeDisk_vector.py",
    "m5.internal.IdeDisk_vector",
    data_m5_internal_IdeDisk_vector,
    3600,
    17384);

} // anonymous namespace
