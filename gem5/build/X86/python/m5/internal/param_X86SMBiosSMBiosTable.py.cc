#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86SMBiosSMBiosTable[] = {
    120,156,197,89,109,115,219,198,17,222,3,41,82,164,37,139,
    178,36,191,200,178,205,76,237,134,73,107,49,105,226,38,109,
    92,183,78,226,233,164,211,202,14,148,25,203,74,167,24,136,
    56,73,160,72,128,5,78,182,153,74,95,34,79,95,102,250,
    181,191,32,95,218,239,253,127,237,62,123,0,4,201,47,117,
    166,45,99,147,203,195,97,239,101,239,121,118,111,239,212,163,
    236,223,20,127,127,193,223,244,47,138,40,224,143,162,1,209,
    80,209,166,67,74,59,20,44,208,222,20,37,239,83,48,69,
    207,136,54,43,164,43,116,196,133,42,125,89,161,232,29,130,
    206,162,232,108,80,80,127,145,206,140,244,59,77,131,170,212,
    56,52,110,146,158,162,205,26,61,140,230,169,170,235,180,215,
    164,228,25,41,165,34,69,27,227,86,174,63,77,155,13,214,
    185,194,58,77,209,249,39,116,178,151,13,188,132,126,208,160,
    160,73,207,120,198,103,40,56,35,19,224,17,103,164,48,75,
    193,172,20,206,82,112,86,10,115,121,231,45,218,156,207,203,
    231,74,229,133,82,121,177,84,94,146,242,28,233,121,234,159,
    167,254,5,234,95,164,109,69,65,11,221,178,177,143,54,47,
    145,174,82,127,153,54,151,73,243,231,18,29,41,82,193,124,
    169,197,101,105,113,174,104,177,34,45,174,208,230,21,210,252,
    89,177,45,166,105,189,179,196,144,132,255,226,127,29,134,133,
    204,12,139,199,58,73,195,56,242,194,104,59,14,29,188,175,
    67,0,196,30,68,37,67,243,19,160,57,34,129,146,231,206,
    104,30,114,15,138,250,12,148,131,17,130,10,93,58,84,120,
    232,87,232,128,11,85,218,150,23,253,106,166,113,200,24,205,
    211,1,81,127,138,14,164,102,253,97,116,153,170,166,38,48,
    236,1,6,251,150,219,226,237,6,15,180,222,193,232,107,50,
    107,131,89,175,202,220,204,101,22,222,200,79,252,161,183,241,
    225,143,215,127,243,113,24,167,86,126,225,111,13,116,7,86,
    152,6,76,25,142,226,196,12,194,45,51,141,38,94,228,15,
    181,231,153,38,63,36,220,222,132,134,205,55,85,126,236,199,
    97,196,115,97,227,82,147,132,35,51,91,180,246,134,113,176,
    63,208,230,12,215,124,38,53,247,146,36,78,58,88,28,23,
    194,64,140,246,118,12,38,59,196,16,29,204,82,68,250,136,
    69,119,55,30,234,110,226,247,118,195,160,251,105,220,219,31,
    234,200,164,221,29,61,188,117,83,191,219,221,218,15,7,65,
    151,13,233,142,198,102,55,142,186,195,91,93,158,140,78,34,
    127,208,125,185,149,171,172,125,14,67,60,9,119,188,108,170,
    187,122,48,210,9,44,79,207,98,120,53,163,22,212,85,85,
    81,243,106,86,133,181,28,215,122,25,215,191,103,184,58,153,
    151,50,180,42,195,217,161,67,41,0,188,14,112,5,156,21,
    160,200,182,50,72,59,138,142,28,250,109,5,10,135,44,171,
    236,90,87,11,76,251,226,90,182,167,58,29,50,238,83,12,
    235,87,43,210,209,180,116,228,208,1,75,6,188,74,135,236,
    187,172,201,85,44,247,26,148,124,131,114,191,1,90,171,136,
    104,227,160,198,124,168,22,124,176,44,134,37,65,152,96,209,
    93,16,184,211,204,107,227,116,117,228,155,93,119,54,71,136,
    151,72,144,94,139,35,11,230,118,24,5,57,184,150,30,219,
    225,128,233,225,98,253,164,55,81,27,196,126,161,134,69,235,
    13,226,212,82,76,250,118,231,160,8,237,237,145,116,131,81,
    49,31,105,28,232,180,7,58,49,205,108,143,152,1,122,155,
    20,69,92,248,249,34,134,89,22,66,180,152,18,53,38,68,
    135,9,49,163,166,184,180,226,204,168,179,106,45,196,122,246,
    96,32,104,82,205,217,241,15,178,152,40,218,115,40,89,17,
    15,230,143,2,112,112,211,3,9,1,120,247,57,86,193,214,
    114,16,96,116,109,229,129,240,133,137,195,154,183,225,211,140,
    37,8,48,69,253,90,134,54,115,200,178,35,25,67,178,58,
    186,113,184,243,42,165,127,35,94,85,166,193,1,101,116,57,
    170,48,31,90,196,78,204,145,130,107,207,243,128,95,11,203,
    178,112,33,240,155,221,48,141,159,88,223,70,89,226,221,58,
    187,202,131,241,253,173,190,238,153,244,26,87,60,138,247,219,
    61,63,138,98,211,246,131,160,237,27,246,253,173,125,163,211,
    182,137,219,55,210,14,32,116,151,115,6,21,253,141,71,218,
    149,130,165,77,16,246,12,71,149,5,121,16,119,76,181,97,
    2,236,198,65,202,245,104,186,163,141,219,66,11,44,110,44,
    19,16,126,120,80,197,176,172,7,143,189,155,207,192,198,152,
    90,78,153,84,15,182,37,108,245,6,126,154,122,152,129,212,
    11,209,96,245,99,127,176,175,165,247,148,251,227,9,161,104,
    231,48,177,104,116,17,6,229,246,139,81,81,28,5,99,158,
    99,216,123,15,195,95,204,98,18,72,184,196,4,172,179,172,
    241,111,77,157,119,122,213,140,118,181,156,122,231,97,60,9,
    240,42,195,158,105,120,196,65,164,227,72,24,16,187,64,91,
    247,109,148,208,216,189,14,113,3,226,251,16,111,230,166,79,
    194,254,217,211,246,139,25,142,24,221,171,100,230,21,158,245,
    229,9,207,186,116,236,89,28,240,214,15,100,115,237,87,74,
    30,82,193,2,36,119,50,135,130,239,49,240,236,123,80,21,
    79,226,29,183,236,11,24,112,205,189,132,161,222,96,241,230,
    141,244,205,182,101,94,123,215,79,219,81,124,76,247,54,94,
    218,144,6,178,187,43,88,249,18,157,119,74,116,118,219,208,
    0,151,221,239,65,84,95,182,244,111,125,55,75,191,99,151,
    254,151,24,115,38,227,219,172,240,172,169,122,32,11,240,40,
    54,191,207,89,140,47,0,132,242,242,95,224,109,239,97,180,
    204,59,153,96,128,205,236,61,217,204,100,67,148,12,49,143,
    106,253,169,188,80,3,18,219,21,58,159,237,82,41,182,145,
    81,18,63,29,183,227,237,182,161,124,66,183,111,164,171,55,
    210,143,56,188,180,239,28,175,121,22,74,18,61,66,40,176,
    161,1,235,97,194,136,159,209,213,189,167,61,45,27,137,60,
    121,158,141,4,54,153,241,178,13,138,225,17,60,156,28,15,
    137,133,156,209,32,4,78,12,140,102,1,6,204,121,128,1,
    155,130,68,69,93,96,223,47,225,128,47,120,154,130,108,127,
    34,201,101,21,253,145,176,204,188,154,153,163,139,239,228,254,
    3,205,244,119,36,65,225,5,187,146,77,45,177,19,137,6,
    59,78,250,129,168,218,77,234,87,244,231,82,68,201,183,146,
    74,150,213,148,221,167,90,184,143,224,243,90,219,69,245,164,
    7,97,237,217,213,160,38,190,98,83,198,235,39,131,147,164,
    49,178,6,218,76,2,156,105,59,148,135,89,61,58,134,6,
    65,249,178,90,112,44,73,132,63,31,64,124,88,120,177,202,
    235,254,207,19,188,118,58,138,150,118,17,207,134,161,13,204,
    162,42,243,158,171,27,44,35,119,246,217,250,93,239,147,251,
    191,190,191,182,238,217,30,79,62,73,255,146,253,82,22,0,
    62,70,47,63,98,161,249,16,167,228,212,73,56,71,49,171,
    32,29,144,226,200,81,124,246,228,68,227,153,156,61,237,25,
    211,181,137,134,176,56,255,74,52,65,20,58,17,198,101,209,
    214,236,114,22,188,176,144,67,60,157,152,75,2,245,219,3,
    127,184,21,248,119,176,111,166,24,179,151,187,160,147,27,208,
    42,27,0,247,81,47,179,65,30,63,202,13,121,60,177,116,
    246,54,217,3,170,24,32,126,19,196,61,9,31,95,236,234,
    246,80,15,183,248,76,187,27,142,218,219,3,127,71,16,170,
    100,6,222,207,13,52,2,113,201,213,37,200,164,200,33,214,
    226,118,47,142,56,94,238,247,76,156,180,3,205,103,4,29,
    180,111,182,37,216,182,195,180,237,111,241,91,191,103,172,59,
    156,244,106,201,200,252,100,39,149,228,107,239,9,138,19,69,
    216,227,147,124,200,169,232,30,21,121,135,221,97,36,48,33,
    5,147,36,211,122,23,111,77,124,86,52,99,27,227,238,66,
    220,130,232,82,121,223,158,4,166,63,69,156,196,48,88,182,
    154,186,236,52,28,179,108,157,250,57,253,7,232,41,125,222,
    143,255,250,58,126,172,171,180,57,149,123,115,13,154,186,142,
    163,40,100,3,123,197,102,51,175,60,35,114,70,42,103,243,
    202,179,34,231,164,178,149,95,95,205,75,229,57,218,92,160,
    160,38,53,139,136,16,245,255,54,66,136,119,77,212,175,146,
    255,105,96,112,127,246,157,205,223,189,67,89,78,241,178,160,
    160,202,198,205,218,160,208,87,121,98,93,182,76,78,237,111,
    188,146,141,94,47,209,190,209,22,181,235,19,180,90,226,140,
    29,124,255,216,229,159,207,114,63,45,12,60,146,212,106,188,
    40,96,230,183,117,184,34,148,59,81,35,249,44,210,221,159,
    203,125,156,44,136,231,216,140,247,152,172,181,98,93,174,178,
    136,244,147,23,206,207,174,141,77,110,209,194,31,141,116,20,
    184,239,160,241,187,84,78,82,69,103,98,76,65,164,251,3,
    149,18,159,138,90,228,228,231,121,95,69,208,44,89,45,232,
    182,10,239,156,36,206,194,238,175,115,118,203,77,238,113,72,
    119,17,255,108,16,47,226,183,123,175,128,232,135,175,166,238,
    208,239,199,137,151,95,4,243,225,233,219,53,224,20,77,206,
    94,39,106,255,99,23,97,244,45,199,60,209,160,24,179,92,
    107,222,122,117,23,118,79,223,79,116,42,3,190,190,54,70,
    3,83,142,171,132,65,18,18,2,61,208,70,191,130,253,6,
    124,201,14,209,129,230,46,226,49,159,216,234,82,201,141,61,
    111,178,27,45,104,253,123,12,131,123,99,222,104,85,141,183,
    218,37,62,28,47,57,141,90,67,73,38,115,234,239,0,165,
    186,90,81,7,183,183,103,150,113,234,162,198,128,126,89,90,
    33,147,242,202,127,90,144,59,72,203,70,185,32,205,19,15,
    16,87,14,179,107,254,208,94,120,201,251,236,216,155,218,80,
    33,151,177,200,205,220,31,64,220,44,120,254,19,180,70,221,
    240,214,106,110,255,234,41,203,215,115,208,120,62,200,232,228,
    158,118,120,203,188,125,170,217,11,151,173,104,44,127,111,120,
    94,125,61,28,218,171,68,51,127,234,125,144,248,92,94,58,
    85,155,234,36,244,7,225,87,246,182,57,175,54,184,63,62,
    221,33,140,46,158,36,63,50,239,211,107,159,114,4,136,68,
    239,132,41,15,33,253,23,125,101,65,25,68,200,207,77,47,
    245,129,82,39,19,165,169,61,172,216,11,141,59,245,124,255,
    194,157,97,99,186,161,106,248,157,227,95,135,35,183,83,81,
    77,53,171,170,252,219,226,223,150,51,211,106,84,27,13,214,
    59,51,163,242,255,215,152,218,77,231,218,185,134,250,55,237,
    143,132,186,
};

EmbeddedPython embedded_m5_internal_param_X86SMBiosSMBiosTable(
    "m5/internal/param_X86SMBiosSMBiosTable.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_X86SMBiosSMBiosTable.py",
    "m5.internal.param_X86SMBiosSMBiosTable",
    data_m5_internal_param_X86SMBiosSMBiosTable,
    2419,
    7331);

} // anonymous namespace
