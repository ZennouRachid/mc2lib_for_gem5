#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_Characteristic[] = {
    120,156,189,87,109,83,27,201,17,238,125,145,64,2,140,48,
    54,24,140,109,249,108,140,108,159,17,103,31,103,92,113,185,
    130,5,185,114,46,112,220,42,57,115,115,169,108,45,187,3,
    90,33,237,170,118,7,251,148,18,95,130,43,201,31,200,47,
    200,151,228,123,254,223,93,119,207,174,144,125,78,85,170,82,
    156,64,179,207,206,246,206,244,203,211,221,35,31,178,79,1,
    191,191,198,111,90,50,1,2,252,55,160,3,208,53,64,152,
    96,72,19,130,105,56,46,64,242,57,4,5,120,7,32,44,
    144,22,156,33,176,225,123,11,162,53,32,153,10,203,236,67,
    48,246,49,153,73,94,119,28,58,54,207,152,208,47,131,44,
    128,40,194,235,104,6,108,57,6,199,101,72,222,129,97,24,
    145,1,251,253,74,46,63,14,162,132,50,55,80,166,204,50,
    255,33,153,236,97,137,30,146,124,80,130,160,12,239,80,227,
    9,8,38,88,1,220,113,146,193,20,4,83,12,46,65,112,
    137,193,52,72,27,218,21,16,21,6,51,32,102,24,92,6,
    113,153,193,44,136,89,6,87,64,92,97,112,21,196,85,6,
    115,32,230,24,204,131,152,103,112,13,196,53,6,11,32,22,
    24,44,130,88,100,112,29,196,117,6,75,32,150,24,220,0,
    113,131,193,77,16,55,25,220,2,113,139,65,21,68,149,193,
    109,16,183,25,124,2,226,19,6,119,64,220,97,112,23,196,
    93,6,203,32,150,25,220,3,113,143,193,10,136,21,6,53,
    16,53,6,247,65,220,103,240,0,196,3,6,15,65,60,100,
    240,41,136,79,25,60,2,241,136,193,42,136,85,6,117,16,
    117,114,110,179,54,131,148,8,127,196,79,205,64,164,38,113,
    120,35,147,52,140,35,55,140,14,227,208,164,231,99,52,16,
    137,124,26,172,140,77,13,98,83,15,152,74,24,43,100,211,
    41,174,96,64,27,137,98,194,25,78,90,176,112,106,208,77,
    219,130,1,2,27,14,249,65,219,206,36,78,145,35,51,48,
    0,104,23,96,192,51,205,215,209,117,176,85,145,105,112,76,
    52,208,79,241,93,122,186,143,27,53,107,180,251,46,107,173,
    72,235,85,214,77,93,193,193,149,209,73,215,109,180,188,196,
    243,149,76,194,84,133,126,141,212,87,37,178,161,219,139,19,
    213,9,15,212,56,201,186,145,215,149,174,171,202,120,147,244,
    188,68,133,10,237,86,54,222,182,227,48,66,37,208,170,84,
    37,97,79,77,13,223,118,187,113,112,210,145,106,2,103,94,
    241,204,118,146,196,73,141,188,226,208,160,104,232,29,31,41,
    210,178,75,91,212,72,61,30,82,7,135,122,43,238,202,58,
    42,216,10,131,250,86,236,159,116,101,164,210,250,145,236,174,
    63,146,159,213,15,78,194,78,80,223,223,248,162,222,235,171,
    86,28,213,187,235,117,84,70,38,145,215,169,127,196,188,85,
    20,187,76,107,191,13,143,220,76,199,150,236,244,100,66,38,
    167,151,104,95,99,210,152,53,110,26,150,49,99,76,25,97,
    49,143,228,216,104,36,255,149,69,210,204,234,2,6,211,200,
    34,107,194,41,3,10,87,141,34,73,1,180,40,110,104,36,
    134,229,200,128,51,19,254,104,145,192,41,142,54,38,243,205,
    97,20,219,156,204,122,165,49,56,197,72,23,48,144,127,94,
    226,133,198,121,33,19,6,56,98,136,109,56,197,106,129,146,
    56,133,227,113,9,146,127,18,110,151,168,206,24,17,192,254,
    160,136,12,176,135,12,208,188,37,75,130,48,33,111,59,68,
    217,90,57,159,141,211,213,158,167,90,206,84,30,26,116,17,
    135,120,55,142,116,20,15,195,40,200,163,170,121,113,24,118,
    144,23,14,249,143,87,99,177,78,236,13,197,200,105,126,39,
    78,37,115,139,215,118,166,73,144,164,15,123,188,12,237,74,
    250,240,203,129,76,125,226,17,242,75,175,72,26,208,106,23,
    206,13,135,82,154,82,35,93,100,38,84,144,11,69,100,66,
    13,153,48,105,20,16,45,153,147,198,37,99,55,36,71,250,
    100,25,241,195,206,105,241,111,208,193,48,224,216,132,100,137,
    147,21,255,13,138,24,101,228,128,179,157,158,125,67,230,235,
    89,204,119,12,171,158,28,48,81,144,49,40,249,156,210,23,
    131,72,145,47,64,187,152,133,25,201,163,105,145,244,105,68,
    113,90,198,196,197,109,72,255,1,232,78,140,255,0,50,158,
    156,89,72,132,10,96,218,98,81,192,217,57,220,240,47,76,
    175,172,50,112,220,85,43,76,227,183,58,155,9,115,105,107,
    98,142,236,245,191,62,104,75,95,165,183,112,226,187,248,164,
    234,123,81,20,171,170,23,4,85,79,97,182,31,156,40,153,
    86,85,92,93,78,107,20,59,103,49,167,206,112,189,126,79,
    58,12,52,95,130,208,87,88,71,102,249,134,243,48,149,10,
    35,223,138,131,20,231,233,213,35,169,156,10,189,65,206,141,
    89,1,38,134,75,162,180,45,202,81,170,110,230,26,232,170,
    82,204,185,146,202,206,33,23,42,191,227,165,169,75,26,240,
    60,51,140,172,126,227,117,78,36,175,158,226,122,168,16,65,
    173,195,197,215,159,107,100,73,110,56,91,19,197,81,208,71,
    229,66,255,9,237,123,45,171,66,196,190,171,200,188,49,28,
    139,120,45,26,115,166,111,103,124,43,230,156,155,35,171,129,
    35,110,100,65,71,254,157,97,217,168,153,156,248,108,16,241,
    213,121,64,136,94,118,238,210,176,76,195,61,26,86,114,155,
    47,212,240,169,15,13,103,253,77,182,214,183,50,187,134,185,
    244,253,123,185,180,112,158,75,88,219,154,3,238,156,109,107,
    36,39,44,178,60,121,145,165,16,101,27,134,26,179,141,68,
    57,119,176,157,142,178,159,54,220,117,22,104,171,219,56,172,
    44,167,43,85,205,181,106,203,75,171,81,124,78,240,42,61,
    212,213,139,232,237,44,145,203,71,8,124,52,66,96,167,74,
    18,196,94,231,14,13,246,127,243,249,253,95,216,231,71,218,
    231,95,210,102,147,25,195,166,152,89,101,195,39,122,80,32,
    134,13,238,27,28,250,243,228,253,81,191,207,99,107,123,29,
    45,98,183,98,231,83,195,122,194,13,139,155,30,159,59,243,
    2,214,46,228,160,72,33,56,180,96,46,235,68,41,181,138,
    94,18,255,208,175,198,135,85,5,185,66,207,151,211,213,229,
    244,87,88,73,170,47,206,157,157,85,141,68,246,40,235,117,
    21,32,71,168,48,194,123,90,106,251,7,95,114,179,224,59,
    215,213,73,175,79,42,110,214,132,48,46,28,8,51,15,4,
    151,61,60,174,80,181,187,248,40,148,135,81,32,59,246,104,
    167,50,135,192,50,230,49,205,71,2,64,95,98,102,74,244,
    250,27,246,71,131,98,240,87,32,255,162,27,179,156,230,108,
    201,51,134,36,211,63,1,231,255,71,58,143,62,41,82,183,
    97,9,76,149,244,41,139,234,70,244,91,248,251,72,241,200,
    219,133,149,29,89,70,19,198,30,38,12,7,230,127,106,9,
    246,251,57,67,78,199,228,34,49,206,14,125,16,188,251,126,
    29,226,51,10,251,64,170,11,141,202,184,222,195,37,117,190,
    59,143,9,21,222,235,198,172,169,105,193,140,121,74,195,198,
    48,97,141,124,238,162,52,187,245,97,165,28,105,17,174,46,
    53,251,180,189,205,10,79,143,177,31,63,248,249,49,50,87,
    28,206,173,13,125,219,103,221,65,45,12,183,210,234,185,163,
    191,104,248,60,164,207,96,227,58,105,241,164,172,250,220,124,
    179,151,242,41,202,189,93,236,175,220,138,89,58,203,210,212,
    161,77,245,249,144,26,144,243,144,134,71,52,172,211,240,44,
    87,105,115,111,135,251,112,99,235,101,28,43,94,162,241,229,
    166,187,19,35,187,232,249,246,214,22,119,241,237,87,205,77,
    13,154,141,45,110,231,191,193,140,111,169,25,70,113,175,215,
    119,159,184,235,238,99,119,99,99,231,165,170,188,63,251,244,
    241,218,87,47,71,69,81,112,221,253,204,125,188,243,243,217,
    39,95,144,44,109,77,59,146,43,190,146,253,131,216,75,130,
    141,181,199,159,243,131,157,198,38,147,122,119,187,241,108,99,
    109,77,123,97,187,225,238,53,220,103,27,44,177,215,120,197,
    86,237,53,118,26,175,54,185,18,104,200,70,178,68,180,199,
    117,109,47,65,90,52,253,68,34,125,198,242,123,244,45,189,
    210,148,29,108,76,252,74,145,111,147,208,235,104,216,242,130,
    248,45,123,171,25,251,199,82,201,128,223,254,125,156,182,194,
    3,143,241,31,162,227,136,142,99,19,140,211,147,30,253,238,
    201,228,190,253,157,251,173,196,140,164,95,69,187,63,35,35,
    251,217,127,227,37,231,53,242,194,83,242,185,46,217,47,184,
    66,227,249,23,232,28,84,26,47,97,167,194,235,52,94,241,
    12,110,153,22,150,205,41,195,198,107,5,175,21,115,178,82,
    178,75,37,148,155,40,25,255,199,159,249,19,189,114,211,196,
};

EmbeddedPython embedded_m5_internal_enum_Characteristic(
    "m5/internal/enum_Characteristic.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/enum_Characteristic.py",
    "m5.internal.enum_Characteristic",
    data_m5_internal_enum_Characteristic,
    1984,
    4613);

} // anonymous namespace