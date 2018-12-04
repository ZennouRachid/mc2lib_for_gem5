#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_TimingExpr[] = {
    120,156,181,88,221,115,219,68,16,63,201,31,177,157,47,55,
    117,221,208,14,84,79,140,135,153,212,109,73,194,87,135,161,
    105,3,132,9,77,71,78,96,8,15,30,89,119,182,85,244,
    97,164,83,73,152,190,149,25,30,121,225,149,39,94,249,31,
    97,119,101,201,146,237,164,117,35,146,232,162,91,221,173,246,
    246,247,187,221,91,153,108,252,83,128,235,11,184,130,186,194,
    24,135,63,133,217,140,29,227,157,202,108,133,57,42,59,85,
    153,194,11,76,168,172,175,48,94,100,191,49,246,138,177,31,
    78,11,140,151,152,40,144,180,156,72,139,140,47,49,81,36,
    105,37,145,150,24,175,198,99,107,137,180,204,248,114,44,93,
    73,164,75,140,175,198,210,181,68,90,97,124,61,150,214,19,
    105,149,241,107,76,212,72,186,145,72,151,25,191,30,143,109,
    36,210,21,198,111,196,210,102,34,93,101,252,102,44,221,76,
    164,107,140,191,195,58,173,91,224,25,235,95,248,105,129,119,
    152,196,230,131,232,182,10,77,199,114,142,122,207,133,41,101,
    13,122,199,150,99,185,131,253,179,145,111,198,206,197,145,123,
    232,92,212,35,24,59,85,208,197,224,79,240,50,184,15,188,
    4,142,209,59,45,21,30,235,216,4,27,208,152,163,176,45,
    73,89,87,128,182,187,195,97,171,140,175,172,64,211,237,186,
    134,35,186,93,122,99,183,235,120,60,180,177,91,196,1,231,
    35,65,114,243,236,172,59,20,6,23,62,201,143,253,80,208,
    100,163,23,72,223,48,101,11,109,155,52,193,54,52,237,161,
    231,136,54,60,29,90,188,253,196,51,67,71,184,50,104,15,
    132,179,179,37,238,183,3,223,108,163,93,147,69,222,29,157,
    147,201,247,80,3,218,87,86,240,87,94,203,184,226,208,146,
    194,55,236,196,35,106,236,145,7,115,61,2,156,3,2,137,
    18,123,14,212,40,176,87,32,92,26,83,14,8,0,158,42,
    225,220,119,161,25,43,214,118,183,181,158,37,181,208,13,172,
    129,43,184,246,194,176,67,161,87,47,246,101,176,10,98,123,
    60,155,70,155,234,216,48,188,30,227,76,28,242,82,97,47,
    193,197,12,219,14,97,254,52,66,30,77,160,121,4,27,121,
    56,16,118,95,175,229,227,84,66,48,16,178,59,50,124,195,
    9,30,98,175,72,100,170,42,45,92,151,142,91,86,39,192,
    151,136,4,220,51,187,93,29,205,210,203,177,129,207,112,178,
    196,238,201,129,43,119,183,201,58,125,37,99,226,21,193,71,
    91,118,80,67,45,1,191,172,174,171,114,57,67,128,123,179,
    155,161,49,23,250,241,54,8,208,198,199,158,251,66,184,22,
    24,161,221,179,200,212,98,102,225,58,2,52,229,240,43,174,
    166,30,199,193,226,120,53,178,158,89,71,199,55,117,49,200,
    151,199,232,189,47,45,151,107,114,40,180,192,11,125,83,104,
    190,24,88,1,144,83,115,67,167,7,255,250,190,231,208,115,
    51,244,125,116,136,229,6,82,191,118,9,191,55,65,12,74,
    197,25,12,149,30,141,215,96,205,168,57,120,11,170,147,170,
    40,66,33,178,250,70,78,14,71,156,15,47,33,119,132,113,
    194,106,125,141,141,67,224,201,120,171,147,37,249,82,26,221,
    250,100,138,210,5,160,116,35,67,5,29,66,43,108,170,220,
    233,240,30,174,7,116,107,134,171,25,62,24,46,33,181,132,
    24,166,98,82,232,141,75,112,199,28,147,176,199,55,126,209,
    34,18,0,5,124,80,186,32,242,133,72,89,10,247,27,57,
    226,254,253,130,184,83,162,33,11,242,197,27,221,249,140,205,
    134,176,213,12,222,135,66,206,2,253,232,205,129,22,21,234,
    22,169,91,197,67,19,226,94,67,220,113,133,1,174,107,207,
    246,204,159,52,175,175,113,97,218,16,187,165,229,185,129,222,
    124,205,54,199,123,17,4,56,86,235,123,62,100,66,151,195,
    152,32,88,135,135,61,143,159,107,147,17,38,122,184,144,38,
    64,51,67,0,149,110,148,52,19,212,56,6,112,209,135,40,
    82,28,191,177,85,72,72,113,19,155,205,28,153,129,142,166,
    211,4,50,3,184,177,124,25,55,40,213,124,7,155,196,243,
    41,223,69,52,185,153,176,102,51,119,194,160,203,126,100,227,
    44,149,16,70,153,161,140,46,250,249,198,134,59,184,82,60,
    116,32,71,12,173,231,133,144,54,130,176,183,53,1,88,191,
    117,9,91,234,25,182,68,161,97,177,144,16,5,254,255,39,
    15,120,139,198,131,235,177,5,249,194,139,30,28,206,137,7,
    43,25,112,143,70,9,182,141,24,219,111,210,216,2,176,128,
    42,128,9,48,194,110,135,226,8,74,34,40,134,160,4,130,
    226,7,74,30,40,118,160,196,129,226,6,74,26,40,102,160,
    132,129,226,5,74,150,65,3,121,1,152,163,94,162,148,76,
    222,250,136,243,41,73,39,236,201,181,140,228,228,219,208,158,
    22,61,177,94,76,137,58,179,163,58,56,106,35,59,241,177,
    176,108,20,175,103,196,251,63,135,134,61,53,244,169,39,35,
    241,245,172,134,67,96,219,241,208,112,101,51,43,255,10,18,
    18,36,41,122,148,157,210,185,96,74,39,61,165,158,121,116,
    0,71,69,95,78,185,6,44,154,118,159,203,9,198,137,228,
    200,167,188,158,122,137,245,171,56,112,247,44,25,200,91,83,
    15,6,238,254,153,20,46,255,240,193,177,183,187,61,173,186,
    23,68,33,113,114,48,199,6,106,132,32,55,102,222,198,217,
    120,105,200,76,53,226,102,129,174,217,223,41,190,158,184,87,
    75,95,208,173,92,146,190,144,73,39,174,225,159,107,222,8,
    138,42,8,198,250,253,139,35,17,29,225,226,129,84,235,92,
    61,69,169,164,146,206,44,134,63,72,165,39,116,183,190,147,
    99,160,250,131,45,144,158,162,80,117,59,49,68,141,173,201,
    55,104,161,179,127,103,175,207,73,123,214,28,30,60,123,107,
    30,140,187,37,234,214,198,95,128,78,151,145,22,88,150,210,
    17,4,94,153,225,197,238,197,188,208,31,196,92,58,252,186,
    147,58,182,144,72,207,136,76,244,117,49,77,147,59,243,105,
    82,160,27,53,205,151,66,140,6,109,81,91,244,37,29,112,
    124,107,48,148,81,145,57,33,206,71,216,124,156,35,123,254,
    66,13,149,132,61,192,159,149,133,249,147,24,149,47,137,16,
    153,63,99,4,82,36,82,102,178,223,193,156,147,205,130,44,
    74,14,195,149,184,91,138,131,75,121,18,92,136,69,120,54,
    62,232,111,65,1,236,110,9,59,16,19,46,125,114,49,151,
    232,11,131,233,193,89,24,143,209,105,50,81,46,243,225,20,
    149,146,97,58,233,27,168,59,63,138,17,187,208,2,10,119,
    248,70,116,29,125,52,164,87,97,47,69,183,79,177,249,12,
    155,135,57,210,237,159,25,186,189,65,184,82,103,237,201,151,
    105,136,219,223,243,153,246,180,69,248,160,151,156,157,187,209,
    247,47,98,31,244,146,111,173,186,146,152,73,7,69,132,143,
    10,119,170,230,232,132,78,231,56,130,96,223,13,157,104,7,
    97,148,36,150,147,1,121,173,134,224,125,24,125,133,253,252,
    125,212,132,53,71,77,169,87,155,165,230,114,179,216,92,129,
    118,21,174,6,180,235,255,1,148,162,204,55,
};

EmbeddedPython embedded_m5_objects_TimingExpr(
    "m5/objects/TimingExpr.py",
    "/home/rachid/Documents/gem5-e1/src/cpu/TimingExpr.py",
    "m5.objects.TimingExpr",
    data_m5_objects_TimingExpr,
    1612,
    6005);

} // anonymous namespace