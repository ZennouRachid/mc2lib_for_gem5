#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseGarnetNetwork[] = {
    120,156,197,88,221,115,219,198,17,223,3,41,74,164,37,139,
    178,190,108,203,31,112,99,197,76,82,139,118,108,55,105,227,
    186,117,108,39,147,78,163,56,80,167,150,153,78,49,16,112,
    164,64,129,0,7,56,217,102,70,154,118,34,79,155,188,245,
    165,211,190,228,41,47,237,123,255,191,118,119,15,160,79,148,
    228,186,31,86,244,113,92,222,237,221,237,199,111,247,246,206,
    135,252,103,12,255,127,142,255,217,183,22,64,128,127,2,34,
    128,158,128,150,5,66,90,16,204,194,214,24,164,55,33,24,
    131,231,0,173,18,200,18,236,33,81,134,47,74,16,95,3,
    226,153,99,158,117,8,198,15,227,153,228,117,39,32,42,115,
    143,5,131,26,200,49,104,85,224,81,60,3,101,57,14,91,
    53,72,159,131,16,34,22,176,62,168,23,252,19,208,170,34,
    207,121,228,169,49,207,63,136,39,31,172,210,32,241,7,85,
    8,106,240,28,37,62,1,193,9,22,0,119,156,100,98,10,
    130,41,38,78,66,112,146,137,233,98,241,58,180,102,10,250,
    148,65,207,26,244,156,65,207,27,244,130,65,47,26,244,105,
    131,62,99,208,103,13,122,201,160,207,25,244,121,131,190,96,
    208,23,13,218,54,232,75,6,253,3,131,126,195,160,47,27,
    244,178,65,191,105,208,87,12,186,97,208,111,25,244,219,6,
    253,142,65,255,144,233,105,144,51,208,189,10,221,21,232,54,
    161,45,32,168,147,169,17,0,143,91,136,143,50,116,175,67,
    235,58,72,252,187,6,123,2,68,48,99,204,120,151,103,156,
    26,206,184,193,51,110,66,235,38,72,252,187,161,103,76,192,
    90,99,30,97,26,254,19,127,26,2,41,53,137,205,19,153,
    102,97,18,187,97,220,78,66,139,198,199,169,33,96,251,212,
    148,114,132,223,35,132,247,129,225,141,178,35,194,119,113,5,
    1,93,4,175,69,59,4,37,56,179,43,232,75,183,4,59,
    72,148,161,205,3,221,114,206,177,139,184,157,129,29,128,238,
    24,236,112,207,218,163,120,9,202,170,194,208,220,34,104,234,
    81,156,75,163,235,184,209,90,131,118,95,101,169,21,73,189,
    194,178,169,211,216,184,125,47,245,122,238,135,94,38,63,246,
    210,88,170,85,169,158,38,233,86,131,84,80,85,210,163,215,
    79,82,21,133,27,106,130,248,221,216,235,73,215,85,53,252,
    146,226,100,21,42,212,93,149,241,107,55,9,99,20,4,53,
    203,84,26,246,213,212,112,182,219,75,130,237,72,170,19,216,
    243,9,247,60,72,211,36,109,144,101,28,106,20,53,253,173,
    142,34,73,123,180,69,131,68,228,38,251,53,54,205,205,164,
    39,155,169,231,111,134,65,243,126,226,111,247,100,172,178,102,
    71,246,110,93,149,215,155,27,219,97,20,52,215,223,255,81,
    179,63,80,155,73,220,236,221,106,162,48,50,141,189,168,121,
    132,138,43,200,122,138,214,127,26,118,220,92,206,77,25,245,
    101,74,106,103,39,105,111,49,41,102,197,5,81,18,51,98,
    74,132,149,194,163,227,166,71,255,150,123,212,202,115,22,58,
    85,228,30,182,96,151,9,114,91,131,60,74,142,44,145,255,
    80,81,116,79,71,192,158,5,191,41,17,195,46,182,101,76,
    52,23,134,222,236,114,162,209,43,141,195,46,122,124,12,29,
    250,229,57,94,104,130,23,178,96,7,91,116,117,25,118,49,
    147,33,39,118,97,187,85,133,244,59,162,187,85,2,180,136,
    1,214,119,42,136,132,242,16,9,26,191,164,73,16,166,100,
    113,135,160,219,168,21,189,73,182,210,247,212,166,51,85,184,
    7,77,196,110,94,77,98,237,201,118,24,7,133,103,53,54,
    218,97,132,216,112,200,126,188,26,179,69,137,55,100,35,163,
    249,81,146,73,198,23,175,237,76,19,35,113,183,251,188,12,
    237,74,242,240,228,64,102,62,97,9,49,166,87,36,9,104,
    181,99,193,135,67,225,61,71,123,156,101,52,212,17,15,21,
    68,67,3,209,48,41,198,144,58,103,77,138,147,98,53,36,
    99,250,164,29,97,164,92,64,227,239,160,29,34,96,203,130,
    244,28,7,46,254,9,242,26,69,231,14,71,62,141,125,78,
    38,208,189,24,251,232,90,221,185,195,96,65,212,32,231,109,
    10,101,116,36,121,127,12,186,149,220,213,8,32,13,141,116,
    64,45,178,211,50,22,46,94,134,236,207,128,38,69,12,236,
    64,142,149,189,18,130,161,14,24,190,152,32,176,119,1,55,
    252,138,33,150,103,9,246,189,218,12,179,228,169,142,106,162,
    57,205,173,97,156,60,28,124,182,209,149,190,202,46,98,199,
    227,100,219,246,189,56,78,148,237,5,129,237,41,140,250,141,
    109,37,51,91,37,246,114,214,32,255,57,103,11,248,12,215,
    27,244,165,195,132,198,76,16,250,10,243,201,44,127,225,88,
    204,164,66,239,111,38,65,134,253,52,181,35,149,83,167,25,
    100,220,132,5,96,112,184,196,74,219,34,31,133,235,221,66,
    2,157,93,42,5,94,50,25,181,57,97,249,145,151,101,46,
    73,192,253,140,50,210,250,137,23,109,75,94,61,195,245,80,
    32,34,181,12,199,147,135,56,21,23,202,179,70,113,18,7,
    3,20,48,244,111,208,222,167,243,108,68,8,156,71,244,141,
    99,91,193,207,138,88,176,252,114,142,185,74,129,187,5,210,
    28,216,235,34,119,60,98,112,15,211,71,195,226,4,192,74,
    17,102,157,183,137,162,201,206,101,106,150,169,121,147,154,43,
    133,222,175,93,249,169,81,229,89,7,139,53,246,75,185,110,
    195,152,250,98,95,76,157,121,17,83,152,231,214,118,248,52,
    237,150,140,216,40,145,246,233,157,60,148,40,234,208,229,24,
    117,196,202,49,132,71,172,25,5,180,225,170,115,134,182,186,
    132,205,149,229,236,138,173,49,103,111,122,153,29,39,47,128,
    110,211,160,206,100,4,115,231,28,153,221,0,114,199,0,178,
    99,19,7,161,216,121,131,154,242,81,118,127,235,123,176,123,
    71,219,253,99,218,112,50,71,218,20,35,172,38,124,130,9,
    57,99,120,224,125,142,205,96,145,60,96,218,126,17,143,186,
    71,241,89,60,189,216,1,116,128,221,224,3,140,15,65,174,
    145,139,100,214,29,43,136,10,185,161,93,130,133,252,100,202,
    232,232,232,167,201,179,129,157,180,109,5,133,64,183,151,179,
    149,229,236,3,204,42,246,157,23,6,207,51,72,42,251,148,
    1,116,70,32,99,168,48,198,239,180,212,131,103,190,228,195,
    131,191,185,174,78,0,186,122,113,243,67,9,125,195,206,176,
    10,103,112,10,196,18,134,50,223,241,120,162,54,244,4,233,
    242,144,118,171,177,27,74,98,17,67,222,112,2,253,19,66,
    51,130,217,31,129,203,86,1,127,0,178,49,154,50,143,111,
    142,154,34,114,136,51,251,45,112,46,56,228,36,210,85,36,
    157,62,204,129,33,147,189,199,172,250,96,250,5,124,109,36,
    146,226,248,40,229,101,140,25,56,229,97,224,176,115,94,233,
    136,40,239,143,29,50,60,6,25,177,113,148,232,2,241,242,
    254,156,196,117,11,219,64,170,215,238,153,9,189,143,75,34,
    61,126,225,23,74,196,75,98,214,210,240,96,228,188,71,205,
    251,195,224,21,69,223,235,148,238,226,104,230,52,142,13,87,
    167,158,117,18,161,204,66,79,143,171,25,252,60,176,18,151,
    180,144,71,248,135,196,255,46,54,18,239,169,130,47,214,64,
    215,34,68,14,181,22,57,126,207,18,120,189,198,2,226,57,
    95,175,245,53,218,209,5,4,35,181,248,231,116,65,105,102,
    95,146,102,219,172,106,171,13,125,175,221,74,205,179,227,137,
    57,242,236,237,200,235,109,4,222,157,223,211,94,180,161,95,
    196,152,85,72,95,55,165,167,248,16,71,41,192,95,63,40,
    180,120,114,60,5,234,109,92,122,40,61,71,69,144,248,156,
    28,126,181,41,237,158,236,109,224,229,116,51,236,219,237,200,
    235,176,111,74,185,118,159,21,218,41,118,174,17,200,156,66,
    50,42,12,86,19,219,79,98,76,133,219,190,74,82,59,144,
    88,242,203,192,190,106,115,30,181,195,204,246,54,112,212,243,
    149,198,251,254,152,229,26,203,75,59,25,151,83,91,79,137,
    60,62,223,186,120,31,15,177,178,252,10,134,197,132,62,57,
    56,231,80,81,197,53,163,14,31,60,114,240,222,167,6,58,
    125,221,165,230,22,53,77,48,15,227,215,238,205,159,224,210,
    191,163,61,200,96,21,177,100,85,45,181,120,88,200,62,164,
    53,178,131,129,251,215,87,9,92,89,134,214,24,49,200,10,
    116,199,185,157,160,188,223,170,22,157,53,110,79,112,231,100,
    209,57,197,237,73,238,156,46,58,235,220,206,112,231,169,34,
    37,204,114,231,28,180,230,139,7,187,5,74,15,149,255,53,
    61,112,116,29,95,92,125,243,127,205,10,206,79,191,31,225,
    157,59,144,151,11,71,101,132,125,197,221,125,157,17,180,47,
    176,168,24,204,177,162,197,147,20,189,131,241,99,168,226,50,
    142,170,188,159,241,163,19,23,131,174,165,11,189,23,94,36,
    159,235,139,251,18,54,177,124,122,80,98,141,101,93,208,17,
    187,215,239,203,56,112,174,209,204,235,96,22,102,204,115,60,
    38,164,20,240,39,48,206,251,146,152,195,51,255,32,124,41,
    155,24,250,50,76,235,67,192,94,62,86,159,255,165,240,121,
    99,113,95,162,115,40,55,232,212,54,204,106,218,41,43,71,
    39,23,87,198,222,6,86,199,109,111,59,226,7,60,25,209,
    61,225,63,157,130,133,9,191,178,29,28,82,87,94,178,210,
    232,174,175,202,75,219,241,219,148,177,79,227,37,115,227,208,
    109,71,120,76,100,225,151,146,55,122,101,102,218,137,174,38,
    102,231,75,103,63,241,51,23,15,25,247,9,142,252,219,173,
    246,49,23,91,153,157,140,80,117,129,208,39,35,169,228,81,
    113,165,8,140,249,125,52,144,120,88,39,3,188,255,140,115,
    39,25,204,61,198,227,141,2,230,107,218,131,0,129,199,27,
    222,47,231,245,175,85,173,84,5,87,14,35,15,232,70,95,
    101,216,71,32,214,55,128,65,230,80,143,34,108,231,39,57,
    75,228,154,111,242,252,138,167,241,206,239,139,197,89,79,81,
    193,247,194,85,175,167,159,140,120,60,191,65,102,58,3,241,
    91,38,213,66,206,59,212,92,29,6,209,143,105,54,165,248,
    222,173,149,66,249,21,173,252,71,4,190,79,25,123,22,51,
    240,251,142,201,247,81,148,120,10,133,164,178,74,45,140,12,
    126,18,15,135,150,14,93,127,45,236,233,103,56,174,231,205,
    241,32,245,144,158,31,233,205,100,26,122,17,225,243,252,161,
    235,57,219,27,131,220,77,124,165,48,57,208,145,161,255,224,
    153,250,101,24,111,21,82,93,56,116,21,147,83,217,71,110,
    116,15,47,227,105,18,69,232,130,195,173,71,76,107,131,76,
    201,222,17,27,161,250,253,72,126,42,123,73,58,56,98,163,
    187,121,89,154,51,29,110,70,28,204,205,56,170,180,30,191,
    23,37,254,150,12,114,158,195,77,199,60,247,147,30,153,125,
    212,201,185,180,90,149,81,17,100,188,205,18,160,120,132,148,
    3,182,184,27,4,169,227,197,29,89,24,253,210,40,195,62,
    21,11,174,209,101,134,80,121,185,239,176,52,72,123,94,164,
    49,123,184,166,236,94,39,193,203,251,81,176,100,14,246,254,
    161,32,66,88,191,34,136,114,206,3,190,221,231,144,163,214,
    49,228,44,88,40,170,139,113,14,153,131,176,167,132,147,211,
    92,133,243,178,7,146,24,167,152,84,118,194,140,172,64,43,
    25,107,228,117,12,37,57,117,249,37,169,221,92,227,248,146,
    175,190,239,234,23,175,59,252,192,149,98,67,207,201,213,137,
    42,38,98,252,156,198,79,11,43,29,171,36,106,98,74,148,
    241,179,142,159,117,107,178,94,45,87,171,200,119,98,82,252,
    119,191,23,49,189,215,172,139,245,170,248,23,41,50,152,94,
};

EmbeddedPython embedded_m5_internal_param_BaseGarnetNetwork(
    "m5/internal/param_BaseGarnetNetwork.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_BaseGarnetNetwork.py",
    "m5.internal.param_BaseGarnetNetwork",
    data_m5_internal_param_BaseGarnetNetwork,
    2656,
    8180);

} // anonymous namespace