#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPAddrSpaceMapping[] = {
    120,156,197,89,109,115,219,198,17,222,3,33,82,164,41,139,
    178,222,252,34,219,200,212,174,217,180,22,227,166,110,210,196,
    117,235,58,158,76,58,141,236,64,153,177,204,116,138,129,128,
    35,9,138,4,88,224,100,155,25,233,75,229,233,203,15,232,
    15,232,244,75,250,189,255,175,221,221,195,81,144,108,197,242,
    180,67,73,226,241,112,216,187,219,219,231,217,189,189,83,0,
    249,207,12,126,126,141,159,236,111,2,32,196,63,1,3,128,
    161,128,182,5,66,90,16,46,194,206,12,164,63,131,112,6,
    94,1,180,75,32,75,112,128,21,27,190,41,65,252,1,144,
    204,18,203,108,65,88,121,147,76,157,199,157,133,129,205,45,
    22,140,107,32,103,160,93,134,167,241,2,216,178,2,59,53,
    72,95,129,16,34,22,176,53,110,24,249,89,104,87,81,230,
    42,202,212,88,230,223,36,147,191,172,210,75,146,15,171,16,
    214,224,21,106,124,14,194,115,172,0,206,88,231,202,28,132,
    115,92,57,15,225,121,174,204,155,193,27,208,94,48,245,11,
    133,250,98,161,190,84,168,47,115,125,30,228,2,244,87,160,
    191,10,253,139,208,17,16,54,104,88,92,236,179,246,37,144,
    54,244,47,67,251,50,72,252,187,4,7,2,68,184,80,232,
    113,133,123,92,152,244,88,227,30,87,161,125,21,36,254,173,
    233,30,179,176,217,92,70,72,162,255,224,79,19,97,1,85,
    199,226,185,76,179,40,137,189,40,238,36,145,69,239,43,84,
    16,136,1,21,165,28,205,135,132,230,8,24,74,212,29,209,
    220,199,17,4,244,17,40,139,102,8,75,112,105,95,208,67,
    191,4,123,88,177,161,195,47,250,118,46,177,143,24,45,192,
    30,64,127,6,246,184,101,243,105,124,5,108,85,102,24,118,
    8,6,253,22,251,210,219,45,156,104,179,73,179,111,176,214,
    138,180,94,103,221,212,123,88,120,35,63,245,135,222,214,199,
    63,255,34,86,114,240,229,147,7,97,152,110,142,252,64,126,
    233,143,70,81,220,109,210,90,84,149,22,52,28,37,169,26,
    68,219,106,150,58,122,177,63,148,158,167,106,248,144,226,40,
    42,82,104,4,101,227,99,63,137,98,212,8,151,152,169,52,
    26,169,185,73,111,111,152,132,187,3,169,206,97,203,23,220,
    242,40,77,147,180,73,38,114,169,80,84,140,118,186,138,84,
    30,210,20,77,210,149,139,204,195,162,213,75,134,178,149,250,
    65,47,10,91,159,37,193,238,80,198,42,107,117,229,240,238,
    109,121,167,181,189,27,13,194,22,46,167,53,26,171,94,18,
    183,134,119,91,168,140,76,99,127,208,122,219,90,215,177,207,
    5,154,232,69,212,245,114,133,123,114,48,146,41,173,63,59,
    79,74,136,186,88,20,215,68,73,44,136,57,17,149,13,198,
    149,34,198,223,229,24,91,185,199,34,204,34,199,220,130,125,
    174,16,144,77,194,152,160,45,17,162,184,98,4,172,43,224,
    192,130,223,151,72,96,31,75,27,221,236,218,4,223,62,187,
    153,30,169,2,251,200,129,25,132,248,219,53,30,104,150,7,
    178,96,15,75,4,223,134,125,244,99,148,196,38,44,119,170,
    144,254,147,234,253,42,81,92,196,0,91,123,101,228,134,61,
    225,134,102,52,173,36,140,82,50,189,75,100,110,214,76,107,
    146,173,143,124,213,115,231,12,78,104,34,198,123,35,137,53,
    164,157,40,14,13,196,154,36,157,104,128,36,113,201,126,60,
    26,139,13,18,127,34,70,70,11,6,73,38,153,104,60,182,
    59,79,130,36,221,25,241,48,52,43,233,195,157,67,153,5,
    68,42,36,155,30,145,52,160,209,166,75,20,151,60,127,137,
    38,187,204,180,104,32,49,202,72,139,38,210,162,46,102,176,
    182,102,213,197,121,177,17,145,85,3,90,38,145,197,54,28,
    249,23,104,100,4,236,88,144,174,177,79,227,159,32,248,200,
    113,247,56,40,208,187,175,200,22,186,21,195,2,98,172,27,
    247,152,53,72,31,148,188,71,94,142,136,18,13,102,160,95,
    206,49,71,38,105,142,164,99,42,81,156,134,177,112,112,27,
    178,191,3,218,22,201,176,7,57,105,14,74,200,138,6,160,
    67,99,236,192,214,21,156,240,79,204,181,60,128,48,9,84,
    47,202,146,23,218,207,169,206,17,112,19,29,230,201,248,241,
    118,95,6,42,187,142,13,207,146,93,39,240,227,56,81,142,
    31,134,142,175,48,14,108,239,42,153,57,42,113,110,102,77,
    2,210,189,108,120,52,25,111,60,146,46,87,52,121,194,40,
    80,24,97,22,249,129,157,50,147,10,105,208,75,194,12,219,
    169,107,87,42,183,65,61,200,184,9,43,192,44,241,72,148,
    166,69,57,242,219,7,70,3,29,111,202,134,56,153,28,116,
    56,132,5,3,63,203,60,210,128,219,153,110,180,234,231,254,
    96,87,242,232,25,142,135,10,81,85,235,48,229,200,116,145,
    150,101,172,192,75,139,147,56,28,163,166,81,240,33,41,113,
    49,143,79,68,197,101,164,97,5,203,50,126,151,197,138,21,
    216,57,249,202,134,128,43,100,2,96,248,69,206,0,36,227,
    1,6,148,166,197,33,129,87,71,228,117,223,167,26,117,118,
    111,80,113,147,138,31,82,113,203,24,96,122,86,152,59,110,
    5,94,140,197,75,15,74,249,34,39,94,246,205,17,47,187,
    116,232,101,24,2,55,247,120,235,237,151,10,222,82,34,51,
    164,247,115,231,34,63,68,18,160,31,146,40,123,21,238,199,
    69,191,160,9,55,220,75,52,21,237,166,183,110,102,183,28,
    205,66,167,231,103,78,156,28,82,223,161,151,58,200,17,241,
    221,53,178,127,129,218,221,2,181,93,135,36,136,215,238,15,
    168,176,79,2,224,71,103,9,64,87,3,240,57,205,92,207,
    185,55,199,156,171,137,128,136,67,168,76,54,197,175,176,24,
    175,18,20,69,16,86,113,59,124,26,95,198,29,142,145,160,
    77,238,67,222,228,120,163,228,44,210,196,185,254,140,169,148,
    9,143,78,9,86,242,221,43,163,237,101,148,38,47,199,78,
    210,113,20,24,133,238,221,204,214,111,102,159,98,192,113,238,
    31,90,62,15,46,169,28,81,112,208,193,130,172,162,162,24,
    159,105,168,71,47,3,201,27,12,63,121,158,142,13,58,213,
    241,242,141,11,65,98,84,44,131,10,71,71,204,119,40,40,
    78,25,146,218,4,18,90,212,19,154,182,198,120,148,196,42,
    70,131,2,26,244,33,206,102,68,188,191,0,103,189,2,254,
    12,100,108,180,105,238,250,236,71,198,151,72,50,251,3,112,
    152,120,195,110,165,147,80,218,161,88,2,157,40,251,136,69,
    245,230,245,91,248,107,33,198,152,45,166,148,231,60,69,87,
    178,39,174,196,40,157,106,27,177,143,122,19,33,128,110,71,
    98,236,55,58,173,188,113,52,92,113,146,195,54,144,106,122,
    16,205,234,9,61,210,237,217,33,64,20,172,175,136,69,75,
    19,134,185,244,17,21,31,79,252,90,152,182,169,168,121,253,
    120,116,45,236,49,158,14,79,91,164,139,205,218,207,87,212,
    109,252,166,33,55,31,120,15,31,255,238,241,198,166,151,143,
    110,30,143,207,194,217,50,228,129,225,55,52,214,79,177,144,
    120,0,20,124,98,5,58,131,33,207,168,180,136,38,7,150,
    192,115,43,166,36,175,248,220,170,207,167,174,78,73,152,215,
    230,195,81,134,162,211,145,32,207,6,220,208,166,157,48,69,
    147,128,138,151,83,118,85,226,193,189,129,63,220,14,253,251,
    180,195,102,52,115,96,92,211,50,203,104,20,151,65,110,37,
    78,90,9,63,126,106,150,243,124,202,73,240,61,208,7,93,
    94,6,123,85,152,4,28,92,190,238,73,103,40,135,219,120,
    54,238,69,35,167,51,240,187,140,86,41,95,230,99,179,76,
    197,112,23,2,1,135,160,140,114,142,141,196,9,146,24,99,
    234,110,160,146,212,9,37,158,47,100,232,220,118,56,32,59,
    81,230,248,219,248,214,15,148,118,147,163,62,207,121,156,159,
    118,51,78,217,118,94,80,245,12,208,246,188,40,142,48,141,
    221,129,73,158,162,247,34,14,94,148,184,113,130,170,189,14,
    55,49,60,109,170,177,142,131,15,168,184,75,69,11,138,251,
    252,244,240,253,132,34,42,77,70,38,44,139,43,86,213,82,
    78,238,242,111,238,245,132,70,205,94,247,242,127,156,198,203,
    165,13,237,25,227,235,101,146,148,21,58,216,82,89,165,189,
    165,93,51,141,231,184,172,115,227,156,105,60,207,229,60,55,
    54,76,227,2,151,23,184,113,209,220,150,45,113,227,50,180,
    87,32,44,115,203,42,5,149,202,255,26,84,216,21,207,192,
    9,211,255,107,44,113,127,121,198,171,112,239,67,158,164,156,
    20,71,68,113,137,115,58,142,244,133,201,218,139,235,227,75,
    130,91,167,32,173,23,164,210,87,82,227,120,99,234,22,224,
    48,165,85,216,61,140,21,175,39,210,159,77,22,123,192,121,
    219,120,137,225,53,151,134,116,83,201,87,179,138,83,102,202,
    168,127,197,215,130,108,28,207,210,73,245,33,137,203,19,27,
    209,146,99,249,226,123,180,212,118,210,89,52,245,195,86,25,
    135,238,7,52,196,29,40,102,195,44,51,101,6,61,208,68,
    63,204,173,74,98,9,243,171,215,253,153,34,111,193,2,140,
    119,99,226,193,211,71,158,185,127,96,184,223,164,115,252,225,
    238,224,82,248,212,251,193,100,43,112,31,77,64,251,201,105,
    136,141,201,115,42,241,8,131,39,182,119,235,128,89,32,103,
    213,249,179,186,243,46,157,233,50,133,167,124,247,94,52,111,
    253,112,94,125,47,243,227,211,12,179,189,155,121,81,200,211,
    190,139,60,77,72,140,214,143,167,235,58,144,113,87,245,78,
    63,85,46,111,166,210,143,204,90,14,79,161,28,72,37,223,
    234,125,138,152,154,223,25,132,18,211,159,100,140,71,211,10,
    55,226,16,158,119,22,121,2,185,213,31,105,50,186,17,197,
    60,65,148,49,83,88,22,252,107,85,203,85,193,105,217,177,
    127,142,20,218,202,147,182,107,96,142,103,227,204,165,22,69,
    212,207,179,35,86,206,43,254,191,133,175,97,181,39,240,77,
    177,201,159,200,105,248,244,190,225,15,245,157,31,191,207,207,
    249,153,14,89,124,43,77,137,166,75,248,185,183,39,62,246,
    11,234,77,71,198,225,221,117,99,135,117,25,239,30,55,3,
    82,243,107,98,166,197,162,234,253,99,61,142,91,238,209,75,
    245,48,137,59,81,247,81,172,210,177,186,242,70,241,205,104,
    168,47,82,213,194,177,247,97,234,99,125,249,88,107,38,211,
    200,31,68,223,234,27,119,211,172,200,142,111,153,223,144,246,
    196,179,219,81,121,78,6,213,39,111,235,116,156,30,12,93,
    42,187,81,134,154,177,90,39,41,148,239,46,196,165,201,185,
    242,123,29,170,56,242,25,176,94,31,230,244,117,208,253,138,
    217,154,233,246,181,58,91,21,101,250,158,199,111,11,55,34,
    171,36,106,98,78,216,248,221,192,239,134,85,111,84,237,106,
    21,229,206,213,133,249,189,142,126,82,179,174,47,86,197,127,
    1,90,86,7,77,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPAddrSpaceMapping(
    "m5/internal/param_X86IntelMPAddrSpaceMapping.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_X86IntelMPAddrSpaceMapping.py",
    "m5.internal.param_X86IntelMPAddrSpaceMapping",
    data_m5_internal_param_X86IntelMPAddrSpaceMapping,
    2469,
    7685);

} // anonymous namespace