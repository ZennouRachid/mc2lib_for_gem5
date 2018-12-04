#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntSinkPin[] = {
    120,156,189,88,239,110,219,200,17,159,165,40,201,146,165,88,
    142,255,37,118,154,176,184,184,81,91,196,186,235,213,189,107,
    47,117,47,189,11,138,43,14,78,142,46,16,71,87,148,160,
    201,149,68,89,34,85,114,29,71,7,27,5,234,160,237,11,
    244,9,250,165,253,222,247,107,103,102,73,154,118,236,246,128,
    86,182,165,209,114,57,187,59,51,191,153,217,217,245,32,253,
    43,227,247,83,252,38,191,23,0,62,126,4,140,0,198,2,
    186,6,8,105,128,191,4,135,101,136,127,12,126,25,222,2,
    116,75,32,75,112,134,13,19,190,46,65,248,62,16,207,50,
    243,236,131,95,189,138,167,193,243,206,193,200,228,30,3,166,
    117,144,101,232,86,224,101,184,8,166,172,194,97,29,226,183,
    32,132,8,5,236,79,91,25,255,28,116,107,200,243,29,228,
    169,51,207,63,137,39,125,89,163,151,196,239,215,192,175,195,
    91,148,120,30,252,121,22,0,87,108,112,163,9,126,147,27,
    183,192,191,197,141,133,108,242,22,116,23,179,246,237,66,123,
    137,219,11,32,23,97,184,12,195,21,24,174,66,79,128,223,
    162,225,168,212,171,238,26,72,19,134,119,160,123,7,36,126,
    214,224,76,128,240,23,11,35,238,242,136,219,249,136,117,30,
    177,1,221,13,144,248,89,215,35,230,96,175,189,130,166,15,
    254,133,127,109,52,63,168,6,146,215,50,78,130,40,116,130,
    176,23,5,6,189,175,18,33,176,60,34,165,20,181,207,8,
    181,9,48,100,40,59,162,118,138,51,8,24,34,32,6,173,
    224,151,224,238,169,160,135,97,9,78,176,97,66,143,95,12,
    205,148,227,20,177,88,132,19,128,97,25,78,184,103,239,101,
    184,1,166,170,176,185,15,201,220,250,45,142,165,183,251,184,
    208,94,155,86,223,101,169,21,73,189,197,178,169,101,36,206,
    196,141,221,177,179,255,241,79,190,8,213,94,16,30,190,8,
    194,54,137,175,106,164,195,120,18,197,106,20,28,168,57,226,
    117,66,119,44,29,71,213,241,33,198,129,42,80,168,183,50,
    241,113,24,5,33,10,129,90,37,42,14,38,170,153,143,118,
    198,145,127,52,146,106,30,123,190,224,158,103,113,28,197,109,
    178,138,77,68,17,153,28,246,21,73,57,166,37,218,36,30,
    147,196,70,210,25,68,99,217,137,93,111,16,248,157,207,35,
    239,104,44,67,149,116,250,114,188,253,88,126,208,57,56,10,
    70,126,7,53,232,76,166,106,16,133,157,241,118,7,133,145,
    113,232,142,58,87,168,183,133,108,183,105,238,227,160,239,164,
    50,14,228,104,34,99,82,57,185,69,235,138,134,88,18,247,
    69,73,44,138,166,8,42,25,146,213,34,146,127,79,145,52,
    210,248,67,48,69,138,172,1,167,220,32,184,218,132,36,1,
    88,34,220,80,73,132,165,47,224,204,128,223,150,136,225,20,
    169,137,65,115,63,71,113,200,65,163,103,170,194,41,34,93,
    70,32,191,185,199,19,205,241,68,6,156,32,69,136,77,56,
    197,168,68,78,236,66,122,88,131,248,111,212,30,214,200,145,
    69,8,176,127,82,65,15,48,115,15,208,126,75,154,248,65,
    76,214,182,201,101,219,245,172,55,74,182,38,174,26,216,205,
    12,26,52,17,67,188,27,133,26,197,94,16,250,25,170,218,
    47,122,193,8,253,194,38,251,241,108,204,54,138,220,156,141,
    140,230,141,162,68,178,111,241,220,246,2,49,18,119,111,194,
    211,208,170,36,15,15,246,101,226,145,31,161,127,233,25,73,
    2,154,109,230,190,97,83,72,83,104,36,235,236,9,45,244,
    133,10,122,66,27,61,161,33,202,216,186,103,52,196,45,177,
    27,144,33,61,210,140,252,195,204,220,226,31,160,193,16,112,
    104,64,124,143,131,21,63,130,16,163,136,60,225,104,167,119,
    95,145,250,186,23,227,29,97,213,157,39,236,40,232,49,200,
    249,132,194,23,65,36,228,203,48,172,164,48,163,243,104,183,
    136,167,68,145,157,166,49,112,114,19,146,191,2,154,19,241,
    63,129,212,79,206,74,232,8,45,192,176,197,164,128,189,171,
    184,224,31,217,189,210,204,192,184,171,65,144,68,199,58,154,
    169,205,169,109,15,99,228,197,244,249,193,80,122,42,121,128,
    29,175,162,35,203,115,195,48,82,150,235,251,150,171,48,218,
    15,142,148,76,44,21,89,155,73,155,176,179,215,51,215,201,
    231,155,78,164,205,13,237,47,126,224,41,204,35,75,252,192,
    113,152,72,133,200,15,34,63,193,126,26,218,151,202,110,209,
    8,50,110,196,2,176,99,56,196,74,203,34,31,133,234,211,
    76,2,157,85,42,153,175,36,114,212,227,68,229,141,220,36,
    113,72,2,238,103,15,35,173,95,187,163,35,201,179,39,56,
    31,10,68,77,45,195,236,243,207,29,210,36,83,156,181,9,
    163,208,159,162,112,129,247,33,173,123,39,205,66,228,125,43,
    232,121,85,164,21,252,173,136,85,195,51,83,127,171,100,62,
    183,74,90,3,35,46,82,208,209,255,206,48,109,180,13,14,
    124,86,136,252,213,254,1,181,104,176,253,144,200,38,145,239,
    17,121,148,233,60,83,197,155,151,21,103,249,13,214,214,43,
    165,122,229,177,244,245,133,88,186,123,30,75,152,219,246,78,
    120,231,28,150,10,49,81,34,205,227,157,52,132,40,218,16,
    106,140,54,98,229,216,193,237,180,232,253,180,224,174,125,151,
    150,250,46,146,71,155,201,35,75,251,154,53,112,19,43,140,
    206,29,220,162,151,58,123,145,123,219,247,200,228,5,7,238,
    23,28,216,182,136,131,188,215,126,143,136,121,157,205,191,127,
    195,54,239,107,155,255,138,22,107,164,30,214,100,207,170,11,
    143,220,131,128,200,55,184,175,144,76,215,200,250,69,187,175,
    225,214,246,50,92,199,221,138,141,79,27,214,135,188,97,241,
    166,199,245,93,150,192,134,229,172,81,33,8,122,37,88,77,
    119,162,132,182,138,73,28,189,153,90,81,207,82,144,9,244,
    100,51,217,218,76,62,193,76,98,237,156,27,59,205,26,177,
    156,80,212,235,44,64,134,80,65,136,207,52,213,179,55,158,
    228,205,130,159,28,71,7,189,174,84,156,116,19,66,92,24,
    8,35,3,130,211,30,150,43,148,237,102,143,66,61,71,129,
    244,120,65,43,213,25,130,146,88,195,48,47,0,64,95,242,
    204,132,220,235,207,192,165,169,128,63,1,217,23,205,152,198,
    52,71,75,22,49,196,153,252,14,56,254,175,216,121,116,165,
    72,187,13,115,96,168,36,31,49,171,222,136,126,13,127,41,
    36,143,108,187,40,165,37,75,49,96,204,60,96,24,152,111,
    181,37,152,23,99,134,140,142,193,69,108,28,29,186,16,124,
    120,49,15,113,141,194,54,144,106,166,168,204,233,53,28,18,
    231,213,57,38,148,120,55,196,146,161,221,130,61,230,35,34,
    31,231,1,43,178,190,89,73,246,224,114,166,44,108,17,142,
    78,53,251,180,188,201,2,47,84,121,79,161,89,246,158,58,
    159,61,255,242,249,238,158,115,62,33,87,175,144,6,247,47,
    105,216,143,144,72,60,94,9,62,15,2,157,124,208,113,136,
    26,132,251,153,33,240,84,136,245,194,91,62,21,234,211,159,
    173,235,5,118,212,236,203,153,130,50,204,133,220,204,230,217,
    213,134,203,161,215,168,18,121,51,251,112,35,96,159,140,220,
    241,129,239,238,244,105,29,90,204,203,194,203,200,36,111,21,
    37,167,208,16,215,9,207,143,159,100,26,188,158,125,29,250,
    4,167,205,37,231,96,240,35,143,115,194,111,6,210,26,203,
    241,1,158,59,7,193,196,234,141,220,62,99,82,74,53,123,
    158,105,166,24,212,66,252,114,230,72,168,6,216,141,44,47,
    10,49,251,29,121,42,138,45,95,98,85,47,125,235,177,197,
    169,211,10,18,203,61,192,183,174,167,180,171,95,12,85,46,
    165,220,184,159,112,213,116,120,76,205,155,193,212,193,99,118,
    128,197,35,149,52,105,221,160,55,10,78,51,84,59,113,89,
    168,35,7,119,24,60,214,169,169,206,88,79,137,108,19,233,
    64,113,223,157,41,138,63,195,105,123,52,63,25,170,34,54,
    140,154,193,101,195,5,198,23,52,54,121,55,72,143,191,77,
    144,74,19,186,229,44,84,43,196,41,171,116,78,36,90,163,
    92,223,173,103,157,243,76,27,220,217,204,46,136,110,113,231,
    2,116,91,224,87,184,103,145,34,189,250,191,70,58,7,203,
    205,132,201,228,255,26,224,246,207,111,94,112,123,7,210,13,
    255,186,224,22,69,173,154,58,184,135,34,171,115,139,42,241,
    121,121,253,106,31,115,188,88,186,74,106,128,30,222,132,158,
    156,33,244,170,201,121,204,190,91,109,126,158,171,116,198,149,
    206,116,153,113,203,238,194,232,2,142,111,22,21,215,149,84,
    118,254,130,111,187,216,4,142,161,43,207,115,135,172,228,150,
    88,67,18,202,99,231,10,107,232,234,146,88,221,201,68,134,
    190,253,62,141,250,0,138,85,34,243,204,222,27,40,57,189,
    129,66,1,82,18,203,88,132,188,27,129,148,231,10,122,50,
    144,173,60,230,110,4,82,118,221,63,100,174,219,166,203,180,
    243,244,107,83,230,210,9,55,207,181,246,179,28,141,251,215,
    248,165,47,95,7,158,164,19,202,127,99,193,114,136,33,211,
    143,215,114,135,71,20,67,255,113,194,148,37,155,80,63,50,
    18,28,62,190,28,73,37,175,242,27,69,6,79,15,126,190,
    196,109,50,154,226,97,163,202,157,56,202,113,110,104,115,33,
    135,136,178,44,135,155,139,168,224,246,178,34,86,140,90,165,
    38,120,183,190,116,31,93,232,171,228,125,92,150,115,177,61,
    101,65,65,17,122,233,14,202,178,56,197,43,110,190,32,211,
    96,242,181,93,182,199,18,238,124,252,218,117,199,250,54,134,
    223,167,7,181,68,199,22,95,17,82,253,97,255,144,200,227,
    220,77,126,74,163,55,144,140,183,183,50,181,183,180,218,123,
    193,88,223,64,241,109,225,120,91,45,94,98,243,99,23,219,
    43,151,122,19,25,7,238,40,248,70,95,82,102,221,138,174,
    29,47,207,75,82,229,79,188,101,171,77,184,190,154,102,211,
    196,178,31,36,56,39,79,152,15,78,243,10,1,163,172,107,
    220,174,56,250,102,28,69,87,195,250,24,188,195,167,222,79,
    145,208,221,82,109,174,134,167,127,252,93,192,95,3,179,142,
    81,194,163,104,83,152,248,219,194,223,150,209,104,213,204,90,
    13,249,230,27,130,254,31,160,107,213,141,7,139,53,241,111,
    181,171,213,18,
};

EmbeddedPython embedded_m5_internal_param_X86IntSinkPin(
    "m5/internal/param_X86IntSinkPin.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_X86IntSinkPin.py",
    "m5.internal.param_X86IntSinkPin",
    data_m5_internal_param_X86IntSinkPin,
    2340,
    6803);

} // anonymous namespace