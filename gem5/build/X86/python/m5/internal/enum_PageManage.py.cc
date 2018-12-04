#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_PageManage[] = {
    120,156,189,87,223,111,219,84,20,62,215,118,210,38,77,219,
    116,221,186,117,43,44,136,149,5,208,154,161,49,54,96,154,
    64,48,33,144,40,155,251,176,46,67,88,174,237,36,78,19,
    59,178,111,187,5,165,47,116,2,254,1,254,2,94,224,157,
    255,15,206,119,108,167,105,53,36,94,74,219,156,220,92,159,
    156,123,126,124,223,57,183,30,229,63,37,126,125,198,175,244,
    186,34,242,249,79,209,128,104,168,168,109,144,10,12,242,151,
    105,191,68,201,135,228,151,232,21,81,219,164,192,164,99,94,
    88,244,220,164,232,54,65,167,46,58,187,228,207,189,78,167,
    38,118,231,105,96,201,142,65,227,42,5,37,106,151,233,105,
    180,66,86,48,71,251,85,74,94,145,82,42,82,180,59,174,
    23,250,243,212,174,176,206,27,172,83,21,157,191,160,147,63,
    172,224,33,244,253,10,249,85,122,197,30,47,144,191,32,14,
    240,137,53,89,44,146,191,40,139,37,242,151,100,177,76,129,
    69,253,58,181,235,178,88,161,246,138,44,46,80,251,130,44,
    86,169,189,42,139,139,212,190,40,139,75,212,190,132,35,119,
    154,43,156,168,240,111,254,105,114,178,72,215,88,28,6,73,
    26,198,145,19,70,157,56,52,240,124,14,2,169,245,32,204,
    60,199,95,32,199,35,146,4,115,4,156,227,35,182,160,168,
    207,233,51,232,152,55,77,90,63,82,248,208,55,105,194,11,
    139,58,242,160,111,229,26,71,156,185,21,154,16,245,75,52,
    145,157,157,167,209,53,178,116,89,146,179,143,228,100,79,249,
    187,120,186,203,7,237,52,113,250,182,120,173,225,245,150,248,
    166,235,44,156,32,58,24,58,143,221,110,240,173,27,177,108,
    194,117,93,129,255,195,81,156,232,65,184,167,231,161,231,68,
    238,48,112,28,93,229,15,201,200,77,116,168,57,102,109,241,
    199,126,28,70,236,0,71,148,234,36,28,233,197,233,183,157,
    97,236,31,12,2,189,192,59,95,203,206,163,36,137,147,38,
    50,98,67,104,136,209,126,87,195,195,33,142,104,194,53,17,
    233,54,139,86,47,30,6,173,196,245,122,161,223,250,50,246,
    14,134,65,164,211,86,55,24,222,189,21,124,208,218,59,8,
    7,126,107,247,254,71,173,209,88,247,226,168,53,188,219,98,
    103,130,36,114,7,173,51,161,109,177,202,5,216,125,17,118,
    157,220,191,94,48,24,5,9,194,77,151,112,166,170,169,85,
    245,166,50,213,138,90,84,97,185,168,224,220,108,5,255,200,
    43,104,228,44,225,34,170,188,162,6,29,201,2,101,106,162,
    130,40,156,137,122,113,128,92,142,174,162,99,131,190,55,161,
    112,196,210,98,104,191,57,173,94,95,160,157,89,154,163,35,
    174,112,137,11,248,227,134,24,154,23,67,6,77,88,114,105,
    45,58,98,238,176,38,111,177,220,175,80,242,59,214,253,10,
    88,167,34,162,221,73,153,43,111,77,43,159,225,21,145,248,
    97,130,76,219,128,106,179,90,236,198,233,214,200,213,61,123,
    177,40,11,167,72,202,187,29,71,89,5,59,97,228,23,21,
    205,48,209,9,7,140,9,27,249,19,107,162,54,136,221,169,
    26,146,230,13,226,52,195,149,216,182,151,161,8,237,206,72,
    204,224,84,248,35,95,246,131,212,3,134,24,91,153,69,120,
    0,107,231,138,11,27,52,190,8,219,87,5,5,117,198,65,
    153,81,208,100,20,212,84,137,87,27,70,77,45,169,237,16,
    73,244,16,21,176,97,21,144,248,147,178,66,40,218,55,40,
    217,16,130,242,159,66,181,192,194,137,48,28,207,158,32,244,
    108,151,57,206,37,205,54,39,2,18,70,11,107,62,0,101,
    185,128,168,122,137,250,229,188,196,12,156,12,18,201,24,146,
    213,97,198,96,227,22,165,191,17,167,146,107,63,161,28,35,
    199,38,131,160,78,76,87,110,4,188,187,198,7,254,36,208,
    202,187,129,212,92,247,194,52,126,145,177,24,107,105,103,59,
    204,143,199,227,239,246,250,129,167,211,235,188,241,44,62,104,
    120,110,20,197,186,225,250,126,195,213,204,242,189,3,29,164,
    13,29,55,54,211,38,234,102,95,45,96,51,181,55,30,5,
    182,44,50,172,248,161,167,185,127,172,202,7,225,96,26,104,
    174,122,47,246,83,222,199,87,187,129,182,209,148,164,153,196,
    226,128,128,194,129,42,142,101,61,208,244,243,194,131,172,155,
    148,11,156,164,193,160,35,13,202,27,184,105,234,192,3,217,
    23,116,33,234,67,119,112,16,136,245,148,237,177,67,88,102,
    62,156,111,223,185,130,40,138,160,37,146,40,142,252,49,59,
    22,122,119,112,230,149,188,251,0,121,151,24,117,115,44,203,
    252,94,86,107,134,103,229,88,43,23,120,91,67,196,36,213,
    86,121,193,25,123,199,220,46,154,134,16,94,130,1,86,237,
    247,176,194,151,237,27,16,155,16,239,64,220,44,226,61,183,
    160,23,207,6,45,190,27,18,169,103,230,49,77,57,244,252,
    20,135,214,79,56,196,253,108,103,34,83,178,111,206,112,193,
    68,212,201,195,156,58,96,25,151,152,89,6,85,225,12,143,
    206,89,212,227,192,109,123,29,71,189,197,226,230,102,122,179,
    145,97,172,209,115,211,70,20,159,0,187,129,135,89,199,2,
    172,237,13,164,123,6,184,221,25,224,218,13,104,0,181,246,
    219,16,214,191,229,251,221,255,49,223,221,44,223,95,225,160,
    90,142,172,69,65,84,85,121,128,5,138,48,29,104,79,88,
    140,47,35,243,179,57,191,204,163,236,105,116,149,167,147,36,
    30,3,234,142,12,40,25,114,114,235,42,154,86,191,84,44,
    202,72,127,199,164,181,124,242,164,24,13,163,36,126,57,110,
    196,157,134,166,194,161,7,155,233,214,102,250,41,119,143,198,
    195,147,68,231,157,34,9,70,96,122,198,124,36,65,135,17,
    127,134,169,71,47,189,64,134,131,124,114,156,140,232,217,173,
    196,201,135,14,215,68,138,96,20,69,144,86,199,87,19,116,
    184,243,173,64,117,90,1,196,240,24,167,84,37,253,166,186,
    204,212,158,73,62,94,64,100,10,88,253,194,179,80,33,255,
    63,19,114,203,41,204,121,44,44,41,152,2,205,244,7,18,
    206,191,102,210,100,183,65,76,23,209,96,138,164,247,68,53,
    27,60,223,208,175,51,13,163,24,15,102,126,61,153,37,138,
    53,37,138,20,229,63,141,0,235,52,87,144,112,38,21,212,
    132,21,217,133,239,198,233,222,35,247,17,201,65,160,207,173,
    34,243,153,125,7,174,60,59,169,7,26,237,53,181,106,100,
    112,16,164,220,131,184,63,37,169,42,246,206,195,171,235,103,
    59,227,204,56,112,178,214,178,139,163,45,113,118,121,78,242,
    119,230,95,139,153,189,242,116,111,109,154,211,113,106,99,71,
    175,79,143,202,92,115,102,255,91,145,123,79,118,207,154,207,
    136,202,183,97,61,150,33,155,127,169,216,2,223,182,121,142,
    202,200,21,237,156,153,169,125,27,70,228,14,136,97,99,191,
    15,113,11,226,46,196,199,148,79,103,54,20,73,143,194,194,
    113,125,151,137,124,24,216,184,118,201,129,114,79,156,238,203,
    214,246,169,204,137,21,239,208,77,78,72,124,174,184,121,144,
    245,147,135,210,62,62,97,129,225,92,153,175,112,27,229,247,
    101,126,231,75,161,105,152,204,235,69,101,241,123,157,223,235,
    70,173,94,177,42,21,214,91,168,168,252,215,248,7,89,61,
    70,250,
};

EmbeddedPython embedded_m5_internal_enum_PageManage(
    "m5/internal/enum_PageManage.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/enum_PageManage.py",
    "m5.internal.enum_PageManage",
    data_m5_internal_enum_PageManage,
    1650,
    3948);

} // anonymous namespace