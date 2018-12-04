#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_stats[] = {
    120,156,237,93,11,140,28,73,121,174,158,89,239,122,246,225,
    125,239,122,31,182,199,239,181,125,246,218,190,135,239,252,58,
    223,121,125,62,223,195,246,245,2,231,155,3,70,189,211,181,
    187,189,158,153,30,119,247,172,189,135,77,56,124,64,64,16,
    64,201,17,145,128,224,114,58,196,137,132,232,148,147,144,144,
    144,144,80,72,8,16,18,20,18,162,139,16,132,68,68,68,
    68,68,34,34,2,145,75,253,127,117,245,116,207,244,250,236,
    237,174,246,24,223,238,108,109,205,223,213,85,95,189,254,255,
    175,255,175,174,46,16,247,103,21,251,59,198,254,236,167,88,
    76,103,31,133,20,9,41,41,36,151,34,10,77,17,253,65,
    114,126,21,177,238,34,250,42,242,28,33,185,52,161,105,114,
    149,69,90,200,211,105,82,222,75,32,205,113,76,115,142,232,
    109,97,105,58,49,223,213,164,216,130,148,20,89,106,39,116,
    21,201,181,146,39,203,189,164,133,182,145,243,237,196,122,142,
    40,138,82,86,200,185,165,30,145,126,53,201,101,88,154,117,
    44,77,59,166,121,21,210,184,23,51,112,17,210,235,25,162,
    183,147,231,24,226,14,162,119,32,0,86,98,39,70,186,136,
    222,133,145,53,68,95,131,145,110,162,119,19,218,67,102,21,
    162,247,0,133,225,124,42,215,75,104,11,89,232,35,185,62,
    66,217,167,151,92,85,136,162,247,138,132,125,94,194,126,76,
    56,64,114,3,132,178,79,63,38,4,210,32,201,13,18,58,
    72,22,134,72,110,8,35,195,36,55,140,145,181,36,183,22,
    35,35,36,55,130,145,81,146,27,197,200,24,201,141,97,100,
    156,228,198,49,178,142,228,214,97,100,61,201,173,199,200,6,
    146,219,128,145,44,201,101,137,222,143,213,216,136,56,54,66,
    68,71,28,0,115,208,131,185,9,47,111,38,185,205,132,178,
    207,38,94,159,33,145,112,216,75,184,5,19,110,37,185,173,
    132,178,207,22,175,62,219,72,110,27,94,219,78,114,219,49,
    50,65,114,19,68,95,43,218,100,196,203,99,7,94,222,73,
    114,59,9,101,159,29,188,176,81,81,216,152,151,112,23,38,
    188,131,228,238,32,148,125,118,241,132,227,34,225,58,47,225,
    110,76,184,135,228,246,16,202,62,187,121,194,245,34,225,6,
    47,225,36,38,220,75,114,108,28,178,207,36,79,152,133,138,
    64,194,141,94,194,125,152,112,63,201,237,39,148,125,246,241,
    132,155,68,101,54,123,9,239,196,132,119,145,220,93,132,178,
    207,157,60,225,22,81,244,86,47,225,221,152,240,30,146,187,
    135,80,246,185,155,39,220,38,114,220,238,37,60,128,9,239,
    37,185,123,9,101,159,3,60,225,132,72,184,195,75,120,31,
    38,60,72,114,7,9,101,159,251,120,194,157,34,225,46,47,
    225,33,76,120,152,228,14,19,202,62,135,120,194,59,68,194,
    221,94,194,35,152,240,40,201,29,37,148,125,142,240,132,123,
    68,194,73,47,225,253,152,240,24,201,29,35,148,125,238,231,
    9,247,226,80,123,0,175,61,0,17,125,31,82,30,68,202,
    131,16,209,247,35,229,56,82,142,67,68,191,19,41,83,72,
    153,130,136,126,23,82,78,32,229,4,68,244,187,145,242,16,
    82,30,130,136,126,15,82,78,34,229,36,68,244,3,72,121,
    24,41,15,67,68,191,23,41,167,144,114,10,34,250,125,72,
    121,4,41,143,64,68,63,136,148,71,145,242,40,68,244,22,
    162,31,66,246,240,24,18,31,131,136,126,24,147,61,142,148,
    199,33,162,31,65,202,105,164,156,134,136,126,20,41,103,144,
    114,6,34,250,253,72,57,139,148,179,16,209,143,33,229,9,
    164,60,1,17,253,1,164,168,72,81,33,194,152,213,244,196,
    20,99,177,198,235,236,103,66,97,49,167,147,5,139,212,178,
    13,179,156,55,202,179,166,145,130,235,109,16,0,83,46,64,
    144,118,185,243,113,224,206,21,130,172,153,241,62,198,157,175,
    176,28,20,178,192,24,111,10,58,74,79,147,145,43,10,124,
    89,72,147,203,10,212,120,22,47,44,180,184,41,174,48,158,
    219,75,46,19,178,176,138,92,70,202,244,147,229,49,210,226,
    180,34,91,61,15,108,149,95,101,247,194,213,115,172,160,233,
    9,40,253,52,162,118,0,245,30,196,198,238,33,36,111,59,
    154,99,79,0,96,39,3,168,75,21,211,114,138,198,140,179,
    26,174,230,203,90,137,230,243,78,59,251,98,85,52,203,49,
    28,86,83,167,133,125,93,48,141,50,102,81,180,29,203,168,
    56,93,222,221,249,146,169,87,139,212,233,96,148,83,72,57,
    97,89,166,53,1,237,160,66,224,64,80,57,63,231,0,174,
    18,20,49,1,128,48,176,143,176,96,114,222,44,209,73,75,
    43,204,27,250,228,148,89,168,150,104,217,177,39,231,104,233,
    238,221,116,223,228,76,213,40,234,147,231,238,189,103,178,178,
    228,204,155,229,73,251,162,49,55,137,53,217,195,40,125,144,
    13,163,228,93,56,243,180,88,161,22,212,206,94,3,69,40,
    157,74,191,178,94,73,43,189,74,151,98,180,138,110,106,243,
    119,211,231,221,110,74,185,66,148,245,148,226,118,91,138,92,
    193,8,244,197,4,116,19,244,78,26,58,133,213,135,181,249,
    156,66,174,166,200,219,211,144,224,10,11,91,152,228,91,239,
    117,209,2,74,62,158,83,27,185,194,186,113,21,235,165,103,
    198,49,163,213,152,81,138,92,102,33,235,191,22,114,133,137,
    86,150,146,145,88,120,62,67,172,23,33,190,144,129,201,174,
    148,9,57,119,185,149,117,111,139,215,189,124,80,66,77,116,
    195,130,134,85,97,60,78,180,11,170,201,26,72,115,230,213,
    46,209,11,172,137,176,55,79,155,101,222,97,179,70,89,23,
    29,200,135,192,172,81,100,67,64,133,246,195,220,48,89,209,
    212,188,100,208,104,133,162,105,83,28,70,152,183,218,13,9,
    33,245,108,5,179,129,82,1,15,222,172,83,187,0,67,134,
    13,37,158,35,32,128,220,226,28,6,42,76,205,1,200,106,
    20,59,189,135,117,123,43,235,244,9,214,233,157,202,42,22,
    27,79,117,42,107,148,211,6,180,89,1,42,1,67,161,69,
    140,128,151,9,111,119,133,156,79,17,107,28,39,29,251,40,
    208,57,48,179,46,227,172,133,107,79,64,77,57,149,205,91,
    214,131,156,120,25,199,4,27,28,44,229,97,152,134,172,191,
    160,147,87,145,133,86,183,71,217,56,225,35,192,90,130,144,
    37,135,108,82,44,243,22,98,63,79,88,203,177,174,190,76,
    220,33,113,53,205,250,188,135,176,201,200,38,55,163,14,177,
    2,223,139,35,201,157,225,216,197,206,188,97,155,23,249,28,
    133,56,178,168,105,214,50,103,151,206,204,44,208,130,99,111,
    96,132,167,204,106,182,160,149,203,166,147,213,116,61,171,57,
    108,14,207,84,29,106,103,29,51,187,213,158,128,110,82,71,
    197,40,241,242,91,170,80,21,35,124,104,232,70,193,97,220,
    161,31,191,224,148,179,169,195,58,121,222,212,109,70,135,91,
    231,168,163,246,8,110,99,34,0,28,3,121,72,10,197,178,
    116,48,43,31,16,8,56,175,104,21,195,194,166,197,89,100,
    63,133,162,102,219,121,64,128,116,28,76,80,235,69,173,88,
    165,152,59,244,60,3,4,81,142,33,86,174,178,22,185,165,
    91,71,4,94,54,203,250,18,195,97,20,238,132,34,214,186,
    188,5,6,218,32,27,100,109,44,108,101,255,91,149,161,84,
    161,197,29,90,173,98,120,13,65,5,9,118,174,226,246,47,
    27,106,87,25,51,152,72,225,116,70,236,48,52,213,157,16,
    131,155,213,45,16,108,133,96,27,4,219,69,245,226,170,99,
    87,125,29,17,106,10,43,86,72,187,85,240,102,200,211,129,
    25,50,82,155,33,140,57,77,95,70,185,182,144,246,141,244,
    52,84,210,58,234,78,12,152,67,172,3,217,28,130,164,56,
    35,152,176,243,143,105,40,240,180,58,2,69,109,100,193,246,
    173,246,246,44,31,65,217,121,205,206,150,205,218,176,205,194,
    69,206,126,96,208,170,227,208,186,190,97,57,231,27,150,106,
    22,82,192,152,84,55,67,208,178,92,243,238,144,215,188,115,
    188,121,79,66,190,157,238,184,233,194,241,210,174,20,160,211,
    161,205,61,97,244,4,11,150,134,161,161,253,77,60,204,196,
    208,147,229,81,38,89,176,157,65,184,220,137,194,5,5,20,
    46,168,4,7,90,88,37,34,173,208,218,179,105,50,228,74,
    13,27,216,122,197,50,47,45,101,205,217,172,67,4,160,195,
    91,237,61,91,237,67,140,21,100,143,214,218,213,157,246,22,
    173,192,180,229,211,24,234,236,24,101,246,29,178,58,113,169,
    64,145,177,227,183,124,158,207,90,174,64,228,93,129,193,186,
    0,219,60,37,218,28,249,22,211,34,128,93,197,218,224,237,
    94,131,3,228,179,144,105,59,182,118,90,25,102,243,212,215,
    214,240,7,227,205,134,65,243,1,130,90,181,66,222,79,160,
    41,89,139,185,147,18,231,128,152,7,144,210,126,39,193,9,
    28,34,37,184,118,6,146,1,83,176,9,96,31,192,164,92,
    104,60,66,126,215,55,251,5,107,79,187,154,132,127,26,180,
    120,211,0,251,224,186,216,119,75,112,38,64,251,178,41,3,
    201,112,204,115,85,108,75,144,145,160,234,128,109,64,157,184,
    58,96,53,207,46,15,37,63,85,107,126,96,146,99,74,127,
    138,119,54,142,131,3,16,220,235,205,56,69,208,98,0,177,
    161,158,171,249,56,119,158,179,133,115,80,82,11,98,235,110,
    67,121,196,37,230,41,135,90,154,99,90,168,32,18,119,78,
    62,8,137,127,204,2,202,214,7,10,218,77,8,172,21,216,
    32,128,48,5,125,120,53,165,228,210,32,167,159,67,235,9,
    183,146,208,54,80,241,114,25,97,130,97,130,188,21,35,29,
    96,112,97,203,11,88,220,116,98,60,131,241,46,52,136,112,
    171,71,135,176,122,112,131,72,143,48,136,244,10,131,72,31,
    24,68,32,210,239,26,68,114,3,68,239,197,200,160,107,249,
    200,13,9,179,195,48,88,27,32,178,214,181,54,228,70,136,
    62,132,145,81,215,172,144,27,35,234,244,4,72,53,156,37,
    226,15,57,18,112,178,0,187,199,14,59,205,187,210,27,119,
    124,72,65,112,41,214,105,13,163,234,112,81,43,205,232,218,
    81,29,178,132,124,11,98,26,167,4,200,30,63,72,152,130,
    202,114,56,241,235,33,1,118,49,86,53,244,48,65,115,28,
    7,137,243,75,55,11,200,102,222,50,79,179,37,90,154,97,
    203,199,121,163,146,157,45,106,115,216,210,105,183,18,103,68,
    37,28,28,91,62,150,128,204,200,6,189,224,180,153,45,152,
    101,198,59,171,5,54,76,179,58,101,250,59,213,179,187,179,
    200,120,179,134,157,213,102,216,85,173,224,240,41,21,156,253,
    168,73,105,214,156,141,74,211,249,139,16,141,189,167,242,108,
    97,108,48,53,113,150,212,116,137,134,1,213,194,91,73,244,
    15,98,237,241,24,193,22,18,175,36,198,78,89,240,70,142,
    64,226,141,156,46,222,232,11,138,80,84,252,195,6,87,44,
    3,13,44,34,143,138,168,36,188,192,160,139,181,246,227,75,
    22,191,220,242,6,188,7,155,203,156,70,228,253,141,200,141,
    114,193,242,73,99,184,163,28,235,48,128,222,133,66,76,223,
    16,136,13,189,78,253,232,213,169,152,219,30,193,67,25,86,
    100,240,195,33,224,217,2,77,43,23,168,175,2,135,226,174,
    0,76,66,81,78,53,114,37,66,70,62,189,80,213,138,50,
    107,0,82,23,11,185,20,194,67,110,96,214,134,140,158,130,
    89,89,146,51,105,113,224,64,246,239,138,29,116,153,94,114,
    36,130,134,236,223,29,13,116,200,80,207,35,236,124,94,18,
    112,215,94,137,69,60,27,59,248,138,69,23,13,179,106,75,
    4,47,138,120,46,242,20,29,106,196,175,233,139,117,108,38,
    118,62,9,139,12,183,152,15,68,174,194,96,216,248,161,23,
    216,232,145,200,102,208,32,142,165,124,72,78,5,202,52,137,
    10,64,41,31,137,92,129,208,25,108,176,213,102,160,10,177,
    143,34,87,99,196,114,62,38,169,18,118,117,38,145,74,96,
    57,191,47,99,58,231,243,210,59,162,13,235,128,197,124,130,
    4,217,169,168,194,201,176,42,124,56,140,163,134,86,161,190,
    27,238,151,83,5,44,230,147,164,81,34,4,22,31,151,107,
    139,15,132,32,83,72,25,172,13,242,249,63,174,65,154,128,
    85,40,26,197,84,48,37,163,1,130,91,44,42,150,89,161,
    150,179,196,237,63,15,64,112,55,4,147,1,70,163,211,34,
    117,104,62,216,194,78,15,241,236,159,58,101,139,64,115,41,
    159,119,219,132,221,144,207,227,170,66,61,1,1,244,164,122,
    10,130,71,33,120,28,2,88,126,170,96,122,84,167,33,120,
    43,4,79,66,0,134,28,21,140,191,234,59,32,200,67,160,
    65,48,19,104,174,184,214,62,7,9,119,208,217,119,176,160,
    85,25,75,101,82,173,74,70,201,164,50,233,78,246,155,89,
    238,55,133,186,204,169,242,172,217,104,189,209,148,21,88,111,
    82,174,1,7,194,12,76,213,92,187,32,118,96,216,137,196,
    46,65,92,131,97,55,18,123,4,177,23,195,62,36,246,11,
    226,0,134,131,72,28,18,196,97,12,215,34,113,68,16,71,
    49,28,67,226,184,32,174,195,112,61,18,55,96,60,139,251,
    73,184,149,105,147,176,50,109,22,219,122,182,160,173,137,192,
    94,17,48,52,17,216,33,226,26,154,182,11,67,211,132,48,
    52,237,16,134,166,157,194,208,180,11,55,125,176,82,112,59,
    7,108,237,224,48,38,49,220,139,48,246,129,237,8,156,128,
    145,108,71,177,75,72,92,248,191,64,226,52,25,169,71,164,
    98,84,143,18,215,42,125,243,205,69,200,161,213,99,113,215,
    23,184,218,139,228,13,248,115,194,198,161,63,111,24,35,55,
    38,179,59,93,214,3,38,231,211,176,193,161,38,230,182,197,
    140,151,123,79,120,49,175,144,168,202,70,175,15,248,52,173,
    104,40,74,124,198,33,116,213,219,180,18,107,13,58,121,13,
    188,242,94,13,25,13,55,176,126,107,23,117,40,204,211,194,
    121,73,162,28,119,61,64,254,95,138,6,118,141,0,59,163,
    217,244,184,68,192,224,144,243,202,248,114,52,208,29,2,52,
    45,107,51,69,73,86,79,92,206,240,2,190,18,13,174,55,
    27,217,26,155,13,49,89,120,97,34,186,37,124,53,166,17,
    108,81,240,198,201,27,193,152,255,215,162,129,205,8,176,207,
    80,203,148,104,150,130,236,191,78,162,50,56,175,105,23,13,
    219,112,234,156,208,72,99,252,46,238,102,198,124,191,81,195,
    62,177,159,248,21,126,21,52,212,229,85,252,46,1,25,119,
    227,205,81,167,142,194,186,16,165,10,238,81,113,153,183,203,
    73,167,29,203,40,227,126,131,229,47,178,219,29,80,213,234,
    232,181,66,96,191,86,176,88,164,192,125,220,56,110,23,112,
    211,157,152,98,5,3,247,67,194,29,33,100,184,141,239,58,
    112,41,88,184,72,100,209,11,120,99,61,13,238,106,229,119,
    177,175,53,49,101,232,249,130,89,45,59,120,83,35,21,110,
    131,69,151,32,212,56,23,163,192,45,254,239,144,56,133,137,
    113,193,202,27,139,181,135,54,71,207,178,150,41,217,120,199,
    50,151,108,183,125,2,84,119,187,27,174,206,224,30,149,66,
    167,130,39,76,133,13,62,42,248,116,212,50,4,176,47,84,
    5,23,131,10,155,48,212,69,8,192,218,173,190,75,48,48,
    190,189,137,251,171,107,115,174,72,109,27,123,1,35,158,48,
    1,237,144,195,173,35,1,76,24,145,248,45,254,197,218,28,
    203,225,179,144,213,94,82,91,172,13,214,253,242,197,91,253,
    114,173,123,133,51,90,125,158,184,250,56,86,12,160,236,243,
    98,251,99,173,29,148,244,47,181,89,140,188,100,186,160,21,
    53,43,124,153,9,75,227,27,93,102,186,171,182,54,177,106,
    91,45,86,109,25,66,219,97,165,9,59,4,86,187,15,69,
    176,69,22,140,132,38,92,100,253,136,52,255,34,203,195,120,
    155,44,178,126,76,34,201,249,158,192,104,151,238,239,254,73,
    52,180,189,65,180,76,209,169,22,101,105,82,32,152,120,1,
    63,141,181,137,29,211,209,138,18,181,63,204,255,103,33,144,
    111,230,210,251,231,98,86,78,128,232,186,30,37,9,237,152,
    159,129,224,133,64,247,11,179,168,215,160,53,241,27,191,228,
    251,20,203,225,135,130,59,184,146,143,75,185,84,134,75,138,
    183,81,224,7,225,146,2,140,193,242,12,146,174,76,89,35,
    100,74,183,144,41,61,66,148,244,10,75,96,31,222,216,143,
    155,199,218,221,205,99,76,202,128,30,211,132,82,230,127,72,
    243,75,25,15,227,109,34,101,126,25,194,79,110,144,111,215,
    102,138,84,3,3,234,219,191,137,6,183,59,8,215,54,158,
    145,101,93,0,70,8,217,3,194,136,34,198,7,88,182,20,
    79,71,67,91,55,26,100,74,113,148,32,173,177,54,174,68,
    249,141,162,46,19,130,246,102,138,238,78,69,136,110,88,36,
    95,183,125,99,184,110,14,85,103,192,172,193,151,175,203,93,
    19,11,123,65,8,73,8,118,137,229,50,225,215,124,153,32,
    129,47,192,63,71,26,116,10,191,58,81,203,72,166,58,1,
    14,145,95,64,86,107,73,96,33,93,91,56,131,90,1,224,
    167,12,219,153,210,28,173,81,169,120,235,245,120,57,105,11,
    201,173,66,181,161,149,44,180,97,184,26,213,134,140,32,182,
    99,216,129,196,78,65,236,194,112,13,18,187,5,177,7,195,
    94,36,246,9,98,63,134,3,72,28,20,196,33,12,135,145,
    184,86,16,71,48,28,69,226,152,32,142,99,184,14,137,235,
    5,113,3,134,89,36,110,20,196,77,24,110,70,226,22,65,
    220,138,225,54,36,110,23,196,9,12,119,32,113,167,32,238,
    194,240,14,36,238,22,186,214,30,36,78,194,115,233,174,18,
    133,158,77,124,104,180,249,212,161,1,49,255,154,88,29,242,
    48,190,177,58,148,34,190,135,160,166,60,230,123,21,159,202,
    89,26,192,250,136,103,165,225,57,119,60,97,194,193,199,157,
    224,105,168,251,241,105,104,100,214,249,20,127,32,170,214,39,
    173,30,247,1,219,90,153,94,204,139,121,196,159,116,130,235,
    90,165,66,203,186,10,166,44,117,159,215,52,91,68,115,197,
    174,57,109,129,166,17,79,200,164,149,1,165,167,57,216,250,
    46,143,173,47,107,182,174,227,232,189,62,190,132,207,108,122,
    230,217,32,21,44,215,235,136,43,56,189,75,37,131,27,143,
    27,136,192,175,65,133,101,241,186,139,218,165,144,59,24,209,
    187,67,187,132,6,112,239,226,76,181,112,158,58,168,175,121,
    214,241,208,139,182,107,36,246,209,112,15,116,0,24,211,162,
    48,151,208,11,144,67,27,71,13,223,235,18,49,144,225,119,
    187,23,188,187,249,119,52,63,123,137,170,101,157,90,179,69,
    243,162,103,153,14,185,36,12,238,30,5,247,12,121,9,205,
    69,95,22,225,87,132,156,20,132,96,79,22,22,105,161,177,
    127,145,42,92,4,240,37,216,57,118,181,212,216,99,64,20,
    61,198,226,193,6,177,47,84,53,203,213,10,66,47,136,150,
    114,191,7,225,20,77,215,30,222,72,21,32,225,75,93,206,
    90,169,82,12,45,210,189,224,21,201,191,227,44,198,37,129,
    171,43,120,60,69,162,166,0,62,255,126,152,161,48,247,153,
    166,160,52,26,220,189,223,84,166,213,167,53,132,155,34,96,
    123,87,60,166,136,54,97,174,94,85,51,87,55,169,228,220,
    123,11,72,206,189,215,47,57,127,43,12,9,251,155,108,117,
    115,192,19,131,215,107,152,12,200,66,238,56,5,238,225,103,
    67,53,170,231,78,101,95,234,121,136,236,213,198,107,144,3,
    84,175,147,248,87,27,140,87,64,85,249,138,103,121,142,241,
    124,108,28,227,186,119,83,186,44,165,87,88,52,253,102,203,
    182,154,217,114,117,115,114,155,195,183,0,183,57,124,155,113,
    155,163,209,44,63,131,13,243,68,190,233,242,68,52,200,253,
    141,144,229,153,47,209,170,242,112,147,113,244,71,163,218,171,
    26,249,250,114,215,96,165,243,3,184,121,44,164,213,253,6,
    175,107,93,135,76,254,116,249,76,106,6,175,107,93,135,76,
    96,123,107,205,216,229,127,134,32,120,151,76,153,243,67,150,
    195,33,232,0,208,172,3,91,69,82,174,117,171,211,171,197,
    126,61,92,242,124,147,220,106,251,248,93,193,37,246,241,231,
    198,133,4,91,7,242,10,214,18,77,40,175,206,222,2,242,
    234,236,109,38,175,212,184,152,63,159,91,242,165,213,219,155,
    140,249,231,61,230,191,158,220,0,243,31,169,111,184,0,247,
    94,254,170,199,187,195,146,212,56,247,242,87,5,223,246,49,
    119,55,201,210,114,18,164,241,58,44,50,192,194,88,35,225,
    22,205,64,242,75,222,206,205,58,50,32,192,83,82,26,174,
    45,133,223,178,132,229,65,23,46,249,20,36,247,162,103,54,
    10,191,2,133,125,155,184,98,10,135,107,64,66,241,164,50,
    229,19,108,229,57,163,52,122,96,106,182,20,144,81,96,26,
    124,200,180,74,213,162,22,46,162,224,89,186,21,239,1,164,
    120,2,160,255,160,160,230,21,18,250,45,32,36,244,219,76,
    72,204,70,19,18,221,193,193,157,103,117,144,180,185,1,45,
    190,142,181,208,100,50,162,228,201,8,208,69,175,71,70,252,
    198,107,60,224,134,46,203,242,181,161,76,142,245,107,151,49,
    248,173,56,156,75,225,137,102,21,205,178,233,195,203,122,139,
    97,27,122,236,222,98,151,177,9,111,49,236,60,91,229,238,
    60,107,94,99,176,117,11,112,50,235,250,57,89,50,110,84,
    24,238,224,70,13,14,51,222,32,127,1,65,98,110,212,139,
    77,234,70,125,183,199,76,122,151,99,38,33,134,134,96,123,
    230,11,37,173,226,25,26,194,174,121,46,55,246,197,25,109,
    76,228,247,105,93,227,50,168,95,255,44,248,91,224,144,129,
    96,255,74,100,103,175,179,28,46,64,155,173,33,62,199,22,
    119,97,5,25,218,155,142,44,111,144,93,189,5,120,215,213,
    235,231,93,191,21,90,216,251,154,76,171,249,208,202,28,89,
    65,142,211,104,246,12,187,230,153,61,67,57,136,108,133,168,
    141,85,244,189,161,110,45,152,189,103,170,78,165,234,52,242,
    141,249,149,240,141,107,30,237,250,28,9,60,181,229,110,181,
    95,3,108,164,189,57,217,200,71,111,1,54,242,209,219,140,
    141,124,188,201,216,200,243,222,24,89,193,210,178,211,155,128,
    249,25,58,103,148,37,62,229,132,249,255,97,180,149,112,123,
    13,46,45,235,18,23,193,44,247,63,138,6,213,215,178,139,
    90,209,144,5,214,125,247,130,161,127,186,14,110,138,220,232,
    233,96,126,196,193,135,242,99,63,19,12,31,167,254,108,13,
    49,158,81,116,67,15,226,187,66,140,227,245,61,207,221,197,
    50,85,187,33,232,133,224,93,68,134,64,235,96,89,255,30,
    160,135,213,86,240,44,44,248,197,109,126,69,38,88,241,93,
    68,141,146,13,56,200,117,46,241,93,249,118,205,231,145,93,
    129,214,46,4,90,135,120,100,172,83,156,34,213,37,78,145,
    90,35,78,145,234,22,167,72,245,136,227,202,123,197,113,229,
    125,226,184,242,126,113,92,249,128,56,174,124,80,28,87,62,
    36,142,43,31,22,199,149,175,21,199,149,143,192,59,205,184,
    111,141,191,211,44,55,70,244,81,140,140,187,47,47,203,173,
    35,250,56,70,214,187,111,41,203,109,32,250,122,140,100,221,
    215,145,193,193,89,89,113,112,214,70,113,112,214,38,113,112,
    214,102,113,112,214,22,113,112,214,86,113,112,214,54,113,112,
    214,118,113,112,214,132,56,56,107,71,237,224,172,133,221,176,
    171,92,223,137,148,73,80,1,118,145,166,84,1,62,119,11,
    168,0,30,198,55,86,1,110,144,139,246,249,103,18,158,216,
    135,7,33,201,225,165,176,77,73,20,241,242,181,164,124,187,
    215,240,87,235,100,253,144,34,77,214,207,176,28,190,16,77,
    38,13,6,90,51,15,47,96,128,211,92,164,29,6,204,95,
    77,226,149,242,197,104,232,251,234,208,207,152,102,81,242,57,
    198,188,136,87,162,225,238,173,195,93,164,101,105,176,249,185,
    146,88,194,171,62,212,160,8,192,95,139,64,221,79,130,10,
    1,127,249,73,248,137,161,126,236,108,145,105,23,141,2,28,
    160,235,233,218,232,89,52,48,92,136,181,50,157,88,153,90,
    145,95,138,172,226,212,87,199,174,85,71,158,178,227,214,163,
    86,214,151,101,244,12,83,136,26,122,70,93,15,58,208,6,
    69,74,125,106,5,126,37,114,191,212,51,38,150,55,99,196,
    37,185,221,210,33,170,193,139,250,106,236,181,96,35,55,169,
    90,120,69,125,45,246,90,216,201,213,194,43,234,235,209,56,
    110,87,160,10,21,179,34,113,165,200,114,255,134,15,173,80,
    208,210,196,167,164,189,225,105,104,61,1,192,252,129,55,137,
    39,148,163,39,232,91,209,218,184,59,0,153,150,42,142,172,
    23,56,224,107,39,32,255,239,68,67,188,38,128,88,242,30,
    219,239,70,30,19,117,112,47,106,21,223,136,136,91,141,231,
    199,26,176,50,190,23,231,168,144,104,82,194,133,254,247,227,
    100,19,210,12,74,104,142,120,45,26,212,32,131,176,100,218,
    234,240,20,37,44,224,7,113,206,55,75,158,193,14,198,46,
    100,255,163,56,199,110,161,72,53,89,11,77,254,170,94,150,
    255,191,69,67,60,28,64,60,7,111,248,43,22,205,130,196,
    37,50,96,10,148,243,147,56,215,116,76,150,230,103,52,105,
    71,239,194,154,78,20,241,211,200,122,82,157,0,180,52,155,
    202,212,144,80,10,66,33,63,171,67,14,168,87,9,228,39,
    107,200,25,108,254,118,108,255,214,146,84,216,214,146,7,113,
    107,73,234,141,182,150,64,111,194,214,18,175,210,161,187,74,
    234,92,48,82,182,150,252,92,33,98,107,73,183,216,90,178,
    50,33,219,31,28,127,85,123,158,15,64,121,186,23,63,116,
    85,20,244,203,56,89,214,172,101,150,101,158,82,140,249,255,
    42,78,161,32,113,178,131,80,128,236,127,19,199,98,187,78,
    63,183,109,99,174,236,27,233,83,82,6,10,158,125,129,69,
    65,3,71,99,86,117,250,3,69,237,87,34,183,114,143,98,
    100,165,164,99,198,110,148,109,106,201,244,77,33,118,94,74,
    107,42,210,88,175,99,46,76,242,200,156,161,200,87,68,25,
    25,31,242,149,113,198,1,210,192,25,57,122,137,172,17,88,
    122,173,164,206,200,117,168,31,245,37,115,81,234,43,30,249,
    168,135,82,186,163,141,156,32,240,106,217,184,32,235,116,56,
    196,204,11,232,139,134,57,104,230,182,232,34,181,108,153,71,
    252,187,37,12,70,67,93,183,202,54,45,153,111,116,132,236,
    215,70,30,213,65,161,95,162,214,156,212,65,13,146,31,11,
    25,11,105,105,69,32,191,9,27,95,214,167,92,175,227,4,
    106,159,215,222,200,11,142,57,116,161,169,107,33,54,10,193,
    56,4,89,8,54,65,0,231,62,169,219,32,0,208,234,78,
    8,238,80,132,134,11,231,50,240,51,233,224,64,12,223,62,
    131,123,32,184,23,130,131,16,192,3,251,42,60,197,174,30,
    131,0,212,85,245,56,196,224,49,113,245,36,4,167,32,128,
    135,158,213,199,33,128,167,155,212,39,32,152,134,0,142,139,
    83,159,132,224,41,8,158,86,252,76,193,221,246,80,83,193,
    37,110,219,131,35,194,94,2,237,233,45,196,221,248,155,10,
    57,48,254,218,191,109,203,191,23,44,163,224,138,98,17,159,
    35,203,235,102,117,166,72,27,247,74,192,163,66,111,238,149,
    136,119,175,4,221,14,142,58,216,25,177,213,221,25,161,78,
    79,192,155,43,154,112,251,195,102,49,201,155,120,251,131,135,
    49,246,237,15,67,245,19,68,242,22,8,100,147,219,174,197,
    231,111,218,214,135,137,104,114,126,164,161,37,165,111,127,64,
    73,179,43,26,236,198,1,32,119,223,3,10,198,61,209,48,
    15,134,96,150,184,231,1,197,248,62,31,228,21,175,242,71,
    67,128,135,109,120,144,227,86,71,77,228,174,200,171,229,176,
    74,36,178,205,1,149,168,3,178,250,33,185,237,13,168,7,
    30,140,220,15,97,12,39,137,109,13,168,193,30,145,2,63,
    137,253,12,168,123,31,147,2,63,137,141,12,184,106,56,30,
    125,33,29,196,46,109,7,3,174,111,30,138,197,86,20,68,
    156,204,22,134,83,209,237,115,65,216,18,183,49,224,2,242,
    177,104,128,251,26,0,75,222,197,112,38,242,208,8,129,44,
    119,39,3,95,158,199,61,48,100,239,100,120,107,220,44,67,
    238,110,134,115,209,224,54,242,11,153,59,26,208,66,243,116,
    220,51,79,222,126,6,52,38,189,51,238,17,44,113,63,3,
    26,190,180,104,128,199,26,0,39,176,157,1,141,117,122,220,
    43,52,185,187,24,208,182,56,23,89,65,10,145,125,146,119,
    48,160,61,116,161,14,120,98,155,23,128,67,194,230,133,64,
    157,111,218,6,134,82,42,174,13,12,195,141,195,47,129,77,
    12,104,209,118,226,102,81,18,189,163,104,125,191,24,183,12,
    144,56,203,193,81,240,76,28,139,233,16,221,60,145,237,11,
    232,229,184,18,153,79,133,168,10,178,55,47,160,107,230,61,
    18,144,75,223,186,128,254,164,171,145,117,246,70,3,30,188,
    159,220,10,248,206,167,98,134,238,186,116,177,152,247,199,45,
    145,11,90,69,43,24,210,54,168,195,190,66,81,196,7,67,
    176,123,198,243,155,224,36,253,112,74,56,73,225,249,214,91,
    215,73,122,5,130,223,81,252,147,203,245,133,6,37,186,68,
    127,232,59,88,233,155,160,57,31,33,177,249,67,235,188,160,
    54,190,242,253,77,47,232,155,94,208,224,44,254,184,152,197,
    77,236,5,245,48,202,244,130,242,9,146,132,23,244,15,174,
    197,200,111,154,23,244,19,209,68,163,207,44,238,182,100,50,
    94,208,79,198,38,209,61,216,210,189,160,159,138,134,121,48,
    4,179,108,47,232,103,226,88,48,140,134,0,79,216,11,250,
    39,145,149,239,176,74,36,231,5,125,73,86,63,36,236,5,
    253,124,228,126,8,99,56,137,121,65,191,32,5,126,98,94,
    208,47,74,129,159,152,23,244,149,104,252,179,183,1,187,92,
    47,232,171,145,151,205,3,13,136,147,241,130,126,41,54,59,
    156,11,91,182,23,244,203,177,217,225,92,192,146,189,160,95,
    137,60,52,66,32,39,224,5,253,106,220,3,67,182,23,244,
    107,113,179,12,185,94,208,175,71,131,219,200,47,164,123,65,
    191,17,247,204,147,236,5,253,86,220,35,88,182,23,244,59,
    209,0,143,53,0,78,202,11,250,221,184,87,104,9,120,65,
    191,23,89,65,10,145,125,73,120,65,191,95,7,252,102,121,
    65,121,157,111,154,23,244,181,148,4,47,168,24,126,73,121,
    65,255,53,110,22,37,219,11,250,239,113,203,0,201,94,208,
    255,136,99,49,29,162,155,39,231,5,253,207,200,124,42,68,
    85,72,196,11,250,95,18,144,39,227,5,253,239,200,58,123,
    163,1,79,190,23,20,221,92,191,136,91,20,203,117,127,162,
    87,238,151,33,152,61,107,249,77,112,123,254,42,117,155,184,
    61,93,17,46,209,237,249,44,43,253,99,169,248,221,158,221,
    181,113,58,181,236,219,176,222,116,124,222,222,142,207,215,197,
    60,110,98,199,167,135,49,118,199,231,218,198,41,146,132,235,
    51,149,110,70,215,103,75,8,170,149,45,173,189,182,76,198,
    249,217,22,13,120,216,32,72,192,253,217,30,13,245,112,40,
    106,217,14,208,46,31,232,21,175,21,198,67,161,39,236,2,
    237,169,107,254,27,215,188,195,171,145,156,19,180,95,94,95,
    36,236,6,29,138,220,23,225,204,39,49,71,232,136,164,10,
    36,230,10,29,151,84,129,196,156,161,27,162,113,211,254,16,
    244,114,221,161,155,124,128,87,182,126,30,10,193,156,140,67,
    116,107,180,198,30,12,1,46,219,37,58,17,13,242,64,8,
    100,201,78,209,93,145,7,72,40,232,4,220,162,123,226,31,
    30,178,29,163,251,226,103,31,114,93,163,119,69,3,28,198,
    59,164,59,71,15,196,63,7,37,187,71,15,198,63,146,101,
    59,72,143,68,131,188,46,4,114,82,46,210,99,241,175,227,
    18,112,146,30,143,172,58,133,202,195,36,220,164,15,213,65,
    79,204,77,10,252,210,231,38,21,181,190,105,142,210,83,233,
    184,28,165,190,29,129,181,65,152,148,171,244,108,252,236,74,
    182,179,116,58,126,153,32,217,93,250,182,56,150,221,161,186,
    123,114,14,211,167,34,243,172,80,5,34,17,151,233,219,165,
    96,79,198,105,154,143,172,211,135,153,253,18,114,155,206,196,
    47,158,19,112,156,210,107,217,218,111,130,227,116,62,253,91,
    233,56,133,57,21,116,156,122,66,93,162,235,244,69,86,254,
    255,165,98,119,157,174,116,219,142,190,84,214,74,70,33,63,
    93,208,138,154,117,170,60,107,98,50,60,154,26,14,19,142,
    181,238,127,201,178,46,69,155,146,126,204,111,195,94,243,48,
    171,240,134,184,88,241,254,21,203,240,66,52,188,61,62,188,
    48,188,36,162,253,107,150,97,53,250,26,59,216,186,146,49,
    195,107,242,150,162,235,83,65,204,251,117,137,136,255,134,101,
    120,37,186,233,69,32,126,200,180,74,213,162,38,17,240,55,
    89,134,207,198,55,44,166,43,154,101,211,135,229,14,11,120,
    15,225,251,124,152,137,251,227,73,193,118,15,115,253,14,4,
    4,220,137,220,203,112,166,141,210,52,228,25,63,27,255,54,
    43,242,131,145,85,163,213,46,206,183,208,75,92,145,67,202,
    172,81,164,172,177,169,122,53,110,212,127,203,0,124,36,66,
    187,130,199,196,162,115,172,243,169,117,22,11,192,230,125,88,
    43,235,69,106,73,104,230,191,99,8,62,94,7,88,12,222,
    147,13,131,247,195,97,152,225,109,14,118,97,158,234,0,245,
    196,34,21,107,195,216,181,229,191,103,217,62,31,93,90,84,
    168,101,152,186,81,0,184,83,213,18,119,232,224,43,57,248,
    149,88,49,195,43,41,63,25,113,162,85,43,186,230,80,108,
    89,9,35,224,31,88,145,159,142,128,16,182,183,87,44,179,
    64,109,91,101,139,14,231,137,42,173,210,248,97,194,59,50,
    95,136,0,179,167,6,19,58,93,18,202,127,100,197,190,180,
    114,148,170,69,100,168,196,144,235,203,17,218,14,142,9,98,
    12,115,166,72,245,248,193,253,19,43,237,207,34,128,131,87,
    48,97,102,143,49,174,25,63,60,120,221,233,43,53,120,104,
    138,49,32,110,64,171,24,88,84,141,214,234,209,166,1,27,
    92,176,151,108,21,40,104,6,204,67,230,121,94,80,30,94,
    165,99,176,255,248,78,145,78,226,151,89,108,164,50,102,228,
    44,225,10,16,171,120,154,201,171,19,150,101,90,120,29,64,
    59,70,217,230,54,81,184,174,238,132,0,215,143,187,137,88,
    48,222,7,193,70,8,14,18,87,186,76,51,0,103,151,78,
    185,27,218,16,143,16,56,234,28,113,231,243,41,254,246,219,
    218,37,92,174,20,22,53,30,41,155,101,234,46,96,12,7,
    71,135,110,216,149,162,182,164,190,32,106,93,209,103,241,127,
    129,253,111,225,9,28,228,177,101,19,246,126,225,11,110,88,
    54,90,25,111,103,249,21,13,150,39,116,117,94,216,46,116,
    245,121,64,254,41,226,154,56,106,43,168,32,234,23,69,130,
    218,114,37,136,29,154,103,138,46,26,154,195,90,27,209,128,
    210,141,17,80,179,212,87,136,107,232,244,121,68,125,249,191,
    230,191,220,88,252,15,69,203,6,245,249,96,162,159,138,1,
    224,87,160,131,73,126,77,92,131,136,79,99,13,166,120,221,
    235,67,79,69,108,68,219,166,52,36,106,204,169,67,113,181,
    228,51,85,167,82,117,130,23,225,21,52,117,111,186,15,92,
    135,35,153,66,142,139,15,164,121,182,46,141,247,0,174,191,
    223,148,101,246,26,5,82,193,146,22,215,137,184,252,194,245,
    12,46,17,80,237,70,61,22,85,69,212,188,80,155,65,53,
    1,229,46,138,54,20,28,200,151,145,13,34,187,193,73,29,
    59,171,192,137,121,184,100,234,213,34,61,10,163,218,254,95,
    22,244,40,157,74,102,117,70,105,133,255,221,236,127,170,83,
    73,167,210,74,187,210,165,180,176,255,61,236,127,79,170,179,
    39,211,146,201,176,116,29,67,7,51,74,123,106,104,55,11,
    149,76,248,47,216,51,82,67,189,152,110,4,66,78,231,241,
    161,12,134,189,190,176,3,195,53,190,171,3,24,62,131,225,
    249,186,48,205,243,191,190,223,206,101,175,252,63,254,239,226,
    143,
};

EmbeddedPython embedded_m5_internal_stats(
    "m5/internal/stats.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/swig/stats.py",
    "m5.internal.stats",
    data_m5_internal_stats,
    8225,
    63389);

} // anonymous namespace