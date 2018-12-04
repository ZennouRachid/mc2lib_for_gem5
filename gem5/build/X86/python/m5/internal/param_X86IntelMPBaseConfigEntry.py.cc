#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPBaseConfigEntry[] = {
    120,156,197,88,109,115,219,198,17,222,3,33,74,164,37,155,
    178,228,87,185,49,58,181,107,246,197,98,210,212,77,218,184,
    110,28,219,211,73,38,149,29,168,51,150,149,78,49,16,113,
    164,64,145,0,11,156,108,211,35,125,169,60,109,255,64,127,
    65,191,180,223,251,255,218,125,246,0,136,82,226,38,157,118,
    104,137,60,30,14,247,178,187,207,179,123,123,215,165,226,111,
    142,191,31,243,55,255,131,34,138,248,163,104,72,52,82,180,
    237,144,210,14,69,43,180,55,71,217,79,41,154,163,215,68,
    219,53,210,53,58,226,138,75,95,214,40,121,151,208,103,85,
    250,108,81,52,255,117,125,22,101,222,5,26,186,210,226,208,
    164,73,122,142,182,235,244,52,89,38,87,207,211,94,147,178,
    215,164,148,74,20,109,77,90,101,255,5,218,110,112,159,239,
    112,159,166,244,249,39,250,20,47,27,120,137,254,81,131,162,
    38,189,102,137,207,80,116,70,4,224,21,23,165,178,68,209,
    146,84,206,82,116,86,42,231,202,201,91,180,189,92,214,207,
    79,213,87,164,126,142,244,50,13,86,105,112,129,6,23,169,
    167,40,106,97,56,43,245,108,251,18,105,151,6,151,105,251,
    50,105,254,92,162,35,69,42,90,158,26,113,69,70,156,175,
    70,92,149,17,107,180,189,70,154,63,87,237,136,5,218,108,
    95,96,211,199,255,226,191,54,155,159,204,34,23,207,117,150,
    199,105,18,196,73,47,141,29,188,159,71,1,176,186,40,106,
    5,106,15,128,218,152,4,50,150,157,81,59,228,25,20,13,
    24,16,7,43,68,53,186,114,168,240,48,168,209,1,87,92,
    234,201,139,129,91,244,56,100,44,150,233,128,104,48,71,7,
    210,178,249,52,89,35,215,212,197,220,123,48,183,125,203,99,
    241,118,139,23,218,108,99,245,13,145,218,64,234,117,145,205,
    120,92,4,227,48,11,71,193,214,135,63,251,52,49,122,248,
    155,39,159,132,185,126,144,38,189,184,255,40,49,217,164,13,
    85,76,3,250,140,198,105,102,134,241,142,89,192,184,32,9,
    71,58,8,76,147,31,50,158,196,196,134,109,96,92,126,28,
    164,113,194,2,177,134,185,201,226,177,89,170,70,7,163,52,
    218,31,106,115,134,91,62,149,150,71,89,150,102,109,88,200,
    71,97,80,140,247,250,6,18,143,176,68,27,162,74,145,255,
    158,139,206,110,58,210,157,44,236,238,198,81,231,97,218,221,
    31,233,196,228,157,190,30,221,185,173,223,235,236,236,199,195,
    168,195,218,116,198,19,179,155,38,157,209,157,14,11,163,179,
    36,28,118,190,65,213,117,30,114,30,235,188,136,251,65,33,
    239,174,30,142,117,6,245,243,179,144,65,45,170,21,245,142,
    170,169,101,181,164,226,122,137,240,252,52,194,127,47,16,118,
    10,191,100,144,85,129,184,67,135,82,1,140,109,32,12,96,
    107,192,147,21,102,184,250,138,142,28,250,93,13,29,14,185,
    116,217,153,222,169,208,29,136,51,217,153,230,233,144,25,48,
    199,0,191,186,38,19,45,200,68,14,29,112,201,208,187,116,
    200,222,202,61,185,137,203,189,6,101,127,67,125,208,0,193,
    85,66,180,117,80,103,102,184,21,51,44,159,161,73,20,103,
    176,188,15,42,183,155,101,107,154,175,143,67,179,235,47,149,
    48,177,137,4,238,141,52,177,136,246,226,36,42,17,182,28,
    233,197,67,230,136,15,251,201,108,210,109,152,134,85,55,24,
    173,59,76,115,45,60,147,185,253,115,232,136,222,189,177,76,
    131,85,33,143,12,142,116,222,5,167,152,107,118,70,72,128,
    217,102,202,19,31,110,191,138,181,174,10,43,90,204,139,58,
    179,162,205,172,88,84,115,92,187,230,44,170,179,106,35,134,
    81,187,208,18,92,113,75,138,252,131,44,48,138,246,28,202,
    174,137,67,243,71,1,61,120,237,129,68,4,188,251,2,166,
    176,173,28,19,24,98,219,120,32,164,97,246,112,207,187,112,
    113,6,20,44,152,163,65,189,128,156,137,100,41,146,77,80,
    114,119,76,227,240,228,46,229,127,37,54,45,115,225,128,10,
    206,28,213,152,20,45,98,119,230,192,193,173,23,121,193,63,
    10,213,138,232,33,28,48,187,113,158,190,176,94,142,186,132,
    191,77,246,151,39,147,199,59,3,221,53,249,117,110,120,150,
    238,123,221,48,73,82,227,133,81,228,133,134,163,192,206,190,
    209,185,103,82,239,102,222,6,142,254,213,146,70,213,124,147,
    177,246,165,98,185,19,197,93,195,241,101,69,30,196,39,115,
    109,152,5,187,105,148,115,59,134,246,181,241,91,24,1,227,
    166,34,128,144,36,64,87,44,203,253,224,182,247,75,9,108,
    180,169,151,188,201,245,176,39,1,172,59,12,243,60,128,4,
    210,46,108,131,214,207,195,225,190,150,217,115,158,143,5,66,
    213,202,48,219,184,116,25,90,149,70,16,205,146,52,137,38,
    44,104,220,125,31,50,92,46,162,19,152,120,129,89,56,207,
    101,157,127,235,234,162,211,117,11,238,213,75,254,93,132,5,
    72,208,87,5,1,152,139,71,28,78,218,142,4,4,81,14,
    220,245,127,136,26,6,251,55,80,220,68,241,125,20,183,74,
    253,103,102,132,165,211,70,16,93,28,209,188,91,43,116,172,
    124,236,203,19,62,118,229,216,199,56,254,109,30,200,174,59,
    168,77,249,74,13,86,200,238,21,174,5,47,100,10,176,23,
    162,171,248,20,111,197,211,94,129,5,55,252,43,88,234,187,
    92,220,186,153,223,242,44,7,189,221,48,247,146,244,152,248,
    30,94,218,8,7,218,251,215,96,254,41,98,247,167,136,237,
    123,232,1,86,251,223,67,225,190,201,254,63,120,139,246,239,
    91,251,255,26,11,47,22,204,91,18,198,53,85,23,180,1,
    40,213,134,248,5,23,147,75,64,98,26,131,75,188,21,62,
    77,174,242,238,38,64,96,131,123,95,54,56,217,36,37,79,
    44,131,220,96,174,172,212,1,71,175,70,23,139,157,43,199,
    214,50,206,210,151,19,47,237,121,134,74,129,238,222,204,215,
    111,230,31,113,180,241,238,29,27,190,136,44,153,30,35,50,
    216,72,1,163,152,56,225,103,76,245,232,101,87,203,230,34,
    79,65,96,3,131,205,114,130,98,211,98,140,4,20,167,4,
    69,66,35,167,58,136,136,179,69,164,89,33,2,157,158,96,
    213,166,192,81,83,151,56,20,76,129,129,47,24,155,131,118,
    127,38,73,119,21,253,137,96,107,54,105,225,247,226,69,165,
    39,173,148,74,28,168,175,219,169,108,246,137,221,73,122,176,
    11,229,31,72,87,187,113,125,70,127,153,10,48,229,246,82,
    43,210,157,105,71,114,43,71,18,144,190,213,22,226,158,244,
    37,0,192,78,135,110,226,53,54,161,188,113,50,86,73,126,
    35,54,208,102,102,8,45,216,245,2,136,246,236,24,31,4,
    234,53,181,226,88,186,8,147,62,64,241,97,229,212,170,108,
    155,133,148,215,79,71,214,169,237,37,176,161,105,11,162,184,
    34,252,185,121,243,99,254,197,140,155,247,131,7,143,63,127,
    188,177,25,20,147,151,143,167,22,145,44,153,138,160,240,9,
    166,250,9,23,154,143,119,74,206,163,132,147,23,147,12,165,
    3,142,28,57,138,79,165,156,139,188,150,83,169,61,125,250,
    54,23,17,82,151,95,137,48,136,76,39,226,187,152,111,195,
    26,182,162,137,101,0,138,151,179,117,83,144,224,238,48,28,
    237,68,225,189,62,214,196,194,221,210,45,157,82,139,214,180,
    22,112,41,245,38,69,228,241,163,82,155,231,179,205,125,239,
    242,18,149,22,226,80,81,218,149,184,242,219,93,237,141,244,
    104,135,207,195,187,241,216,235,13,195,190,96,85,43,180,124,
    92,106,105,4,236,169,24,32,209,39,71,174,177,145,122,221,
    52,225,104,186,223,53,105,230,69,154,79,21,58,242,110,123,
    18,138,189,56,247,194,29,126,27,118,141,117,145,147,238,46,
    233,91,152,245,115,201,212,246,94,160,58,123,172,131,32,78,
    98,78,94,145,70,21,249,137,221,132,36,108,33,95,147,180,
    212,122,28,239,94,124,196,52,19,27,1,239,163,184,131,162,
    67,211,251,251,204,208,253,5,47,209,195,90,48,96,93,173,
    57,13,71,194,195,27,7,61,193,156,249,87,29,252,225,183,
    113,112,237,210,246,92,233,230,117,210,243,56,200,110,55,202,
    187,171,38,92,190,254,191,186,188,120,202,236,125,100,252,127,
    245,116,255,151,111,87,9,255,30,21,217,195,155,188,252,68,
    206,247,208,122,185,197,134,115,140,201,170,40,92,222,108,225,
    58,77,238,9,141,100,119,72,254,126,37,119,87,146,35,6,
    142,205,255,142,81,5,7,236,121,31,254,158,232,23,111,150,
    220,242,209,230,123,24,22,142,199,58,137,252,119,49,195,123,
    52,157,183,73,159,217,154,244,126,97,206,42,13,168,169,85,
    78,5,190,74,111,68,138,41,253,133,198,173,138,208,55,222,
    10,23,94,149,92,176,39,248,42,152,249,240,119,27,190,170,
    200,101,3,153,32,134,12,44,210,67,109,244,55,129,102,160,
    97,113,38,138,52,71,249,116,194,185,247,188,52,242,12,65,
    240,22,226,33,208,72,75,196,56,30,170,186,211,168,55,148,
    108,57,167,46,123,167,218,234,85,155,228,167,146,117,78,114,
    31,45,6,134,42,66,191,72,20,76,223,31,203,205,146,181,
    155,220,125,149,155,3,76,44,103,146,141,112,100,175,49,228,
    125,113,122,201,45,189,229,158,13,155,168,255,35,20,183,43,
    68,126,142,209,107,92,140,238,172,151,202,175,91,229,55,227,
    145,189,186,145,43,183,209,29,179,124,170,91,148,133,92,191,
    112,170,53,215,89,28,14,227,87,246,166,175,108,54,184,187,
    59,61,47,164,170,158,100,127,49,144,231,191,73,31,197,92,
    153,238,199,57,175,35,139,84,19,22,238,14,152,170,172,244,
    63,80,236,196,76,179,167,147,77,5,237,57,242,158,28,27,
    63,230,2,151,54,141,133,6,31,159,249,247,28,255,58,28,
    24,156,26,159,223,150,148,203,191,45,254,109,57,139,173,134,
    219,104,112,191,51,139,10,255,215,153,134,77,231,250,98,67,
    253,27,253,128,221,5,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPBaseConfigEntry(
    "m5/internal/param_X86IntelMPBaseConfigEntry.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_X86IntelMPBaseConfigEntry.py",
    "m5.internal.param_X86IntelMPBaseConfigEntry",
    data_m5_internal_param_X86IntelMPBaseConfigEntry,
    2262,
    6684);

} // anonymous namespace