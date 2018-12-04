#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AtomicSimpleCPU[] = {
    120,156,197,89,89,115,27,199,17,238,89,128,32,1,145,34,
    40,30,186,37,200,22,45,216,142,8,93,180,157,88,81,66,
    29,149,82,202,166,105,80,41,81,116,42,91,203,221,33,177,
    224,30,168,221,161,36,184,200,170,36,84,229,170,202,91,242,
    148,167,84,94,226,247,252,191,164,187,103,23,28,66,128,35,
    39,17,34,146,131,198,76,207,76,31,95,247,244,140,92,200,
    254,141,225,223,143,241,47,253,198,2,240,240,87,64,0,16,
    10,216,180,64,72,11,188,89,216,29,131,228,14,120,99,240,
    10,96,179,0,178,0,135,72,20,225,171,2,68,55,128,120,
    230,152,103,3,188,241,65,60,147,188,238,4,4,69,238,177,
    160,91,1,57,6,155,37,120,26,205,64,81,142,195,110,5,
    146,87,32,132,136,4,108,116,171,57,255,4,108,150,145,231,
    34,242,84,152,231,31,196,147,13,150,105,144,248,189,50,120,
    21,120,133,18,159,0,239,4,11,128,59,78,50,49,5,222,
    20,19,39,193,59,201,196,116,190,120,21,54,103,114,250,148,
    65,207,26,244,156,65,207,27,244,130,65,159,54,232,51,6,
    125,214,160,207,25,244,121,131,190,96,208,23,13,250,146,65,
    95,54,232,154,65,95,49,232,119,12,250,93,131,190,106,208,
    139,6,253,158,65,95,51,232,186,65,191,111,208,31,24,244,
    135,6,253,61,131,190,206,244,52,200,25,104,47,65,187,1,
    237,27,176,45,192,171,146,217,17,12,207,54,111,130,44,66,
    251,22,108,222,2,137,191,55,225,80,128,240,102,140,25,183,
    121,198,169,222,140,59,60,99,25,54,151,65,226,239,29,61,
    99,2,214,235,243,8,89,255,159,248,175,46,144,82,147,216,
    60,151,73,234,199,145,237,71,219,177,111,209,248,56,53,4,
    114,151,154,66,134,246,7,132,246,14,48,212,81,118,68,251,
    1,174,32,160,141,64,182,104,7,175,0,103,15,4,125,105,
    23,96,31,137,34,108,243,64,187,152,113,28,32,134,103,96,
    31,160,61,6,251,220,179,254,52,58,15,69,85,98,152,238,
    18,76,245,40,206,165,209,13,220,104,189,78,187,175,178,212,
    138,164,94,98,217,212,2,54,118,199,73,156,208,94,81,113,
    232,187,235,126,216,9,228,131,181,159,213,73,1,85,38,45,
    194,78,156,168,192,223,82,19,196,109,71,78,40,109,91,85,
    240,75,130,83,149,175,80,115,85,196,175,237,216,143,80,12,
    212,43,85,137,223,81,83,189,217,118,24,123,123,129,84,39,
    176,231,49,247,60,74,146,56,169,147,93,154,212,40,106,58,
    187,59,138,228,12,105,139,58,9,200,77,250,4,155,70,43,
    14,101,35,113,220,150,239,53,30,198,238,94,40,35,149,54,
    118,100,184,124,93,222,108,108,237,249,129,215,216,248,228,163,
    70,167,171,90,113,212,8,151,27,40,140,76,34,39,104,12,
    84,112,9,25,79,209,234,47,252,29,59,147,178,37,131,142,
    76,72,233,244,36,237,44,38,197,172,184,36,10,98,70,76,
    9,191,148,123,115,220,244,230,223,51,111,90,89,238,66,135,
    138,204,187,22,28,48,65,46,171,147,55,201,137,5,242,29,
    170,137,174,217,17,112,104,193,207,11,196,112,128,109,17,19,
    206,165,158,39,219,156,112,244,74,227,112,128,222,30,67,103,
    126,125,129,23,154,224,133,44,216,199,22,221,92,132,3,204,
    104,200,137,93,216,238,150,33,249,27,209,237,50,129,89,68,
    0,27,251,37,68,65,177,135,2,141,93,210,196,243,19,178,
    119,147,96,91,175,228,189,113,186,212,113,84,171,57,149,59,
    7,77,196,78,94,141,35,237,199,109,63,242,114,191,106,100,
    108,251,1,34,163,73,246,227,213,152,45,136,157,30,27,25,
    205,13,226,84,50,186,120,237,230,52,49,18,247,118,135,151,
    161,93,73,30,158,236,201,212,37,36,33,194,244,138,36,1,
    173,54,2,116,52,41,176,231,104,135,115,140,133,42,162,161,
    132,88,168,35,22,38,197,24,82,23,172,73,113,82,172,250,
    100,74,151,116,35,132,20,115,96,124,3,218,29,2,118,45,
    72,46,112,200,226,175,32,159,81,92,238,115,204,211,216,151,
    100,0,221,139,81,143,142,213,157,251,12,21,196,12,114,222,
    165,32,70,55,146,239,199,160,93,202,28,141,240,209,192,72,
    186,212,34,59,45,99,225,226,69,72,255,12,104,80,68,192,
    62,100,72,57,44,32,20,170,128,161,139,169,1,123,23,112,
    195,95,51,192,178,252,192,158,87,45,63,141,95,232,136,38,
    154,19,220,58,70,201,90,247,139,173,182,116,85,122,25,59,
    158,197,123,53,215,137,162,88,213,28,207,171,57,10,35,126,
    107,79,201,180,166,226,218,98,90,39,239,53,207,229,224,233,
    173,215,237,200,38,19,26,49,158,239,42,204,37,179,252,133,
    35,49,149,10,125,223,138,189,20,251,105,234,142,84,205,42,
    205,32,227,198,44,0,67,195,38,86,218,22,249,40,88,87,
    114,9,116,102,41,229,104,73,101,176,205,201,202,13,156,52,
    181,73,2,238,103,140,145,214,207,157,96,79,242,234,41,174,
    135,2,17,169,101,24,69,14,58,67,186,228,170,179,62,81,
    28,121,93,20,207,119,111,211,206,103,178,76,68,248,155,71,
    236,141,99,91,194,207,146,88,176,220,98,134,184,82,142,58,
    202,232,10,216,231,34,115,59,34,240,16,83,71,221,226,224,
    103,149,8,177,205,15,136,162,201,205,171,212,44,82,243,30,
    53,215,114,173,223,178,234,83,253,170,179,6,22,235,235,22,
    50,205,122,241,244,213,177,120,58,123,20,79,152,225,214,247,
    249,12,109,23,140,184,40,144,238,201,189,44,140,40,226,208,
    221,24,113,196,202,241,131,7,171,25,1,180,225,106,243,44,
    109,117,5,155,107,139,233,181,154,198,91,173,229,164,181,40,
    62,2,121,141,6,117,14,35,136,55,47,144,209,13,16,239,
    24,32,110,214,136,131,16,220,124,151,154,226,48,171,191,63,
    114,171,239,104,171,255,132,182,155,204,80,54,197,232,170,8,
    151,32,66,174,232,29,116,95,98,211,61,77,246,55,45,127,
    26,143,184,167,209,57,60,181,216,252,116,112,221,230,131,139,
    15,63,174,145,243,52,214,30,203,137,18,57,97,187,0,11,
    217,137,148,210,145,209,73,226,151,221,90,188,93,83,144,11,
    116,119,49,93,90,76,63,197,124,82,187,119,100,238,44,119,
    36,178,67,177,175,115,1,153,66,249,17,126,167,165,30,189,
    116,37,31,26,252,205,182,117,232,235,154,197,206,14,35,244,
    12,187,194,202,93,193,201,15,11,23,202,121,163,240,67,165,
    231,7,210,100,141,246,170,176,19,10,226,52,6,187,225,2,
    250,35,116,166,4,177,223,2,23,170,2,126,3,100,97,52,
    100,22,217,28,49,121,212,16,103,250,11,224,44,48,224,4,
    210,117,35,157,58,204,129,225,146,126,204,172,250,64,250,41,
    252,206,72,33,249,177,81,200,138,23,51,104,138,189,160,97,
    215,188,209,209,80,60,30,55,100,118,12,48,98,227,8,209,
    69,225,213,227,217,136,171,21,182,129,84,111,217,47,19,122,
    23,155,4,122,118,228,21,74,192,231,197,172,165,161,193,168,
    249,152,154,79,122,97,43,242,190,183,39,219,229,254,140,105,
    28,22,182,78,57,27,36,64,145,69,158,30,87,84,93,245,
    173,195,37,44,100,145,125,159,184,111,97,35,241,126,42,248,
    66,13,116,5,66,204,80,107,145,203,15,45,129,215,106,44,
    25,94,241,181,90,95,159,155,186,100,96,140,230,127,156,38,
    40,189,28,75,205,108,151,85,109,177,158,215,181,67,169,121,
    57,138,88,35,159,222,13,156,112,203,115,238,253,138,118,162,
    237,220,60,182,172,92,246,170,41,59,197,133,24,38,62,127,
    253,52,215,225,249,40,202,209,187,184,112,79,118,142,5,47,
    118,57,37,60,105,201,90,40,195,45,188,132,182,252,78,109,
    59,112,118,216,47,133,76,183,47,114,221,20,59,214,8,95,
    78,28,41,21,2,171,113,205,141,35,76,127,123,174,138,147,
    154,39,177,188,151,94,237,122,141,115,103,205,79,107,206,22,
    142,58,174,210,56,63,30,169,92,81,57,201,78,202,197,211,
    238,11,34,71,229,87,27,111,221,62,86,145,135,208,43,30,
    244,89,193,121,134,74,40,174,15,117,216,224,33,131,55,60,
    213,213,41,107,133,154,101,106,26,96,30,190,111,217,147,63,
    192,133,127,73,59,144,177,74,226,188,85,182,212,252,235,129,
    186,70,243,211,215,195,245,175,111,18,174,178,8,155,99,121,
    208,150,136,83,142,211,181,145,218,50,37,252,205,74,222,121,
    130,219,73,238,156,202,59,79,114,59,205,157,213,188,115,134,
    219,83,220,57,155,191,202,205,113,231,60,108,46,128,87,226,
    158,211,148,29,198,255,219,236,192,225,53,170,192,250,195,255,
    52,41,52,127,248,255,16,189,121,15,178,26,97,88,66,16,
    166,94,83,58,33,180,69,94,30,155,74,241,101,251,194,48,
    76,218,110,34,29,37,181,155,174,142,70,87,206,44,122,223,
    63,30,69,250,235,101,234,195,158,90,135,92,32,117,231,216,
    123,249,131,26,189,226,241,179,174,226,130,148,234,213,31,241,
    147,25,155,193,182,116,201,122,4,204,82,207,26,148,49,34,
    249,162,95,52,109,17,93,152,18,179,211,233,200,200,107,222,
    160,121,55,193,44,48,153,103,20,168,160,180,246,39,48,42,
    151,130,152,195,234,229,245,104,164,12,105,232,202,238,172,246,
    226,111,68,142,101,16,255,37,7,113,157,174,187,71,169,187,
    73,25,79,39,235,94,158,110,62,234,249,228,202,80,132,110,
    59,41,222,193,66,186,227,188,1,23,86,83,92,135,102,223,
    213,210,208,25,169,31,238,5,136,65,219,115,148,99,167,202,
    9,130,148,55,249,142,83,104,71,126,92,26,48,248,38,107,
    249,120,86,127,199,237,205,41,175,109,111,12,114,149,57,120,
    173,23,190,167,90,188,223,191,227,161,13,40,38,249,27,35,
    146,211,137,39,3,137,187,13,156,169,8,122,217,13,218,147,
    88,108,196,93,188,179,141,115,39,206,179,237,145,29,208,20,
    28,191,167,29,200,68,120,64,139,18,30,209,243,130,127,172,
    114,169,44,184,242,233,123,232,55,250,74,189,190,143,32,191,
    183,116,211,38,228,105,36,171,69,88,34,219,252,191,3,126,
    115,212,208,230,183,208,188,90,161,40,224,187,236,170,19,234,
    7,46,30,207,110,189,169,206,54,252,238,74,181,92,243,67,
    106,174,247,130,230,251,52,155,28,22,46,47,229,202,47,105,
    229,239,59,169,236,169,206,207,176,225,50,199,203,0,214,196,
    137,220,214,90,34,233,209,14,5,56,63,144,11,23,211,175,
    132,106,166,111,220,75,28,164,231,251,122,83,153,248,78,224,
    127,45,217,48,131,5,36,209,206,12,28,69,199,62,249,236,
    190,186,58,108,112,205,161,55,142,173,64,62,117,130,93,180,
    228,224,85,214,187,169,194,160,239,87,72,70,123,161,253,185,
    12,227,164,251,121,236,73,198,175,57,190,226,121,73,211,137,
    118,36,186,144,45,210,111,183,149,172,98,214,107,228,92,181,
    129,50,28,231,29,98,92,28,204,140,59,216,155,15,130,216,
    221,149,94,198,115,113,56,207,195,56,36,103,244,107,212,115,
    94,46,235,165,129,75,96,121,145,132,78,64,70,9,190,197,
    109,228,153,126,57,209,39,159,197,174,19,172,116,240,194,250,
    173,155,152,156,67,108,134,155,248,238,154,31,63,148,207,125,
    87,14,177,217,209,120,191,164,184,195,227,245,149,92,138,161,
    0,67,30,117,174,111,240,65,188,71,100,62,183,223,142,122,
    238,99,76,169,79,208,167,136,187,254,249,107,73,236,202,52,
    205,231,15,182,97,198,196,145,158,15,241,43,227,160,208,165,
    106,238,88,15,223,50,6,149,112,156,124,18,185,227,35,232,
    19,94,239,216,188,172,158,161,20,168,222,25,126,168,24,107,
    140,42,45,235,91,188,126,189,187,167,31,235,176,161,103,241,
    242,68,89,148,232,115,26,63,45,172,119,172,130,168,136,41,
    81,196,207,42,126,86,173,201,106,185,88,46,35,223,137,73,
    241,159,254,92,198,196,95,177,46,207,150,197,191,0,214,199,
    175,101,
};

EmbeddedPython embedded_m5_internal_param_AtomicSimpleCPU(
    "m5/internal/param_AtomicSimpleCPU.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_AtomicSimpleCPU.py",
    "m5.internal.param_AtomicSimpleCPU",
    data_m5_internal_param_AtomicSimpleCPU,
    2722,
    8386);

} // anonymous namespace