#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_SrcClockDomain[] = {
    120,156,197,89,109,115,220,72,17,238,209,202,107,239,198,142,
    215,241,75,94,236,196,58,72,200,2,21,239,29,71,184,131,
    11,129,187,36,117,192,7,95,78,166,136,179,71,161,146,165,
    217,181,214,90,105,75,26,39,217,43,155,15,56,188,252,1,
    126,192,21,95,224,59,255,15,186,123,52,178,252,86,184,10,
    178,196,187,179,163,81,207,75,247,243,116,79,207,36,128,226,
    223,20,126,127,142,223,252,27,1,16,226,71,64,12,48,20,
    208,181,64,72,11,194,69,216,155,130,236,135,16,78,193,91,
    128,110,13,100,13,142,176,98,195,87,53,72,222,7,146,89,
    98,153,109,8,167,207,147,153,229,113,103,32,182,185,197,130,
    113,19,228,20,116,235,240,34,89,0,91,78,195,94,19,178,
    183,32,132,72,4,108,143,91,70,126,6,186,13,148,185,141,
    50,77,150,249,39,201,20,47,27,244,146,228,195,6,132,77,
    120,139,43,190,2,225,21,94,0,206,56,203,149,57,8,231,
    184,114,21,194,171,92,153,55,131,183,160,187,96,234,215,42,
    245,197,74,125,169,82,95,174,212,87,42,245,235,92,159,7,
    185,0,131,27,48,184,9,131,91,208,19,16,182,104,58,52,
    194,203,238,42,72,27,6,107,208,93,3,137,159,85,56,18,
    32,194,133,74,143,219,220,227,90,217,227,14,247,88,135,238,
    58,72,252,220,209,61,102,96,171,189,140,80,69,255,194,127,
    109,132,11,212,44,22,175,100,150,71,105,226,69,73,47,141,
    44,122,63,77,5,129,27,80,81,43,80,126,66,40,143,128,
    33,198,181,35,202,135,56,130,128,1,2,104,209,12,97,13,
    110,30,10,122,24,212,224,0,43,54,244,248,197,192,46,36,
    14,17,187,5,56,0,24,76,193,1,183,108,189,72,86,193,
    86,117,134,103,143,224,209,111,177,47,189,221,198,137,182,218,
    52,251,38,175,90,209,170,55,120,109,138,84,241,70,126,230,
    15,189,173,44,120,18,167,193,222,211,116,232,71,73,155,214,
    175,26,164,196,112,148,102,42,142,118,212,12,9,123,137,63,
    148,158,167,154,248,144,97,79,21,41,84,92,217,248,56,72,
    163,4,87,129,106,229,42,139,70,106,174,236,237,13,211,112,
    63,150,234,10,182,252,146,91,158,101,89,154,181,201,44,46,
    21,138,138,209,94,95,209,50,135,52,69,155,214,199,69,190,
    133,69,103,55,29,202,78,230,7,187,81,216,121,154,6,251,
    67,153,168,188,211,151,195,135,15,228,7,157,157,253,40,14,
    59,219,31,255,168,51,26,171,221,52,233,12,31,118,112,49,
    50,75,252,184,115,158,126,27,40,119,141,6,127,29,245,189,
    98,145,187,50,30,201,140,116,206,175,210,196,98,86,44,138,
    59,162,38,22,196,156,136,234,6,203,233,42,150,127,47,176,
    180,10,143,69,56,69,129,173,5,135,92,33,192,218,132,37,
    65,88,35,228,80,75,4,166,47,224,200,130,223,214,72,224,
    16,75,27,221,236,78,137,227,128,221,76,143,52,13,135,136,
    245,20,66,249,245,26,15,52,195,3,89,112,128,37,130,108,
    195,33,250,49,74,98,19,150,123,13,200,254,70,245,65,131,
    168,44,18,128,237,131,58,114,192,46,57,160,153,75,154,132,
    81,70,230,118,137,180,237,166,105,77,243,141,145,175,118,221,
    57,131,13,154,136,49,222,76,19,13,99,47,74,66,3,171,
    38,70,47,138,145,24,46,217,143,71,99,177,56,245,75,49,
    50,90,16,167,185,100,114,241,216,238,60,9,146,116,111,196,
    195,208,172,180,30,238,28,202,60,32,34,33,193,244,136,180,
    2,26,237,221,147,195,37,175,94,162,9,110,49,21,90,72,
    134,58,82,161,141,84,152,21,83,88,91,179,102,197,85,177,
    25,145,37,3,82,141,8,98,27,94,252,3,52,26,2,246,
    44,200,214,216,95,241,35,8,50,114,202,3,118,120,122,247,
    37,233,175,91,209,229,17,87,221,120,192,76,65,202,160,228,
    35,242,96,68,145,160,159,130,65,189,192,25,217,163,121,145,
    141,169,68,113,26,198,194,193,109,200,255,10,104,79,36,192,
    1,20,68,57,170,33,19,90,128,142,139,113,1,91,87,112,
    194,63,48,191,138,224,192,192,171,221,40,79,95,107,127,166,
    58,71,183,45,116,146,231,227,47,118,6,50,80,249,58,54,
    188,76,247,157,192,79,146,84,57,126,24,58,190,66,127,223,
    217,87,50,119,84,234,220,203,219,4,158,123,203,112,167,28,
    111,60,146,46,87,52,97,194,40,80,24,73,22,249,129,29,
    49,151,10,161,223,77,195,28,219,169,107,95,42,183,69,61,
    200,184,41,47,128,153,225,145,40,77,139,114,228,171,159,154,
    21,232,184,82,55,100,201,101,220,227,80,21,196,126,158,123,
    180,2,110,103,138,145,214,175,252,120,95,242,232,57,142,135,
    11,162,170,94,195,4,34,208,13,82,197,104,206,234,36,105,
    18,142,113,117,81,240,33,77,124,163,136,67,68,191,101,164,
    222,52,150,117,252,173,139,21,43,176,11,194,213,13,233,86,
    72,109,96,200,69,129,58,18,240,8,3,71,219,98,215,103,
    141,136,176,238,247,168,70,157,221,187,84,220,163,226,59,84,
    220,55,74,191,91,205,231,78,107,206,10,88,172,110,80,43,
    20,43,189,233,171,19,222,116,243,216,155,48,188,109,29,240,
    246,57,168,85,188,162,70,170,103,143,11,39,34,127,67,176,
    209,223,72,148,189,7,247,212,42,255,105,194,77,247,38,77,
    245,30,22,247,239,229,247,29,205,54,103,215,207,157,36,61,
    166,184,67,47,117,0,35,130,187,107,100,243,10,133,251,21,
    10,187,14,73,16,127,221,111,83,97,95,100,244,239,78,218,
    232,125,109,244,207,105,182,217,130,99,115,204,173,166,8,136,
    32,132,68,185,201,125,137,197,248,58,153,191,106,248,235,184,
    189,189,72,110,225,142,197,214,167,77,235,67,222,180,120,227,
    227,172,208,196,176,193,148,169,212,9,131,94,13,86,138,221,
    40,167,237,98,148,165,111,198,78,218,115,20,152,5,61,186,
    151,111,220,203,63,193,96,226,60,62,182,118,17,56,50,57,
    34,199,215,129,128,44,161,162,4,159,105,168,103,111,2,201,
    27,6,63,121,158,246,123,157,174,120,197,70,132,192,48,18,
    150,65,130,35,31,230,44,20,240,38,0,67,179,132,129,20,
    121,78,83,53,25,131,154,184,142,158,94,65,128,190,196,205,
    156,8,246,103,224,12,85,192,159,128,12,140,118,44,220,154,
    253,197,248,12,73,230,191,3,14,1,231,236,62,58,97,164,
    29,135,37,208,89,242,143,88,84,111,70,191,130,191,84,226,
    135,217,50,106,69,222,82,117,25,187,116,25,70,230,82,219,
    130,125,210,107,200,234,232,94,36,198,254,161,211,193,187,39,
    67,17,39,42,108,3,169,222,45,44,51,122,18,143,214,243,
    242,24,20,10,190,171,98,209,210,196,96,206,124,68,197,199,
    165,207,10,211,246,206,150,182,126,58,90,86,246,9,79,135,
    155,109,154,223,230,21,207,79,243,158,120,114,24,78,93,161,
    240,234,207,72,248,7,88,72,60,141,9,62,62,2,29,124,
    144,48,84,90,132,247,145,37,240,16,137,185,194,91,62,68,
    234,195,162,171,115,5,38,168,249,114,136,160,208,114,34,42,
    179,85,54,181,189,74,200,53,154,84,188,153,128,159,17,160,
    143,98,127,184,19,250,143,247,104,34,154,45,48,126,101,153,
    165,183,170,75,39,159,16,23,173,158,31,63,49,42,188,154,
    64,22,250,8,199,45,151,206,110,16,166,1,71,131,95,239,
    74,103,40,135,59,120,240,220,141,70,78,47,246,251,140,74,
    173,80,237,11,163,154,98,88,43,158,203,49,35,167,4,96,
    51,117,130,52,193,192,183,31,168,52,115,66,137,73,189,12,
    157,7,14,71,77,39,202,29,127,7,223,250,129,210,28,63,
    233,164,156,72,249,89,63,231,156,105,239,53,85,39,132,170,
    135,7,237,8,115,199,33,148,73,131,222,36,56,194,80,230,
    196,30,160,93,6,119,23,60,214,169,177,14,86,159,82,241,
    144,138,14,84,55,221,119,139,227,79,128,9,6,57,153,170,
    46,86,173,134,165,150,206,248,232,115,234,157,159,245,212,111,
    46,227,169,210,134,238,148,241,215,58,73,202,105,58,41,82,
    217,160,64,223,109,154,198,43,92,206,114,227,156,105,188,202,
    229,60,55,182,76,227,2,151,215,184,113,209,92,63,45,113,
    227,50,116,87,32,172,115,203,117,10,12,211,255,109,96,96,
    215,154,144,83,169,255,105,60,112,127,250,127,88,185,251,24,
    138,204,224,162,88,32,170,106,205,233,190,3,97,82,226,170,
    78,124,186,94,189,128,144,94,144,73,95,73,141,209,221,137,
    104,202,33,69,79,251,250,216,199,207,102,166,79,75,165,142,
    56,41,26,47,49,116,230,246,140,174,236,248,238,82,113,14,
    74,41,234,207,248,126,140,141,224,89,58,75,61,38,101,189,
    180,5,29,188,18,249,218,59,207,30,58,21,37,89,127,52,
    146,73,232,190,79,221,62,128,106,74,201,50,19,96,4,133,
    179,223,67,37,89,169,137,37,76,88,206,250,33,69,198,138,
    166,140,101,171,244,188,201,160,202,252,253,163,225,111,155,108,
    124,28,177,93,10,117,58,70,151,225,217,125,86,2,114,231,
    66,114,82,11,29,104,254,147,8,166,78,230,10,42,216,83,
    223,186,72,56,228,7,47,10,121,204,75,136,209,184,116,216,
    40,91,56,79,61,183,19,239,90,184,25,245,188,88,190,146,
    49,207,112,105,97,154,135,174,203,78,181,171,251,23,13,240,
    42,141,149,223,151,102,169,52,217,101,101,105,46,218,65,79,
    54,51,219,56,76,132,50,150,74,158,235,29,138,88,85,28,
    134,67,137,233,67,58,198,243,215,52,55,98,55,207,155,212,
    158,251,164,32,90,78,27,45,238,185,162,142,187,238,178,224,
    63,171,81,111,8,78,101,78,221,214,87,218,234,101,155,3,
    230,12,50,206,93,106,81,68,211,34,187,224,5,121,213,255,
    0,224,187,67,205,90,190,210,52,249,7,17,156,153,178,233,
    15,245,69,21,191,47,14,176,185,14,35,124,125,74,201,153,
    251,125,42,30,148,254,240,99,19,150,134,15,55,140,238,27,
    172,50,78,78,249,27,95,163,14,31,242,97,161,42,163,237,
    243,27,141,164,54,143,186,117,74,166,120,107,70,90,61,119,
    136,173,104,168,239,0,213,194,169,247,97,70,131,46,159,106,
    205,101,22,249,113,244,181,84,183,207,29,175,130,23,27,194,
    188,230,225,207,138,208,113,191,242,204,57,213,57,123,22,195,
    146,201,126,148,227,104,60,212,217,0,78,212,80,239,93,228,
    11,213,1,38,68,86,125,86,209,215,19,143,249,54,226,23,
    88,208,173,95,99,166,33,234,244,59,143,191,22,198,119,171,
    38,154,98,78,216,248,219,194,223,150,53,219,106,216,141,6,
    202,93,153,21,213,191,117,164,120,211,90,95,108,136,127,3,
    75,205,115,226,
};

EmbeddedPython embedded_m5_internal_param_SrcClockDomain(
    "m5/internal/param_SrcClockDomain.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_SrcClockDomain.py",
    "m5.internal.param_SrcClockDomain",
    data_m5_internal_param_SrcClockDomain,
    2436,
    7273);

} // anonymous namespace
