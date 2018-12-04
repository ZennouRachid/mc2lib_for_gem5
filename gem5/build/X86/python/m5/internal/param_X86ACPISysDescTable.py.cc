#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ACPISysDescTable[] = {
    120,156,197,89,109,115,219,198,17,222,3,33,74,164,40,139,
    178,222,44,201,137,209,169,85,179,233,88,76,234,170,73,27,
    87,141,107,103,58,238,116,100,7,202,140,101,165,83,12,4,
    28,41,80,36,192,2,39,219,204,72,211,153,202,211,246,15,
    244,23,244,75,251,161,223,242,255,218,221,61,28,4,41,86,
    34,79,91,198,34,151,135,197,222,203,238,179,187,183,119,14,
    32,255,55,129,223,79,240,155,253,65,0,132,248,17,208,7,
    24,8,216,179,64,72,11,194,121,56,156,128,244,39,16,78,
    192,107,128,189,10,200,10,156,98,195,134,47,42,16,191,15,
    36,179,192,50,187,16,78,190,73,166,193,227,78,65,223,102,
    142,5,163,58,200,9,216,171,194,179,120,14,108,57,9,135,
    117,72,95,131,16,34,22,176,59,106,26,249,41,216,171,161,
    204,59,40,83,103,153,175,72,38,127,89,163,151,36,31,214,
    32,172,195,107,92,241,52,132,211,188,0,156,177,193,141,25,
    8,103,184,113,13,194,107,220,152,53,131,55,97,111,206,180,
    175,151,218,243,220,158,5,57,7,189,5,232,45,66,111,9,
    58,2,194,38,117,71,165,158,239,45,131,180,161,119,3,246,
    110,128,196,207,50,156,10,16,225,92,169,199,10,247,184,94,
    244,88,229,30,107,176,183,6,18,63,171,186,199,20,236,180,
    22,209,244,209,191,241,95,11,205,15,170,129,228,133,76,179,
    40,137,189,40,238,36,145,69,239,39,137,16,88,1,145,74,
    142,218,67,66,109,8,12,25,174,29,81,59,193,17,4,244,
    16,16,139,102,8,43,176,114,34,232,161,87,129,99,108,216,
    208,225,23,61,59,151,56,65,44,230,224,24,160,55,1,199,
    204,217,121,22,175,129,173,170,108,238,67,50,183,126,139,125,
    233,237,46,78,180,211,162,217,183,121,213,138,86,189,193,107,
    83,171,72,188,161,159,250,3,111,247,163,159,62,120,248,244,
    241,206,40,123,36,179,224,115,127,191,47,91,164,132,170,145,
    38,131,97,146,170,126,180,175,166,168,135,23,251,3,233,121,
    170,142,15,41,118,87,145,66,237,149,141,143,189,36,138,113,
    41,168,91,166,210,104,168,102,138,222,222,32,9,143,250,82,
    77,35,231,49,115,62,77,211,36,109,145,109,92,34,138,200,
    240,176,171,104,173,3,154,162,69,139,100,146,237,34,105,31,
    36,3,217,78,253,224,32,10,219,143,146,224,104,32,99,149,
    181,187,114,176,121,87,126,208,222,63,138,250,97,27,245,104,
    15,71,234,32,137,219,131,205,54,46,70,166,177,223,111,95,
    170,228,6,10,95,167,25,94,70,93,47,95,233,129,236,15,
    101,74,138,103,215,104,118,209,16,243,226,93,81,17,115,98,
    70,68,85,131,234,100,25,213,127,228,168,90,121,44,34,176,
    34,71,217,130,19,110,16,116,45,66,149,192,172,16,134,168,
    42,66,212,21,112,106,193,239,42,36,112,130,212,198,0,122,
    183,64,180,199,1,164,71,154,132,19,68,125,2,65,253,242,
    38,15,52,197,3,89,112,140,20,225,182,225,4,35,20,37,
    145,133,244,176,6,233,223,169,221,171,145,83,139,24,96,247,
    184,138,222,96,23,222,160,125,152,52,9,163,148,108,238,146,
    251,182,234,134,155,100,27,67,95,29,184,51,6,32,52,17,
    3,189,157,196,26,203,78,20,135,6,91,237,29,157,168,143,
    222,225,146,253,120,52,22,235,39,126,33,70,70,11,250,73,
    166,61,140,199,118,103,73,144,164,59,67,30,134,102,165,245,
    112,231,16,209,34,111,66,47,211,35,210,10,104,180,49,121,
    136,75,65,190,64,179,172,178,63,52,209,35,170,232,15,45,
    244,135,134,152,192,214,77,171,33,174,137,237,136,204,25,144,
    126,228,37,182,113,142,127,130,134,68,192,161,5,233,77,14,
    95,252,8,194,141,98,244,152,227,159,222,125,70,70,208,92,
    204,0,8,174,102,30,179,187,160,223,160,228,125,10,104,132,
    146,240,159,128,94,53,7,27,93,72,59,71,58,34,138,226,
    52,140,133,131,219,144,253,13,208,168,232,5,199,144,123,203,
    105,5,221,161,9,24,194,152,38,144,187,132,19,254,137,157,
    44,207,21,140,190,58,136,178,228,165,142,108,106,115,178,219,
    193,72,121,58,122,178,223,147,129,202,110,33,227,121,114,228,
    4,126,28,39,202,241,195,208,241,21,70,254,254,145,146,153,
    163,18,103,61,107,17,130,238,170,113,160,98,188,209,80,186,
    220,208,94,19,70,129,194,156,50,207,15,28,141,153,84,136,
    255,65,18,102,200,167,174,93,169,220,38,245,32,227,38,188,
    0,118,15,143,68,105,90,148,163,128,125,96,86,160,51,76,
    213,120,76,38,251,29,78,90,65,223,207,50,143,86,192,124,
    246,51,210,250,133,223,63,146,60,122,134,227,225,130,168,169,
    215,48,174,92,116,131,244,49,234,179,78,113,18,135,35,92,
    98,20,220,163,217,111,228,25,137,124,112,17,253,111,18,105,
    21,127,171,98,201,10,236,220,235,170,198,243,150,72,119,96,
    220,69,14,61,122,225,41,166,144,150,197,73,128,213,34,175,
    117,223,163,22,117,118,111,19,89,39,242,3,34,119,140,230,
    99,80,127,230,162,250,172,133,197,58,7,149,92,187,34,174,
    190,56,23,87,43,103,113,133,217,110,231,152,247,213,94,165,
    20,31,21,210,63,221,202,195,137,34,15,97,199,200,35,81,
    142,35,220,108,203,145,64,19,110,187,43,52,213,247,144,220,
    89,207,238,56,218,239,156,3,63,115,226,228,204,217,29,122,
    169,243,25,185,186,123,147,12,95,114,230,110,201,153,93,135,
    36,200,147,221,239,19,177,47,179,252,15,191,19,203,119,181,
    229,127,77,83,54,114,111,155,97,47,171,139,128,92,133,224,
    40,54,190,207,144,140,150,9,131,178,245,151,113,203,123,22,
    175,226,46,198,16,208,70,118,143,55,50,222,12,185,6,52,
    41,173,55,97,26,85,2,162,83,129,165,124,135,202,104,11,
    25,166,201,171,145,147,116,28,5,102,65,247,215,179,141,245,
    236,99,204,45,206,214,153,201,243,60,146,202,33,229,1,157,
    23,200,28,42,138,241,153,134,250,244,85,32,121,19,225,39,
    207,211,105,64,215,49,94,190,57,33,58,12,135,101,224,224,
    68,136,197,12,229,191,113,97,81,47,176,32,109,158,210,124,
    117,6,162,34,150,49,240,75,48,208,151,188,52,35,87,251,
    11,112,17,43,224,207,64,86,70,99,230,81,206,145,99,162,
    135,36,179,223,3,103,132,55,236,72,186,166,164,93,136,37,
    48,108,178,15,89,84,111,80,191,129,191,150,210,137,217,70,
    42,121,65,83,14,30,187,8,30,134,231,74,91,133,125,62,
    126,200,244,24,104,36,198,145,162,139,197,219,231,51,19,87,
    48,108,3,169,198,128,205,148,158,201,163,69,61,63,67,134,
    18,242,154,152,183,180,139,176,247,124,72,228,163,34,132,133,
    225,253,127,215,119,235,98,6,45,109,32,158,78,65,52,127,
    102,243,178,103,39,21,89,18,199,122,188,243,192,123,248,228,
    183,79,182,119,60,26,214,180,203,195,115,213,11,121,240,255,
    138,6,249,49,18,137,71,52,193,103,74,160,211,19,186,20,
    81,139,60,226,212,18,120,178,196,10,227,53,159,44,245,9,
    210,213,21,6,187,176,249,114,38,161,12,116,46,131,179,201,
    182,181,49,11,167,208,120,19,121,53,174,112,36,200,239,247,
    253,193,126,232,111,117,105,54,154,50,48,225,103,153,245,55,
    203,235,167,208,17,151,169,192,143,31,27,61,94,140,171,138,
    189,143,131,23,235,231,144,9,147,128,51,199,231,7,210,25,
    200,193,62,158,99,15,162,161,211,233,251,93,198,167,146,235,
    247,196,232,167,24,224,82,148,115,126,201,168,118,216,78,156,
    32,137,49,83,30,5,42,73,157,80,226,201,64,134,206,93,
    135,211,172,19,101,142,191,143,111,253,64,233,80,56,31,208,
    92,136,249,105,55,227,154,235,240,37,53,199,137,175,135,135,
    247,8,11,80,42,136,242,122,67,111,45,156,146,168,242,226,
    210,82,71,22,238,73,120,64,84,35,157,221,30,16,217,36,
    210,134,242,126,61,6,68,127,142,131,119,104,22,50,90,85,
    172,89,53,75,173,232,120,190,40,254,148,198,201,190,30,194,
    255,186,74,8,75,27,246,38,72,64,86,161,55,201,116,138,
    182,134,189,154,97,214,153,78,51,179,97,152,51,76,175,49,
    115,214,48,155,76,231,152,121,221,48,231,153,46,48,115,209,
    100,140,37,102,46,211,173,77,126,149,181,66,217,163,250,223,
    102,15,14,189,113,6,221,240,127,154,52,220,95,124,87,203,
    119,183,32,47,53,46,75,24,231,74,195,71,58,97,104,60,
    176,32,25,45,176,170,230,114,139,110,212,248,170,80,113,17,
    72,53,226,47,249,250,138,75,73,207,210,101,226,25,146,132,
    187,62,254,191,131,36,150,47,223,180,102,237,230,186,32,164,
    14,254,112,40,227,208,125,159,250,126,0,229,194,142,101,198,
    101,70,202,17,175,160,84,45,84,196,2,86,12,95,119,99,
    74,55,37,157,217,93,155,133,227,222,30,51,242,127,52,200,
    183,86,207,229,66,151,82,135,206,126,69,226,211,208,180,190,
    41,251,120,65,42,125,220,28,188,40,164,83,198,213,133,177,
    148,209,7,247,130,165,54,174,212,55,149,47,34,190,154,165,
    233,222,178,11,77,218,44,77,106,94,168,219,223,56,78,34,
    7,70,191,43,9,210,52,124,161,193,143,234,189,111,237,115,
    78,167,183,16,167,137,26,249,68,133,46,223,222,95,209,179,
    209,232,45,196,203,211,25,38,199,129,114,200,199,101,95,42,
    121,121,4,179,229,243,179,115,40,177,110,72,70,120,82,155,
    100,38,246,245,188,177,238,179,20,154,9,205,66,151,128,184,
    207,226,89,120,209,252,89,181,106,77,112,33,115,225,234,191,
    196,171,22,60,62,215,240,105,101,148,185,196,225,253,58,47,
    43,120,85,94,249,127,19,248,230,81,71,22,223,138,154,194,
    131,226,143,79,177,219,254,64,95,115,241,251,252,188,155,233,
    124,199,55,176,132,152,251,35,34,119,139,112,253,25,245,94,
    67,50,216,220,48,6,216,208,6,216,137,6,250,106,143,47,
    99,7,155,106,238,130,88,152,250,216,94,188,192,205,100,26,
    249,253,232,75,125,7,108,216,138,110,117,47,142,75,171,42,
    158,184,130,81,247,224,170,71,16,54,84,42,187,81,134,51,
    240,240,197,80,121,230,39,168,204,153,230,18,55,45,143,49,
    78,55,210,7,9,125,207,176,197,215,10,159,32,161,139,188,
    218,84,13,93,10,127,103,241,215,194,221,193,170,224,41,127,
    70,216,248,219,196,223,166,213,104,214,236,90,13,229,166,27,
    130,254,110,161,211,213,173,91,115,53,241,31,159,18,100,178,
};

EmbeddedPython embedded_m5_internal_param_X86ACPISysDescTable(
    "m5/internal/param_X86ACPISysDescTable.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_X86ACPISysDescTable.py",
    "m5.internal.param_X86ACPISysDescTable",
    data_m5_internal_param_X86ACPISysDescTable,
    2400,
    7192);

} // anonymous namespace
