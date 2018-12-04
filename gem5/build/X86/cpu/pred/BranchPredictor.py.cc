#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BranchPredictor[] = {
    120,156,181,86,217,110,219,70,20,29,202,150,100,73,182,44,
    239,221,146,176,233,67,132,160,181,144,0,1,242,80,24,53,
    211,162,46,144,38,6,37,163,168,95,4,46,99,113,12,46,
    2,103,24,68,121,77,62,162,159,218,183,246,222,75,13,23,
    43,109,131,38,22,165,1,121,102,120,183,115,230,142,60,182,
    252,172,193,239,7,248,201,87,48,248,240,53,88,200,88,100,
    176,75,131,25,248,220,96,97,131,77,252,53,198,13,118,101,
    48,127,157,189,99,236,45,99,191,95,174,49,191,201,248,26,
    161,173,2,93,103,126,91,163,27,5,218,100,126,71,163,221,
    2,109,49,191,199,198,195,77,112,45,254,130,207,208,128,59,
    213,129,97,44,162,151,238,53,247,84,14,225,240,80,109,195,
    104,165,78,236,5,231,41,247,133,167,146,212,171,230,97,97,
    30,127,194,192,25,134,15,209,95,54,48,33,140,180,193,32,
    50,222,100,224,147,183,217,245,6,131,140,32,151,183,128,119,
    52,210,196,60,16,233,106,164,141,57,32,210,171,32,29,66,
    54,53,210,197,36,16,217,34,164,143,94,252,77,66,182,43,
    200,22,33,131,10,210,39,100,71,219,217,102,254,128,144,221,
    138,229,29,66,246,42,222,119,9,217,215,200,30,243,247,9,
    57,96,246,120,120,0,201,219,13,93,68,11,203,116,17,11,
    37,15,225,201,155,103,163,57,0,35,23,199,105,6,248,113,
    16,8,44,173,220,129,225,69,22,185,60,53,147,43,83,5,
    41,119,124,41,216,0,166,14,106,83,214,196,50,121,172,82,
    193,165,24,224,155,119,136,172,55,60,127,143,211,2,229,204,
    228,183,166,136,77,23,92,203,13,140,233,116,108,74,88,37,
    48,54,249,160,102,18,23,153,42,49,101,32,174,20,188,37,
    85,154,121,74,36,177,52,221,5,217,191,144,28,112,95,164,
    160,7,211,37,1,152,115,173,0,249,57,172,56,115,100,176,
    50,99,254,124,102,151,179,115,71,5,102,32,36,76,44,32,
    194,116,198,21,100,8,217,203,175,97,201,51,199,131,224,37,
    96,230,21,188,89,120,43,221,124,9,171,126,115,22,255,56,
    127,23,230,127,209,112,110,223,244,200,42,148,131,146,20,168,
    81,249,8,6,224,229,149,72,50,89,218,89,6,132,117,200,
    32,91,244,81,13,120,136,4,42,172,228,116,26,59,17,159,
    78,85,151,30,162,196,207,66,124,92,199,5,139,57,39,226,
    189,215,175,167,94,232,72,73,171,240,41,0,66,121,74,171,
    38,105,198,201,148,227,66,169,29,79,169,38,134,228,164,78,
    68,240,69,44,197,44,230,62,189,27,103,209,36,87,3,61,
    2,187,63,229,236,235,199,137,51,67,250,85,59,103,153,238,
    105,63,3,143,99,100,244,52,82,228,214,74,146,80,245,224,
    6,242,211,117,162,29,173,107,128,44,1,99,106,239,6,54,
    201,75,179,180,154,227,227,155,0,50,83,179,166,227,218,173,
    96,231,80,209,231,60,158,169,96,136,45,163,28,228,9,12,
    163,32,137,248,8,10,18,8,127,244,99,226,101,17,8,93,
    142,102,60,122,242,29,127,52,146,169,55,42,182,208,141,46,
    116,60,95,208,174,67,37,201,251,48,180,140,229,213,216,53,
    150,87,121,7,87,199,160,130,61,79,60,39,180,206,87,155,
    216,201,205,38,198,168,137,25,203,38,118,221,194,134,6,29,
    12,55,126,91,35,235,216,193,16,217,192,86,208,66,66,190,
    64,99,181,205,255,24,148,56,13,209,47,110,126,6,132,203,
    163,202,22,166,153,82,213,249,126,197,141,110,225,46,157,195,
    142,245,146,44,86,60,29,162,206,108,36,214,70,249,216,228,
    142,68,64,251,29,137,182,145,32,34,128,172,22,213,42,52,
    66,240,51,149,162,237,91,96,4,147,127,138,182,186,37,35,
    192,2,185,158,36,89,138,27,41,86,239,43,255,31,31,89,
    254,114,77,75,159,48,57,82,156,39,221,149,183,122,149,53,
    197,9,83,172,233,46,79,24,32,150,74,123,103,133,88,85,
    100,244,113,196,82,163,147,181,183,202,174,233,134,92,48,19,
    230,63,171,152,158,133,137,91,181,93,155,244,130,68,120,188,
    50,121,164,125,150,147,218,243,176,255,97,154,178,49,68,251,
    43,84,215,129,150,209,89,30,227,4,67,36,129,97,27,201,
    35,171,11,111,171,192,151,202,163,149,121,36,171,43,115,252,
    246,52,138,60,158,162,173,253,154,70,203,139,90,178,37,126,
    77,124,254,62,165,186,183,165,84,250,27,151,43,21,52,71,
    245,255,6,29,238,85,53,231,10,60,128,56,9,238,191,84,
    241,47,138,251,223,122,233,125,160,94,238,225,96,226,128,29,
    218,190,95,163,241,147,113,137,245,121,137,182,250,43,92,190,
    24,98,88,212,121,162,39,199,197,159,91,27,93,211,137,13,
    232,28,79,96,73,231,8,181,46,210,6,25,253,244,177,146,
    170,190,207,255,60,156,220,213,61,114,96,116,27,135,71,135,
    157,195,254,223,96,191,206,206,
};

EmbeddedPython embedded_m5_objects_BranchPredictor(
    "m5/objects/BranchPredictor.py",
    "/home/rachid/Documents/gem5-e1/src/cpu/pred/BranchPredictor.py",
    "m5.objects.BranchPredictor",
    data_m5_objects_BranchPredictor,
    1112,
    3103);

} // anonymous namespace