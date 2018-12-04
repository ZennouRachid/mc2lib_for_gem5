#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Prefetcher[] = {
    120,156,181,86,223,111,227,68,16,94,39,105,126,53,237,245,
    170,187,130,0,33,3,18,13,39,174,17,15,247,130,16,130,
    246,4,66,130,94,113,123,66,244,197,218,216,147,120,123,246,
    58,231,93,95,27,158,144,142,23,36,254,18,254,73,152,25,
    103,19,83,210,2,18,77,154,237,238,183,227,221,153,217,239,
    219,113,36,22,159,38,254,190,192,159,249,25,155,24,255,60,
    145,10,145,9,113,46,132,71,227,134,72,61,113,182,232,53,
    176,215,20,32,196,196,19,113,75,252,34,196,107,33,126,60,
    111,138,120,67,64,147,209,246,18,109,137,184,35,160,197,104,
    119,137,110,136,184,231,208,254,18,109,139,120,83,156,14,7,
    232,132,250,3,63,67,15,123,118,11,155,163,52,143,94,64,
    252,108,124,1,145,173,96,106,30,217,109,108,15,165,129,147,
    2,38,96,163,4,138,168,30,212,33,5,245,43,54,232,237,
    185,71,161,157,55,200,71,114,203,19,232,6,180,197,5,250,
    215,21,23,61,138,237,117,67,156,247,25,220,20,48,16,24,
    38,33,91,14,105,82,188,132,108,215,144,13,70,238,213,144,
    54,35,59,53,164,195,200,125,17,156,14,187,232,77,208,32,
    191,222,194,38,131,108,20,73,244,123,52,91,68,48,26,99,
    56,7,73,98,222,195,233,211,185,177,144,249,54,81,198,159,
    45,67,244,199,144,230,122,106,124,155,27,31,173,158,233,116,
    238,235,220,170,201,188,110,149,107,63,83,198,128,225,157,142,
    215,205,23,32,99,99,222,190,105,250,178,80,22,31,127,255,
    166,249,88,90,233,203,40,2,222,229,163,155,204,148,54,182,
    40,35,171,176,239,172,135,187,116,136,148,140,48,212,50,131,
    48,180,125,30,100,121,92,166,52,108,145,193,124,6,220,57,
    43,74,96,107,57,198,181,100,100,217,58,186,186,10,19,12,
    1,10,187,129,195,19,89,200,204,182,151,121,227,46,130,160,
    173,37,54,72,61,231,255,6,103,105,209,195,60,79,249,193,
    175,100,106,192,118,176,151,235,144,114,230,250,148,31,222,22,
    251,156,12,55,65,145,187,62,133,55,36,198,173,26,115,132,
    205,40,201,51,24,161,179,137,138,71,79,243,168,204,208,17,
    51,154,66,246,228,49,124,50,50,69,52,90,115,252,43,38,
    31,204,230,76,148,3,90,144,210,213,246,170,239,195,198,174,
    87,125,237,14,194,223,151,80,66,124,155,2,126,91,175,0,
    65,10,32,29,180,5,116,196,69,151,20,176,160,124,207,33,
    45,71,240,62,35,117,130,15,106,72,199,9,165,66,182,73,
    236,11,89,44,109,122,11,89,160,8,232,240,130,135,228,218,
    59,235,69,240,146,99,66,25,40,210,57,179,252,91,105,65,
    71,115,127,146,23,254,20,52,20,56,142,87,76,51,138,140,
    204,7,216,124,39,175,84,86,102,190,46,179,49,49,112,226,
    87,203,213,140,205,62,177,228,101,41,77,114,125,146,137,13,
    153,212,241,130,172,188,251,211,92,239,219,202,20,85,19,151,
    58,150,218,214,23,124,68,11,234,60,159,249,28,10,106,211,
    135,84,101,74,163,155,181,39,10,192,53,140,101,177,156,201,
    233,106,215,75,101,19,255,228,136,188,93,68,167,244,116,225,
    193,240,62,229,139,142,51,32,222,6,196,217,128,200,29,16,
    5,109,111,33,133,40,149,198,4,124,193,16,196,92,255,6,
    185,79,70,105,149,61,150,13,71,17,26,245,19,4,116,127,
    218,193,10,227,140,212,128,137,74,45,20,193,61,50,219,164,
    109,40,182,208,80,156,108,101,229,52,116,33,220,149,6,136,
    39,159,210,130,15,106,26,104,123,78,3,187,13,86,193,169,
    45,84,124,107,29,248,253,154,10,168,109,50,255,91,2,54,
    196,69,187,198,255,142,67,150,252,239,58,164,237,216,222,171,
    217,116,157,70,42,164,71,101,141,144,205,154,205,166,83,13,
    34,91,172,145,129,211,200,210,102,107,165,17,58,154,224,221,
    91,52,98,56,98,210,8,29,176,121,179,198,252,40,215,19,
    156,211,17,248,41,188,66,30,182,92,193,57,75,10,48,73,
    158,198,127,183,17,203,85,148,94,187,10,139,235,212,202,130,
    169,89,155,37,73,106,184,244,241,108,11,133,74,164,243,224,
    250,117,188,84,32,222,175,6,11,1,49,60,205,243,23,229,
    204,183,114,156,2,107,235,75,99,242,72,33,225,95,41,59,
    39,227,235,70,84,160,158,27,240,51,137,215,122,225,171,216,
    167,34,25,251,88,22,109,94,204,121,145,213,86,43,81,146,
    8,221,85,177,86,67,123,212,44,5,19,188,225,106,82,38,
    81,77,24,31,115,222,114,202,170,49,79,42,93,13,72,75,
    134,210,177,26,178,191,33,5,91,61,202,67,73,241,177,212,
    88,180,252,70,83,26,8,171,112,66,21,115,161,138,97,90,
    0,220,149,136,136,72,95,211,130,123,43,17,185,50,210,168,
    201,8,239,164,233,237,197,228,227,255,36,35,36,50,167,123,
    255,22,34,91,222,147,136,220,112,151,253,63,158,102,247,223,
    157,102,240,225,95,210,249,255,230,148,98,250,129,22,236,214,
    114,122,60,36,53,6,194,93,204,217,147,131,25,189,151,152,
    138,59,56,42,242,171,170,176,243,205,198,39,195,75,221,145,
    155,188,239,103,213,107,213,231,84,165,12,93,220,59,94,223,
    235,55,246,6,123,91,123,59,127,2,195,247,228,233,
};

EmbeddedPython embedded_m5_objects_Prefetcher(
    "m5/objects/Prefetcher.py",
    "/home/rachid/Documents/gem5-e1/src/mem/cache/prefetch/Prefetcher.py",
    "m5.objects.Prefetcher",
    data_m5_objects_Prefetcher,
    1198,
    3080);

} // anonymous namespace