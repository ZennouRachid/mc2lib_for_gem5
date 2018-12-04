#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SimPoint[] = {
    120,156,189,88,109,115,27,73,17,238,89,201,178,165,216,177,
    156,196,121,179,239,178,20,23,34,160,98,221,113,132,59,184,
    16,56,238,82,20,20,248,114,107,170,226,232,40,182,214,187,
    99,105,101,105,87,236,142,147,232,202,174,162,112,10,248,3,
    252,2,190,192,119,254,31,244,211,179,43,175,237,4,174,10,
    116,137,53,26,205,246,204,116,247,243,116,79,207,134,84,252,
    91,224,207,79,249,147,31,43,162,136,255,20,141,136,198,138,
    122,14,41,237,80,116,149,14,22,40,251,62,69,11,244,138,
    168,87,35,93,163,19,238,212,233,139,26,37,239,18,100,174,
    137,204,46,69,139,175,147,89,150,117,151,104,84,151,17,135,
    166,45,210,11,212,107,208,211,100,141,234,122,145,14,90,148,
    189,34,165,84,162,104,119,218,46,229,151,168,215,100,153,183,
    88,166,37,50,255,132,76,241,176,137,135,144,143,154,20,181,
    232,21,107,124,137,162,75,162,0,239,184,44,157,21,138,86,
    164,115,153,162,203,210,89,45,23,111,83,111,173,236,95,169,
    244,175,86,250,215,164,191,74,122,141,134,235,52,188,78,195,
    27,180,175,40,106,99,41,54,240,89,239,38,233,58,13,111,
    81,239,22,105,254,187,73,39,138,84,180,86,153,113,91,102,
    92,153,205,216,144,25,155,212,219,36,205,127,27,118,198,18,
    237,116,214,25,134,248,95,252,175,195,80,144,89,230,230,185,
    206,242,56,77,252,56,217,79,99,7,207,23,209,0,184,16,
    77,173,64,240,19,32,56,33,129,143,117,103,4,143,121,5,
    69,67,6,199,193,14,81,141,110,49,194,252,99,88,163,35,
    238,212,105,95,30,12,235,133,196,49,227,178,70,71,68,195,
    5,58,146,145,157,167,201,6,213,77,67,92,127,0,215,219,
    167,60,23,79,119,121,163,157,14,118,223,22,173,13,180,222,
    18,221,204,42,55,254,36,200,130,177,191,19,143,159,164,113,
    98,58,208,220,52,161,254,120,146,102,102,20,239,153,37,136,
    249,73,48,214,190,111,90,252,35,227,57,38,54,108,178,169,
    243,207,33,38,54,184,51,202,77,22,79,204,202,108,182,63,
    78,163,195,145,54,151,120,228,23,50,242,56,203,210,172,3,
    135,120,104,12,154,201,65,223,64,193,49,182,232,64,51,105,
    242,95,115,211,29,164,99,221,205,130,112,16,71,221,79,211,
    240,112,172,19,147,119,251,122,252,224,190,126,175,187,119,24,
    143,162,238,238,135,63,232,78,166,102,144,38,221,241,131,46,
    43,163,179,36,24,117,207,90,182,197,18,87,176,236,139,184,
    239,23,234,13,244,104,162,51,88,155,95,198,150,106,89,93,
    85,111,171,154,90,83,43,42,110,148,248,45,86,241,251,123,
    129,159,83,68,32,67,168,10,60,29,58,150,14,64,234,0,
    63,192,86,3,90,108,31,131,209,87,116,226,208,111,107,16,
    56,230,182,206,97,243,246,12,187,161,132,141,93,105,145,142,
    25,223,5,134,239,203,77,89,104,73,22,114,232,136,91,6,
    182,78,199,28,151,44,201,67,220,30,52,41,251,27,250,195,
    38,232,171,18,162,221,163,6,227,94,159,225,110,217,10,75,
    162,56,131,163,61,16,181,211,42,71,211,124,107,18,152,129,
    183,82,162,194,46,18,116,183,211,196,2,184,31,39,81,9,
    168,165,196,126,60,98,74,120,240,159,172,38,98,163,52,152,
    137,193,105,225,40,205,181,208,74,214,246,64,58,3,233,253,
    137,44,131,93,161,143,76,142,116,30,130,66,76,45,187,34,
    52,192,106,243,164,133,135,24,190,134,165,111,11,9,218,76,
    131,6,147,160,195,36,88,86,11,220,219,116,150,213,101,181,
    29,195,135,33,140,2,53,234,37,35,254,65,22,7,69,7,
    14,101,155,18,157,252,167,0,22,66,240,72,194,27,207,62,
    135,229,118,148,3,156,17,181,131,71,194,17,38,11,75,62,
    68,188,50,126,0,125,129,134,141,2,97,230,141,101,68,54,
    69,203,226,88,198,225,197,235,148,255,149,216,147,12,253,17,
    21,20,57,169,49,7,218,196,193,202,89,128,71,175,243,134,
    127,20,102,21,169,64,32,55,131,56,79,95,216,24,70,95,
    114,217,14,135,199,147,233,103,123,67,29,154,252,14,15,60,
    75,15,221,48,72,146,212,184,65,20,185,129,225,24,223,59,
    52,58,119,77,234,222,205,59,128,205,187,93,178,102,182,222,
    116,162,61,233,88,170,68,113,104,56,123,92,149,31,18,130,
    185,54,12,250,32,141,114,30,199,212,190,54,94,27,51,224,
    220,84,20,16,78,248,16,197,182,44,135,40,253,184,212,192,
    230,146,70,73,147,92,143,246,37,61,133,163,32,207,125,104,
    32,227,66,46,88,253,60,24,29,106,89,61,231,245,88,33,
    116,173,14,115,205,58,55,97,68,105,179,24,146,164,73,52,
    101,189,226,240,125,108,121,179,200,61,32,222,58,147,110,145,
    219,6,127,55,212,117,39,172,23,84,107,148,116,187,14,131,
    73,192,86,5,222,76,189,19,78,22,29,71,194,93,108,1,
    85,189,239,160,135,201,222,59,104,238,162,249,22,154,123,165,
    185,243,178,121,229,188,205,162,186,35,134,134,181,194,164,89,
    4,125,113,38,130,110,157,70,16,39,179,157,35,57,32,135,
    181,74,36,212,96,116,246,168,8,28,196,24,3,204,49,6,
    81,137,24,62,53,171,156,199,134,219,222,45,108,245,13,110,
    238,221,205,239,185,150,97,238,32,200,221,36,61,165,181,139,
    135,54,93,129,212,222,38,188,93,161,109,191,66,91,207,133,
    4,56,235,125,19,77,253,77,238,254,246,215,231,238,190,117,
    247,207,177,207,114,193,171,21,225,83,75,133,32,5,48,152,
    29,102,159,115,51,189,1,199,87,93,126,131,143,177,167,201,
    109,62,153,196,239,56,156,222,151,195,73,14,56,169,230,202,
    140,53,92,40,59,13,120,127,191,70,215,139,83,39,199,177,
    48,201,210,151,83,55,221,119,13,149,10,61,188,155,111,221,
    205,63,226,212,225,62,58,245,115,145,38,50,61,65,152,219,
    176,135,15,76,156,240,111,44,245,248,101,168,229,96,144,95,
    190,111,163,220,22,36,126,113,224,48,36,130,129,83,98,32,
    121,142,171,18,164,183,185,2,208,154,1,0,19,158,96,147,
    150,120,191,166,110,112,92,87,124,143,15,248,152,131,84,127,
    38,169,59,21,253,137,224,90,246,96,17,196,18,35,101,156,
    64,50,255,29,73,192,191,230,148,177,101,32,78,22,145,224,
    0,201,63,16,81,123,232,252,146,254,82,201,22,229,209,80,
    43,42,147,106,152,212,103,97,34,152,124,165,244,95,63,27,
    41,240,55,135,20,196,36,38,108,169,247,206,217,196,35,165,
    136,248,64,155,121,1,178,100,151,247,161,201,179,83,56,144,
    100,55,212,85,199,146,65,120,242,1,154,15,103,17,170,202,
    177,57,40,117,231,124,86,172,156,4,190,77,43,187,216,185,
    46,186,174,46,138,21,229,2,82,138,82,17,189,63,131,216,
    247,184,209,124,91,82,114,189,35,92,94,152,30,104,29,160,
    123,226,40,190,228,113,5,240,74,46,121,246,50,231,217,10,
    64,232,88,126,36,21,32,133,156,201,187,226,137,109,235,163,
    25,192,22,59,52,47,231,26,79,48,252,225,40,24,239,69,
    193,163,1,182,192,62,97,25,63,78,169,116,187,170,52,184,
    175,222,164,183,252,252,168,84,254,249,92,235,201,135,8,130,
    82,105,33,122,148,134,18,239,191,25,104,119,172,199,123,124,
    97,28,196,19,119,127,20,244,5,137,90,97,212,103,165,81,
    70,160,172,196,166,100,133,28,7,250,118,234,134,105,194,73,
    237,48,52,105,230,70,154,11,115,29,185,247,93,201,136,110,
    156,187,193,30,63,13,66,99,185,124,54,12,165,36,10,178,
    126,46,213,207,193,11,116,231,142,164,207,87,227,152,235,191,
    33,205,138,0,155,250,37,123,160,6,146,202,206,134,6,159,
    25,124,41,51,83,155,136,62,70,243,0,77,151,170,135,232,
    188,176,251,17,175,216,199,210,112,79,67,109,56,77,71,116,
    43,101,158,96,70,126,49,22,95,124,149,88,212,117,234,45,
    148,17,217,128,164,94,196,221,14,109,19,137,187,215,42,7,
    47,73,187,44,131,43,229,107,157,203,50,184,74,189,54,69,
    13,25,89,67,64,47,254,175,1,45,129,49,247,144,248,253,
    255,53,142,189,31,127,173,58,123,143,168,56,179,223,20,195,
    170,106,208,138,141,225,161,42,11,212,170,53,114,179,93,191,
    64,42,63,204,116,96,180,69,228,157,57,91,39,225,111,55,
    52,167,81,121,177,66,252,116,102,200,137,148,40,211,107,2,
    84,249,134,10,175,197,228,221,159,145,90,16,165,226,79,228,
    29,148,24,238,59,182,90,60,37,95,99,102,63,222,197,36,
    250,133,127,214,7,182,24,132,84,48,153,232,36,242,222,197,
    132,247,168,90,212,137,204,92,145,71,210,153,82,165,104,168,
    169,107,92,56,92,140,49,228,175,138,117,130,92,123,22,85,
    243,198,80,24,250,135,146,161,29,120,244,52,163,122,72,75,
    54,135,206,210,167,247,120,230,254,141,139,244,147,141,248,146,
    140,59,196,127,124,206,197,139,164,245,114,64,234,154,115,194,
    156,197,229,245,144,52,88,240,191,201,96,81,220,15,170,131,
    2,132,68,74,164,71,218,232,115,100,49,112,117,113,47,139,
    52,159,121,233,148,47,4,139,50,200,19,124,127,254,199,5,
    88,48,41,51,24,31,23,170,193,7,198,186,90,119,154,141,
    166,146,83,247,220,11,225,202,88,99,54,246,22,149,5,241,
    52,247,48,98,128,91,113,28,138,26,126,245,29,179,188,176,
    178,48,46,89,143,217,3,19,136,203,237,104,59,24,219,183,
    35,242,188,184,71,229,54,150,228,109,29,234,8,239,187,104,
    238,207,8,242,67,204,198,157,117,252,96,171,180,120,203,90,
    252,36,75,247,244,175,226,220,232,68,103,246,221,144,188,194,
    27,63,16,158,92,156,192,46,42,196,214,206,61,143,178,128,
    251,235,231,70,115,157,197,193,40,254,82,159,242,138,135,197,
    11,111,214,0,201,248,53,227,114,132,159,73,175,226,200,76,
    247,33,150,201,162,175,153,86,228,159,79,222,16,28,213,37,
    230,78,43,91,254,218,59,237,35,185,194,2,90,188,30,106,
    46,53,249,42,207,223,171,252,237,112,98,114,106,124,185,92,
    81,117,254,110,243,119,219,89,110,55,235,205,38,203,93,90,
    86,246,255,29,166,98,203,185,179,214,84,255,6,185,13,199,
    60,
};

EmbeddedPython embedded_m5_internal_param_SimPoint(
    "m5/internal/param_SimPoint.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_SimPoint.py",
    "m5.internal.param_SimPoint",
    data_m5_internal_param_SimPoint,
    2337,
    6736);

} // anonymous namespace