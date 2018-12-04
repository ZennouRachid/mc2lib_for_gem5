#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Tags[] = {
    120,156,181,84,219,110,211,64,16,29,231,214,36,77,91,46,
    74,90,144,64,126,66,81,5,181,120,168,4,18,66,244,2,
    18,136,155,220,34,68,95,172,205,122,90,187,216,113,240,110,
    80,205,107,249,6,126,23,102,38,55,218,208,151,42,228,50,
    218,61,222,204,204,57,103,178,26,198,175,50,125,95,208,215,
    252,162,16,210,199,129,4,224,112,188,114,70,171,18,36,37,
    72,75,112,84,2,39,44,3,150,224,216,129,176,2,63,1,
    206,1,190,28,149,33,172,2,150,5,173,77,209,10,132,75,
    128,21,65,235,83,180,10,97,99,130,54,167,104,13,194,229,
    73,134,214,20,93,130,112,5,14,186,171,212,90,252,155,94,
    93,135,86,150,195,230,104,185,66,97,47,201,244,87,12,63,
    244,78,81,91,91,39,100,87,25,60,84,39,70,255,77,114,
    151,73,126,161,128,0,71,14,83,37,54,84,145,219,116,128,
    218,194,26,156,82,191,117,56,109,48,227,115,162,219,16,176,
    41,224,50,16,115,6,91,2,174,8,184,202,42,48,184,10,
    254,65,183,74,217,253,18,215,233,80,72,49,245,180,210,17,
    122,150,122,241,122,212,212,86,20,153,155,244,72,171,129,210,
    177,45,220,184,239,246,10,139,198,220,38,180,199,68,92,19,
    255,192,25,126,159,240,195,8,221,40,182,110,162,44,246,117,
    225,30,103,185,107,163,216,184,146,189,187,198,66,48,237,32,
    232,171,20,131,192,54,101,147,102,225,48,225,109,133,15,20,
    3,148,197,97,62,68,57,173,122,198,230,138,20,227,211,250,
    236,44,136,80,133,152,91,38,241,81,229,42,149,7,239,48,
    205,242,226,128,122,178,181,209,3,236,91,73,196,125,90,22,
    246,53,1,107,66,138,186,9,146,184,143,129,60,107,78,40,
    141,182,252,243,189,66,39,104,236,50,45,137,80,48,38,212,
    101,139,102,193,60,165,224,69,89,138,30,245,23,197,161,183,
    159,233,97,74,117,141,119,130,233,246,35,124,236,153,92,123,
    151,244,101,195,183,6,133,232,191,201,105,120,106,106,142,188,
    75,237,114,187,220,114,108,107,60,28,7,104,119,140,201,244,
    252,128,236,47,96,64,150,121,22,88,34,255,22,167,116,255,
    61,11,129,65,27,40,238,130,166,66,6,89,54,177,178,241,
    119,26,13,243,144,144,207,17,218,8,201,237,204,85,90,211,
    56,184,252,115,87,245,67,55,84,86,185,6,191,13,73,151,
    88,37,73,209,101,114,62,19,241,165,182,12,35,139,238,47,
    113,96,203,253,6,7,46,229,179,5,98,181,20,21,67,119,
    179,44,177,60,157,179,172,193,168,234,98,13,98,81,158,112,
    154,214,204,32,167,237,144,61,220,252,91,255,211,212,21,103,
    226,202,221,75,174,112,44,139,43,21,214,154,45,247,215,249,
    96,123,94,235,36,31,146,192,163,255,230,69,117,108,99,60,
    249,58,33,21,68,161,197,50,93,159,220,173,181,41,83,249,
    87,248,100,96,150,250,56,72,174,71,245,14,31,188,55,79,
    53,151,188,65,78,137,175,160,236,111,76,102,97,177,76,185,
    163,151,151,152,114,189,87,59,215,246,147,207,152,141,121,146,
    199,42,184,218,210,255,197,143,155,121,115,145,223,251,110,125,
    50,67,233,246,214,128,111,76,35,23,43,239,242,236,172,240,
    153,174,92,71,50,242,50,13,34,148,100,91,104,127,82,247,
    217,232,194,127,254,0,198,151,95,211,105,58,55,74,157,213,
    78,189,83,237,84,255,0,15,231,168,236,
};

EmbeddedPython embedded_m5_objects_Tags(
    "m5/objects/Tags.py",
    "/home/rachid/Documents/gem5-e1/src/mem/cache/tags/Tags.py",
    "m5.objects.Tags",
    data_m5_objects_Tags,
    779,
    2034);

} // anonymous namespace