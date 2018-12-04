#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_IdeID[] = {
    120,156,189,87,93,115,219,84,16,221,43,201,78,236,216,137,
    211,148,180,105,67,107,134,134,26,152,198,101,74,63,24,58,
    29,24,218,97,194,67,104,149,135,166,46,131,199,145,228,88,
    142,45,121,116,149,180,102,156,23,210,1,254,0,191,128,23,
    120,231,255,193,158,189,146,227,118,202,12,15,132,36,94,95,
    93,173,238,221,123,246,156,93,197,163,236,167,192,159,47,248,
    163,171,138,200,231,63,69,3,162,161,162,150,69,42,176,200,
    95,162,131,2,37,159,146,95,160,87,68,45,155,2,155,78,
    120,224,208,115,155,162,155,4,159,154,248,236,146,63,247,54,
    159,138,172,59,79,3,71,102,44,26,151,41,40,80,171,72,
    79,163,101,114,130,57,58,40,83,242,138,148,82,145,162,221,
    113,45,247,159,167,86,137,125,222,101,159,178,248,252,9,159,
    236,102,9,55,225,239,151,200,47,211,43,142,120,129,252,5,
    9,128,119,172,200,160,74,126,85,6,139,228,47,202,96,137,
    2,135,250,53,106,213,100,176,76,173,101,25,156,163,214,57,
    25,172,80,107,5,27,236,52,150,25,150,240,47,254,105,48,
    52,148,86,216,28,5,137,14,227,168,29,70,221,56,180,112,
    127,14,6,64,122,48,118,134,232,87,64,116,68,2,39,199,
    203,136,30,243,10,138,250,12,150,69,39,60,105,211,218,177,
    194,69,223,166,9,15,28,234,202,141,190,147,121,28,51,78,
    203,52,33,234,23,104,34,51,59,79,163,203,228,164,69,129,
    226,0,80,152,187,252,44,238,238,242,70,59,13,236,190,45,
    81,167,136,122,83,98,75,23,216,180,131,232,112,216,222,242,
    131,173,135,13,68,157,150,16,250,112,20,39,233,32,220,75,
    231,225,210,142,58,195,160,221,78,203,124,145,140,58,73,26,
    166,124,220,212,225,203,126,28,70,188,55,31,70,167,73,56,
    74,171,211,167,219,195,216,63,28,4,178,201,150,204,60,74,
    146,56,105,0,12,23,38,133,25,29,236,167,8,110,136,45,
    26,136,74,140,222,98,211,236,197,195,160,153,116,188,94,232,
    55,31,198,222,225,48,136,82,221,220,15,134,183,111,4,159,
    52,247,14,195,129,223,220,189,119,167,57,26,167,189,56,106,
    14,111,55,57,152,32,137,58,131,230,233,169,54,249,238,57,
    44,249,34,220,111,103,161,245,130,193,40,72,112,82,189,136,
    237,84,69,173,168,43,202,86,203,170,170,194,98,158,183,185,
    217,188,253,158,229,205,202,148,192,169,83,89,30,45,58,150,
    1,146,211,64,222,144,46,27,89,226,179,113,18,246,21,157,
    88,244,157,13,135,99,182,14,211,247,202,52,103,125,161,175,
    89,105,142,142,57,175,5,78,219,15,235,178,208,188,44,100,
    209,132,45,39,212,161,99,214,7,123,242,20,219,131,18,37,
    191,97,220,47,65,89,42,34,218,157,20,57,223,206,52,223,
    134,165,56,137,31,38,0,217,5,65,27,229,124,54,214,155,
    163,78,218,115,171,121,70,24,34,201,236,118,28,153,228,117,
    195,200,207,147,105,232,208,13,7,76,7,23,248,201,106,226,
    54,136,59,83,55,128,230,13,98,29,8,165,100,109,119,9,
    142,240,238,142,100,25,236,138,120,228,97,63,208,30,232,195,
    180,50,43,34,2,172,118,86,148,112,161,219,243,88,246,146,
    16,160,198,20,40,50,1,26,76,128,138,42,240,104,221,170,
    168,69,181,29,2,63,15,7,2,45,156,156,13,127,144,201,
    129,162,3,139,146,117,81,36,255,41,36,10,178,155,136,164,
    113,239,9,78,109,102,89,212,156,77,51,57,17,126,48,81,
    216,243,62,52,202,185,67,194,11,212,47,102,217,101,206,24,
    54,36,99,88,118,199,50,22,47,238,144,254,149,24,69,78,
    251,132,50,122,156,216,156,255,26,177,72,89,249,60,187,202,
    27,254,40,172,202,228,47,233,78,123,161,142,95,24,237,98,
    44,245,107,135,165,241,120,252,237,94,63,240,82,125,149,39,
    158,197,135,117,175,19,69,113,90,239,248,126,189,147,178,182,
    247,14,211,64,215,211,184,190,161,27,72,153,123,41,103,204,
    116,189,241,40,112,101,96,104,226,135,94,202,85,99,69,46,
    68,126,58,72,57,225,189,216,215,60,143,71,247,131,212,173,
    225,9,128,27,75,0,166,42,193,21,219,178,31,20,250,101,
    30,129,169,33,197,156,34,58,24,116,165,44,121,131,142,214,
    109,68,32,243,66,44,156,250,168,51,56,12,100,117,205,235,
    113,64,24,154,24,206,172,218,92,196,1,242,243,202,33,162,
    56,242,199,28,83,232,221,194,118,23,179,154,3,210,189,195,
    132,155,99,91,228,239,162,90,181,60,39,163,89,49,167,218,
    42,14,75,146,104,149,229,154,105,119,194,69,162,97,137,204,
    229,28,160,169,251,17,70,120,216,189,6,179,1,243,1,204,
    245,252,168,103,113,222,234,155,231,149,176,45,57,164,103,103,
    199,153,42,231,249,107,202,89,59,85,14,23,176,157,137,52,
    195,190,61,163,0,27,7,78,30,100,130,129,182,56,177,172,
    45,184,138,82,184,67,206,114,29,27,110,187,107,216,234,61,
    54,215,55,244,245,186,97,86,189,215,209,245,40,62,165,115,
    29,55,77,137,2,153,221,117,32,61,67,215,253,25,186,186,
    117,120,128,171,238,251,48,206,63,65,253,225,255,3,245,190,
    129,250,107,236,81,201,248,84,21,30,149,149,7,50,0,255,
    105,243,122,194,102,124,1,160,207,194,125,129,219,214,211,232,
    18,119,34,193,28,205,232,150,52,35,105,104,242,22,149,87,
    169,126,33,31,20,129,124,215,166,213,172,203,104,180,129,81,
    18,191,28,215,227,110,61,165,60,160,251,27,122,115,67,127,
    206,229,162,254,224,20,227,172,52,36,193,8,210,54,82,199,
    249,211,48,226,107,44,245,232,165,23,72,35,144,171,118,219,
    40,219,188,124,180,179,6,195,233,16,252,173,28,127,169,109,
    252,6,130,146,118,102,224,151,167,224,35,252,199,216,160,44,
    200,219,234,2,107,121,6,119,124,192,67,13,50,253,204,45,
    79,1,250,159,8,176,50,122,153,112,69,27,185,62,224,169,
    191,39,17,249,91,186,138,121,213,67,39,17,15,22,134,190,
    43,174,166,201,124,67,191,204,84,136,188,21,216,217,91,200,
    172,60,156,169,60,36,31,255,170,220,59,175,43,4,88,179,
    148,224,38,90,48,175,116,215,94,47,54,242,218,33,24,4,
    233,89,36,99,222,44,221,70,20,207,78,83,129,162,122,89,
    173,88,134,4,194,143,187,48,247,166,170,84,249,220,127,28,
    208,213,55,171,224,76,213,111,155,50,178,139,93,29,137,115,
    105,78,80,123,227,191,133,153,185,226,116,238,252,20,201,177,
    118,49,147,174,77,183,50,81,181,103,255,1,145,55,27,243,
    18,53,111,148,201,175,186,233,88,218,104,246,80,62,5,129,
    109,115,167,148,166,42,222,153,20,181,123,19,139,200,11,30,
    122,138,251,49,204,13,152,219,48,159,81,214,178,135,29,205,
    96,72,167,213,131,206,81,96,150,204,97,145,86,236,29,117,
    146,83,73,158,21,21,238,155,194,240,64,234,192,29,54,232,
    173,165,249,18,215,67,254,94,226,111,126,157,179,45,155,85,
    90,85,14,127,215,248,187,102,85,106,37,167,84,98,191,133,
    146,226,95,235,111,176,13,35,35,
};

EmbeddedPython embedded_m5_internal_enum_IdeID(
    "m5/internal/enum_IdeID.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/enum_IdeID.py",
    "m5.internal.enum_IdeID",
    data_m5_internal_enum_IdeID,
    1625,
    3841);

} // anonymous namespace
