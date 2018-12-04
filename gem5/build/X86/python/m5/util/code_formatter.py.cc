#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_code_formatter[] = {
    120,156,197,90,221,111,28,215,117,63,51,179,187,228,46,151,
    162,40,138,212,183,60,182,197,106,233,90,162,156,38,142,227,
    40,178,45,75,118,220,218,180,51,178,165,132,50,59,89,238,
    12,169,33,135,51,235,153,89,137,50,185,104,98,6,181,84,
    164,13,16,4,253,200,83,30,90,160,69,128,0,5,12,20,
    104,31,250,7,244,181,233,91,255,134,190,247,33,201,249,157,
    123,239,236,146,148,141,22,240,182,251,113,247,204,189,119,206,
    156,123,206,185,231,235,110,135,244,171,202,223,87,249,155,255,
    171,69,20,240,199,162,152,104,185,132,45,90,182,12,108,211,
    178,109,96,135,150,29,3,87,104,185,66,129,77,97,149,214,
    120,178,67,63,34,218,35,250,222,114,141,130,10,133,99,210,
    91,45,123,199,41,168,153,185,99,101,111,29,189,235,252,184,
    6,133,19,20,140,211,166,77,217,191,88,120,68,157,226,58,
    109,213,137,231,88,97,29,211,151,155,20,240,188,73,193,49,
    81,226,56,66,65,147,150,167,40,100,96,82,90,254,76,241,
    152,197,136,85,139,39,28,37,141,101,154,194,105,10,142,210,
    158,197,136,25,229,116,9,29,43,161,153,18,58,94,66,179,
    6,218,56,6,60,214,182,79,225,12,5,115,232,190,177,242,
    29,90,62,78,251,166,5,39,74,232,36,5,167,104,207,86,
    23,167,113,17,156,161,61,71,93,159,165,224,92,57,120,222,
    92,124,116,211,186,131,103,205,202,179,48,244,20,5,174,44,
    76,221,247,102,34,114,184,213,122,154,5,25,253,150,95,75,
    69,141,193,56,77,55,123,221,142,17,53,11,152,174,67,212,
    207,114,19,146,22,44,243,14,82,181,4,112,32,70,0,21,
    242,110,181,28,158,215,113,180,146,216,252,125,23,119,67,91,
    118,109,218,37,242,25,176,4,144,118,195,162,13,213,239,208,
    174,35,64,133,118,43,2,84,41,34,1,106,120,230,173,22,
    104,89,106,141,113,91,0,249,90,214,222,10,139,58,160,52,
    219,106,23,69,152,73,191,31,68,157,162,168,48,84,2,237,
    108,61,151,213,109,62,40,193,56,237,180,227,188,133,59,100,
    78,30,198,107,30,8,246,240,28,15,253,30,230,181,200,52,
    249,235,220,44,222,75,183,194,197,172,221,185,23,5,139,55,
    210,78,111,43,76,138,124,113,61,220,250,218,165,240,133,197,
    60,235,44,118,31,22,247,210,100,113,235,107,139,189,34,138,
    23,59,105,16,250,37,137,151,121,116,28,84,250,81,18,21,
    190,255,12,16,55,133,213,117,126,79,73,43,12,52,95,60,
    53,159,46,25,184,33,12,188,58,196,17,161,23,108,17,230,
    123,227,102,69,81,17,110,21,232,186,223,142,71,176,138,9,
    89,69,30,22,120,142,239,63,7,220,182,44,164,99,107,217,
    87,13,249,139,150,17,59,147,191,89,163,236,244,96,41,167,
    110,237,26,85,192,200,87,53,108,70,88,203,176,171,223,145,
    110,155,54,28,218,168,144,12,216,50,208,49,3,85,238,101,
    168,6,180,217,79,204,227,120,96,76,240,254,100,112,57,252,
    208,113,25,252,7,13,171,17,133,165,78,217,175,135,176,52,
    100,226,175,7,151,6,11,51,98,163,41,131,255,165,97,25,
    121,120,134,138,73,128,188,139,251,10,203,17,53,114,39,153,
    166,74,49,69,155,13,202,206,89,252,74,44,250,110,113,20,
    70,144,199,231,62,177,149,186,67,132,75,90,87,214,162,56,
    244,125,125,17,71,9,95,228,51,96,110,218,139,3,55,73,
    11,119,45,74,2,247,226,124,126,177,53,109,212,65,212,87,
    180,89,20,126,205,135,12,69,108,157,84,48,38,216,64,227,
    50,4,156,73,42,250,111,122,100,127,120,160,162,0,182,245,
    56,93,229,14,181,225,124,115,165,148,96,181,23,197,69,148,
    148,20,98,227,241,5,116,47,74,10,217,75,69,131,155,219,
    237,184,23,222,204,178,52,147,203,183,146,32,220,150,203,150,
    109,52,215,107,140,102,207,41,66,215,141,182,94,2,238,231,
    69,91,167,172,9,27,223,166,53,201,223,134,125,222,58,34,
    215,230,215,177,154,60,103,210,170,88,202,88,168,37,130,119,
    188,196,134,92,108,165,65,15,2,242,192,28,15,187,217,59,
    189,111,25,95,234,90,60,32,131,217,206,33,214,154,85,31,
    175,59,197,140,136,117,120,166,207,194,109,31,54,228,39,134,
    13,249,176,21,103,227,109,139,29,228,182,225,242,171,245,202,
    203,242,235,186,243,173,32,140,163,173,133,188,245,202,123,87,
    195,188,211,238,134,193,181,178,115,193,221,247,218,117,159,117,
    245,28,87,102,48,199,51,141,232,143,129,128,53,149,215,124,
    237,174,187,242,220,194,62,204,113,154,132,140,54,194,48,163,
    189,32,168,208,233,74,87,180,22,149,136,246,221,39,163,67,
    55,186,238,97,138,62,31,195,124,43,94,85,120,86,253,131,
    152,230,91,25,143,41,12,171,44,52,94,210,23,147,210,77,
    115,190,157,219,39,144,97,72,225,209,168,136,210,164,29,187,
    221,182,56,177,47,38,106,24,167,33,200,224,210,68,13,80,
    62,1,81,160,49,133,236,7,174,93,126,238,21,32,9,74,
    44,26,81,144,246,86,227,208,224,11,183,187,89,152,231,140,
    241,137,252,78,24,83,20,92,123,226,10,249,197,220,142,227,
    75,80,196,97,21,16,164,185,224,91,144,182,3,219,50,49,
    236,38,126,131,253,197,31,49,151,28,198,32,52,176,196,239,
    57,18,183,176,174,50,52,240,18,14,245,43,148,252,66,224,
    10,125,104,83,191,74,253,154,92,86,233,195,10,245,199,168,
    63,78,253,58,245,27,64,202,243,163,49,24,67,248,0,177,
    247,123,226,70,94,196,69,29,246,87,160,6,34,208,23,245,
    180,170,204,169,150,215,53,185,174,149,215,252,25,167,19,123,
    18,150,154,190,58,237,54,84,223,56,189,56,199,36,162,127,
    2,97,13,128,166,180,147,116,29,63,71,232,250,158,137,127,
    196,234,215,197,234,195,224,118,101,23,39,18,211,8,19,5,
    18,245,19,203,202,50,47,176,97,227,85,249,201,86,165,151,
    165,45,191,44,225,214,148,9,149,242,94,55,204,188,115,176,
    75,98,161,206,27,159,160,196,205,126,138,31,33,10,224,235,
    30,193,24,202,28,181,151,189,167,112,163,139,230,105,227,18,
    58,233,86,151,221,136,192,183,111,122,215,223,189,117,83,238,
    184,241,238,251,175,189,253,182,120,138,119,62,120,251,253,183,
    222,126,107,233,102,11,130,22,202,58,236,54,32,121,241,62,
    160,110,181,157,135,185,12,5,29,189,180,118,225,33,48,242,
    158,53,55,197,171,47,232,223,175,168,229,149,191,47,140,192,
    192,130,242,101,32,60,43,166,243,44,123,128,166,51,101,205,
    114,104,54,99,53,248,125,148,223,199,173,147,182,56,105,239,
    12,154,179,134,177,114,247,168,76,63,100,248,14,16,226,193,
    181,102,205,42,142,28,50,252,165,205,183,141,205,255,247,210,
    230,179,113,87,57,24,178,47,78,107,170,208,127,228,92,156,
    155,141,65,239,57,211,226,68,7,9,21,183,19,210,54,117,
    34,182,60,9,197,71,250,197,55,30,17,120,92,224,41,164,
    91,152,112,20,25,214,143,36,73,82,25,214,242,49,100,87,
    0,102,144,93,1,56,142,4,11,192,44,178,17,0,115,72,
    167,0,156,64,54,5,224,36,146,41,0,167,144,75,1,56,
    141,84,10,192,25,164,72,0,206,194,97,205,145,88,11,162,
    11,57,184,126,215,127,237,210,199,43,31,62,120,78,60,227,
    221,43,151,190,177,242,251,18,147,238,244,133,97,59,59,253,
    126,7,211,161,58,232,144,228,228,175,185,89,39,157,156,232,
    148,67,226,78,0,54,24,164,243,19,27,86,134,57,197,90,
    11,251,100,33,76,212,187,183,102,70,43,67,163,99,102,116,
    204,140,86,135,70,199,205,104,29,70,46,251,25,41,219,163,
    34,70,43,33,101,15,176,144,165,8,210,140,68,215,224,231,
    37,186,43,16,102,172,69,219,126,18,62,64,244,150,171,29,
    166,50,160,118,209,246,176,70,217,217,190,114,184,126,28,222,
    15,99,209,23,211,147,119,121,179,231,218,154,116,101,87,22,
    15,121,175,151,15,241,94,46,145,12,63,74,199,64,28,32,
    198,190,63,200,58,70,153,52,201,174,122,8,132,199,100,79,
    214,245,251,188,117,222,62,111,215,172,8,98,45,19,143,138,
    241,40,8,195,152,175,149,13,26,164,21,199,191,110,251,52,
    156,82,74,240,121,21,205,183,64,118,25,139,10,51,59,105,
    47,41,70,16,144,130,77,74,12,127,74,135,51,167,114,1,
    47,170,5,236,163,127,179,10,203,196,54,250,19,235,240,226,
    94,58,176,56,103,223,226,68,252,175,229,57,231,202,236,220,
    15,198,222,215,71,34,58,89,106,16,98,169,143,141,233,130,
    81,149,197,58,122,193,178,216,185,114,177,125,219,148,9,36,
    239,221,151,234,190,74,251,82,93,96,207,139,118,209,83,106,
    201,129,203,253,40,237,229,35,88,135,163,118,220,159,147,14,
    189,149,22,138,65,177,63,103,25,150,14,102,84,217,99,159,
    194,189,106,52,236,13,78,164,194,33,41,188,57,26,41,224,
    81,73,202,244,255,244,0,253,164,95,37,253,216,239,235,18,
    137,249,214,161,125,34,36,126,147,70,230,226,212,166,139,195,
    118,246,87,67,251,194,210,123,2,34,0,127,242,63,36,19,
    42,170,162,0,115,247,199,82,209,98,163,202,202,179,125,94,
    7,133,55,86,102,168,175,108,119,85,194,72,182,173,31,205,
    211,29,116,212,164,56,38,11,196,99,150,196,147,60,80,21,
    166,138,200,154,131,27,140,164,42,98,225,176,228,158,0,27,
    105,148,8,15,132,216,7,25,135,183,154,236,148,37,89,161,
    97,123,40,72,215,84,61,138,205,242,8,44,227,119,24,207,
    207,129,112,92,120,117,134,99,147,233,129,86,150,37,164,121,
    197,177,13,83,209,208,188,18,171,177,110,156,157,40,169,98,
    6,153,109,166,119,88,22,37,235,222,123,165,244,7,202,240,
    254,104,244,0,98,240,125,126,174,239,255,98,160,177,179,28,
    139,149,86,178,212,216,137,114,199,73,133,101,216,90,56,251,
    137,29,77,121,65,210,253,191,27,210,215,255,125,1,207,161,
    97,171,38,116,138,78,221,71,205,100,4,20,35,124,248,123,
    58,236,121,74,158,30,25,230,233,183,158,72,238,255,81,213,
    6,217,143,84,109,126,249,69,244,194,106,13,215,24,255,31,
    200,109,10,185,157,52,41,218,81,146,251,254,175,190,136,222,
    233,97,254,194,44,29,96,177,108,187,118,183,27,38,193,232,
    55,155,46,73,183,131,192,247,255,241,9,84,151,122,124,85,
    89,145,93,113,108,108,63,178,249,65,97,118,87,140,177,68,
    175,51,218,252,34,220,149,213,29,88,32,214,38,197,179,40,
    103,78,21,237,164,19,122,47,25,219,162,210,206,237,130,87,
    174,172,128,226,130,248,95,182,7,35,231,134,119,151,241,124,
    54,176,57,83,214,156,221,49,81,89,25,153,253,83,41,191,
    252,220,208,81,198,96,169,170,175,217,253,186,30,101,131,123,
    74,21,173,225,160,238,11,187,28,184,160,27,43,247,196,71,
    57,148,61,214,124,203,238,15,80,6,142,238,60,174,19,131,
    193,195,28,147,43,48,148,255,37,12,76,83,215,178,213,157,
    182,25,103,57,240,67,63,122,147,238,12,106,203,114,234,147,
    67,30,13,113,82,174,72,69,226,18,17,131,176,65,132,148,
    119,121,3,74,228,175,34,201,183,192,241,202,62,41,20,40,
    54,224,72,35,106,199,38,79,16,167,7,96,4,34,226,128,
    138,254,25,8,79,138,136,234,236,244,42,246,57,78,207,107,
    12,159,182,102,236,73,254,138,19,196,162,96,72,65,96,142,
    216,237,145,228,5,74,116,74,44,70,98,60,194,44,59,245,
    216,194,28,102,251,83,28,175,22,182,150,18,11,160,111,114,
    63,102,247,35,177,231,127,97,211,99,155,62,37,250,212,162,
    79,109,90,115,144,1,114,64,175,139,62,99,114,168,80,161,
    71,202,215,202,189,27,117,93,85,82,251,1,164,45,41,41,
    168,52,79,18,25,52,166,52,54,35,214,205,54,218,22,148,
    71,10,156,53,126,223,116,138,164,31,11,213,143,100,39,158,
    90,179,104,174,47,180,225,192,83,81,229,32,5,221,144,42,
    218,174,148,215,10,71,111,78,254,220,210,168,164,196,213,221,
    49,152,199,6,143,99,130,55,235,148,253,205,129,167,152,27,
    165,158,214,253,204,220,88,151,27,229,56,79,223,56,101,129,
    125,149,65,63,243,232,145,60,123,147,85,254,191,81,85,10,
    26,232,159,99,131,196,124,218,147,20,39,81,171,178,168,188,
    121,223,83,39,4,93,21,76,213,143,121,211,98,173,221,149,
    227,195,71,82,56,236,75,129,99,183,70,195,247,53,165,146,
    167,238,248,190,21,76,150,235,63,98,6,198,41,251,51,11,
    52,77,209,1,122,48,115,66,207,236,75,21,48,56,42,167,
    81,159,89,193,52,106,142,104,235,148,124,64,143,108,140,186,
    37,171,251,13,92,23,77,93,225,80,229,141,221,6,221,216,
    19,21,57,201,247,50,83,184,3,115,235,194,145,227,82,81,
    28,167,53,155,230,184,247,19,29,147,207,66,113,212,22,75,
    147,208,123,221,88,237,249,124,95,70,242,7,232,71,241,110,
    251,36,200,190,177,114,20,194,100,237,189,109,177,252,110,91,
    31,141,105,155,160,12,51,25,71,41,214,118,61,76,188,0,
    61,226,68,95,31,137,195,52,213,9,152,151,255,28,24,221,
    73,171,106,121,31,144,46,58,138,31,208,245,121,85,128,148,
    202,33,106,227,57,206,114,222,123,66,77,221,125,118,94,159,
    141,113,10,31,184,81,226,154,146,42,152,134,106,184,96,213,
    103,21,222,55,204,99,116,121,91,142,188,63,72,178,176,147,
    174,39,209,199,33,227,106,163,160,189,158,165,189,238,16,182,
    161,93,59,236,227,111,145,142,200,119,197,91,158,56,204,96,
    92,111,75,251,112,68,30,253,106,220,222,90,13,218,215,198,
    249,33,57,25,187,98,252,57,122,242,51,138,194,149,105,201,
    85,77,44,194,106,225,208,193,120,68,234,175,97,162,136,71,
    115,249,138,80,255,241,151,79,189,84,243,174,178,246,225,204,
    64,145,111,139,41,207,127,143,112,110,40,2,114,213,29,174,
    74,77,94,118,161,65,238,124,240,188,219,73,99,254,109,77,
    26,53,17,137,169,212,101,149,116,110,247,126,214,83,254,105,
    9,155,7,135,98,94,23,13,220,137,138,68,164,150,187,97,
    112,112,140,146,21,18,152,100,97,208,235,132,131,106,27,147,
    208,185,167,42,227,33,154,117,50,53,242,186,86,51,31,171,
    208,247,230,189,184,16,174,69,186,186,20,179,134,214,180,159,
    100,176,170,193,92,229,2,146,65,202,233,173,226,14,238,140,
    7,187,241,75,77,182,56,110,189,31,102,197,127,0,239,27,
    178,7,167,236,26,7,63,211,246,84,229,172,115,30,199,160,
    210,54,173,99,150,99,141,241,200,172,51,37,87,19,206,172,
    85,113,102,49,219,70,15,251,96,123,198,114,173,38,247,180,
    16,64,12,197,19,106,135,229,221,176,83,200,246,239,244,178,
    140,233,85,255,230,80,231,212,171,237,206,166,28,114,14,4,
    161,98,191,222,170,248,125,21,167,236,175,56,170,127,109,252,
    208,236,171,64,233,100,201,67,239,79,208,252,224,75,100,153,
    247,26,227,249,55,32,60,46,188,170,73,4,210,176,26,246,
    148,61,107,205,190,52,107,181,228,192,101,112,56,128,75,85,
    75,85,71,179,113,59,231,28,225,192,193,138,119,17,13,168,
    247,144,129,31,40,197,170,227,27,172,192,187,137,230,219,104,
    80,10,241,254,8,13,42,1,222,29,210,199,207,234,32,250,
    123,104,112,152,225,125,104,100,32,76,20,250,71,117,76,1,
    185,109,1,225,87,176,107,173,26,235,129,126,107,168,62,217,
    116,154,149,122,149,223,78,189,38,173,121,215,234,211,58,29,
    217,106,227,63,5,74,219,95,50,74,240,70,154,30,62,212,
    198,114,63,239,223,73,250,92,123,159,83,4,183,254,103,9,
    88,175,27,180,139,225,234,220,8,203,219,39,141,157,123,82,
    186,56,112,37,167,14,185,146,193,127,126,24,95,54,202,127,
    79,0,191,239,159,30,16,122,240,4,76,20,244,199,35,84,
    45,148,144,79,88,230,4,140,13,141,20,42,138,123,81,238,
    242,167,237,22,97,94,120,208,61,143,227,52,138,64,143,56,
    185,198,142,28,58,99,162,207,159,182,143,137,173,133,111,54,
    250,13,137,56,48,120,225,97,142,168,234,130,249,195,205,203,
    23,204,191,109,26,59,249,2,70,118,118,46,62,239,94,188,
    140,2,96,11,169,232,246,2,188,144,187,141,120,96,59,107,
    39,235,97,235,171,11,11,125,117,220,116,97,103,187,47,108,
    186,176,29,137,15,17,56,82,63,87,68,94,31,135,89,154,
    99,236,194,11,46,119,65,193,217,31,233,187,175,244,115,236,
    252,123,161,251,0,124,26,215,157,237,60,88,203,97,20,101,
    65,76,82,124,247,202,10,62,207,108,63,131,223,203,15,251,
    125,94,149,132,36,114,66,230,97,81,222,39,104,150,208,96,
    37,222,109,163,225,233,234,6,219,98,101,111,95,33,109,167,
    212,126,83,37,56,57,229,81,34,70,80,35,127,9,18,49,
    40,54,255,192,240,90,236,146,160,84,156,240,118,72,219,169,
    81,149,138,37,198,81,127,190,185,6,250,196,109,53,45,253,
    182,231,158,159,115,231,254,182,110,55,217,52,215,237,185,90,
    205,122,218,174,91,78,101,204,106,136,3,107,232,183,58,211,
    157,228,89,147,214,52,27,112,199,153,180,127,7,140,125,155,
    26,
};

EmbeddedPython embedded_m5_util_code_formatter(
    "m5/util/code_formatter.py",
    "/home/rachid/Documents/gem5-e1/src/python/m5/util/code_formatter.py",
    "m5.util.code_formatter",
    data_m5_util_code_formatter,
    3953,
    10989);

} // anonymous namespace