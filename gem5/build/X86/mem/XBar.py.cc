#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_XBar[] = {
    120,156,173,86,109,111,227,68,16,94,59,175,77,211,38,77,
    95,0,241,230,3,132,114,199,53,1,164,74,124,64,8,149,
    83,37,164,182,119,114,238,208,17,33,89,91,123,211,184,216,
    94,203,187,225,18,62,240,165,124,228,11,255,129,95,198,31,
    129,153,177,189,77,123,161,7,92,147,102,187,51,158,221,157,
    121,230,153,89,251,172,248,84,224,247,53,252,212,159,48,4,
    240,103,177,136,177,152,177,49,99,22,202,54,139,44,22,91,
    108,108,229,114,133,69,54,123,90,204,42,249,172,202,162,42,
    139,107,108,92,3,155,26,19,140,77,44,22,212,217,175,140,
    93,50,246,253,184,206,130,6,19,117,210,54,141,182,193,130,
    181,82,219,50,218,38,11,214,153,168,145,182,109,180,107,44,
    216,96,162,73,218,77,163,109,177,160,83,106,187,70,187,206,
    130,45,38,26,164,237,25,109,155,5,219,108,212,223,129,48,
    195,191,224,211,183,96,166,215,96,56,17,241,227,179,11,225,
    235,92,85,135,97,180,80,90,196,185,140,195,131,43,235,81,
    88,88,235,38,72,135,92,137,231,135,60,243,151,241,60,68,
    60,127,131,1,128,0,216,0,161,177,205,68,133,141,171,8,
    47,128,4,65,3,174,151,48,111,160,251,128,36,206,1,140,
    22,187,88,71,56,81,108,151,98,141,196,141,82,172,147,184,
    73,98,7,129,69,177,203,196,22,98,139,243,30,61,218,102,
    98,7,1,190,180,217,120,151,185,163,126,11,28,114,171,232,
    218,58,12,177,136,135,243,51,158,13,166,83,245,1,200,223,
    65,68,50,115,82,153,105,103,2,19,95,38,9,168,194,228,
    220,137,57,128,145,41,117,239,118,51,21,241,159,132,82,93,
    176,58,202,100,162,69,18,56,17,135,127,254,66,117,80,41,
    179,23,60,187,210,161,161,43,84,42,19,37,140,242,125,80,
    62,226,154,167,92,79,157,23,97,0,99,42,138,243,250,103,
    11,45,212,125,181,15,54,79,86,56,192,19,71,166,58,148,
    9,143,156,64,76,248,44,210,133,83,15,113,133,200,192,62,
    118,120,16,100,224,38,68,149,166,184,10,55,209,83,97,86,
    224,81,253,61,204,54,230,215,243,18,30,11,207,211,45,18,
    98,25,204,34,20,17,71,189,72,5,77,158,102,51,65,214,
    252,76,233,140,3,53,208,218,159,207,189,169,224,129,200,116,
    199,32,55,66,127,208,121,93,195,76,160,164,187,230,233,9,
    33,77,143,145,133,57,240,100,249,132,103,60,38,229,55,11,
    63,18,138,22,77,10,152,189,2,61,58,103,146,195,108,116,
    104,152,21,48,27,37,58,251,44,81,225,121,34,2,218,159,
    160,38,183,151,124,104,96,75,200,97,161,56,15,165,140,200,
    250,136,71,74,232,45,152,205,96,211,194,196,203,120,114,46,
    250,88,4,87,131,26,192,48,156,202,88,12,1,152,105,24,
    12,31,73,127,22,139,68,171,225,185,136,15,246,197,103,67,
    149,249,67,164,35,214,209,32,93,16,71,63,197,181,152,133,
    186,69,95,187,109,181,59,29,11,190,149,78,181,221,160,72,
    79,101,226,203,169,200,96,179,107,37,104,149,37,184,115,163,
    4,177,248,42,88,10,54,82,239,109,52,121,163,40,133,228,
    106,47,175,40,139,62,250,225,98,184,46,226,238,34,26,110,
    235,90,116,255,59,68,60,251,57,174,173,22,33,234,54,166,
    118,85,52,166,161,252,176,50,26,81,101,23,181,178,155,212,
    73,52,61,197,166,158,2,154,22,19,121,91,177,169,173,128,
    6,186,201,38,181,143,26,41,187,136,10,69,249,78,9,28,
    186,123,19,18,202,200,40,145,50,117,178,155,149,187,139,143,
    68,4,60,22,129,163,200,102,18,70,216,56,246,41,52,96,
    27,148,2,148,90,168,28,63,147,74,193,150,84,120,169,12,
    19,237,200,137,83,156,6,123,125,100,90,48,88,112,77,102,
    102,205,153,136,100,114,174,28,45,7,253,173,127,72,145,139,
    252,112,145,250,26,93,38,119,188,151,170,96,189,140,230,136,
    28,37,142,159,62,59,62,166,100,228,107,242,16,220,55,113,
    187,183,112,187,30,12,228,177,39,39,158,241,216,53,55,7,
    20,42,0,166,49,107,60,89,144,74,229,151,201,235,179,6,
    115,131,44,80,237,178,48,170,157,74,175,214,171,184,239,97,
    191,121,137,49,39,183,51,166,160,200,18,105,46,214,74,150,
    180,72,73,151,15,94,56,196,27,160,8,1,140,135,169,237,
    130,34,203,48,1,67,66,4,66,109,194,112,44,229,143,179,
    212,208,227,223,166,148,144,251,226,228,80,57,212,139,230,97,
    60,139,29,31,238,3,63,212,11,100,201,50,181,250,27,175,
    206,63,250,18,145,47,101,222,41,89,46,94,122,238,135,56,
    160,107,121,235,19,177,204,22,163,240,103,65,12,136,249,220,
    43,79,190,131,236,33,108,18,215,182,76,246,122,246,110,133,
    40,114,252,249,234,154,63,88,153,65,200,157,121,149,8,242,
    178,111,96,54,177,11,48,11,222,160,32,83,200,229,16,49,
    164,140,132,184,171,251,49,186,191,118,29,50,44,91,151,202,
    8,153,237,98,90,221,119,203,44,187,206,221,180,187,251,176,
    228,23,67,92,187,94,45,186,122,141,96,207,105,177,186,133,
    63,188,13,128,10,1,96,23,0,44,197,141,137,15,17,196,
    144,68,251,191,196,141,87,163,123,239,110,226,126,0,75,126,
    95,25,55,250,240,237,227,213,49,59,175,76,58,196,89,49,
    113,218,101,146,243,6,126,107,136,119,16,211,39,176,228,15,
    92,219,204,99,170,97,68,167,121,37,18,203,204,155,114,124,
    48,72,241,181,69,209,235,6,74,153,156,47,242,210,58,24,
    152,247,104,23,67,161,75,159,174,69,234,114,57,251,144,54,
    132,33,29,250,250,190,147,31,95,230,239,112,95,225,190,116,
    159,117,173,174,213,130,111,215,222,235,239,85,247,182,247,58,
    240,219,254,27,78,28,196,86,
};

EmbeddedPython embedded_m5_objects_XBar(
    "m5/objects/XBar.py",
    "/home/rachid/Documents/gem5-e1/src/mem/XBar.py",
    "m5.objects.XBar",
    data_m5_objects_XBar,
    1320,
    3361);

} // anonymous namespace