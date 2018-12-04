#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Ide[] = {
    120,156,173,85,219,110,219,70,16,29,82,182,124,143,29,39,
    113,154,164,105,24,20,5,132,0,181,234,91,209,135,162,72,
    100,37,133,128,160,49,168,36,64,249,34,48,220,181,181,46,
    47,10,119,37,216,125,10,224,182,127,214,239,106,231,12,77,
    89,65,209,32,15,22,197,225,204,144,220,153,57,103,102,153,
    208,229,175,193,231,83,62,237,136,133,226,191,71,41,81,230,
    81,228,145,7,219,167,212,167,215,208,26,148,54,40,107,80,
    212,224,59,115,164,231,232,216,35,53,79,127,16,93,16,253,
    26,205,147,106,146,246,196,187,48,245,54,73,45,146,110,136,
    119,105,234,93,32,181,76,253,214,10,7,53,255,240,175,229,
    177,230,150,88,244,77,246,234,221,169,78,92,229,130,120,114,
    117,247,40,49,93,61,49,137,118,243,108,245,148,238,117,147,
    186,20,159,207,14,74,185,205,66,19,42,168,10,58,241,41,
    242,41,236,183,240,132,107,178,200,98,235,116,41,107,216,52,
    158,232,22,96,112,139,44,6,131,60,206,244,96,224,150,197,
    200,10,53,78,97,206,177,57,137,83,219,66,164,43,97,15,
    88,180,135,69,166,219,101,156,12,141,106,119,139,100,156,233,
    220,217,246,137,206,14,190,213,59,109,91,38,109,165,39,109,
    235,138,50,62,209,109,206,122,123,116,30,34,228,99,44,129,
    172,154,228,22,170,130,186,198,254,54,45,169,81,151,244,243,
    108,73,92,12,87,197,52,48,5,167,243,160,136,185,185,224,
    34,155,226,97,108,231,192,11,60,139,226,89,2,51,23,252,
    202,50,80,64,160,16,96,218,187,224,124,38,51,163,244,64,
    113,252,237,225,208,33,244,206,216,218,128,175,47,204,153,86,
    1,238,4,74,167,241,121,96,242,32,51,73,89,88,157,20,
    185,178,33,208,177,128,175,91,154,137,14,122,93,11,248,80,
    74,96,50,94,89,136,14,129,124,136,232,130,166,59,31,105,
    65,57,57,59,27,12,117,172,46,9,57,138,203,56,19,52,
    94,198,78,231,201,185,120,37,174,96,38,183,20,226,244,186,
    210,19,8,211,67,20,121,176,138,119,109,44,33,192,215,88,
    2,153,54,61,28,155,124,184,181,138,173,195,34,119,101,145,
    166,186,252,47,103,127,127,154,51,240,209,4,115,145,16,198,
    84,49,103,145,80,197,60,65,95,193,28,69,171,34,215,48,
    70,209,13,209,215,69,110,136,188,41,114,83,228,45,145,183,
    49,103,209,29,209,183,48,102,209,93,82,43,20,125,33,250,
    61,209,239,147,90,165,232,1,233,47,233,244,33,98,169,53,
    105,151,175,102,60,55,196,243,8,29,179,14,226,110,253,95,
    199,36,174,76,185,99,236,55,128,164,251,92,250,196,6,177,
    115,12,53,183,141,43,2,55,52,54,72,166,80,153,191,62,
    48,79,55,223,179,0,96,230,3,79,128,193,136,155,63,33,
    30,129,100,12,197,15,29,185,236,119,170,102,252,190,99,5,
    245,87,193,168,40,93,96,135,230,216,73,66,117,208,58,68,
    80,28,31,91,237,90,193,71,77,23,74,15,174,98,113,104,
    111,121,139,41,74,105,54,33,185,234,50,164,46,251,192,91,
    157,171,162,228,14,147,174,150,45,135,13,172,115,88,100,89,
    156,43,217,71,250,46,118,227,234,133,144,159,177,134,19,192,
    98,135,105,108,237,97,161,180,67,188,254,248,221,149,3,175,
    29,149,197,73,239,133,76,65,231,89,248,93,173,236,212,202,
    110,173,236,213,202,126,173,28,84,157,151,243,246,85,142,71,
    238,165,201,171,24,83,207,145,201,37,31,44,220,55,191,235,
    218,216,153,53,118,103,141,189,89,99,31,70,184,86,111,148,
    111,120,221,189,93,185,105,138,129,64,46,232,129,243,193,37,
    204,215,54,107,232,176,39,88,98,127,58,107,235,126,117,253,
    140,195,223,244,126,105,33,81,193,35,59,216,158,126,73,66,
    228,37,188,176,119,4,198,109,232,215,219,208,243,124,156,201,
    190,34,93,32,57,92,91,69,130,219,143,213,55,228,167,135,
    245,46,178,225,45,123,27,254,150,191,181,240,47,208,128,141,
    31,
};

EmbeddedPython embedded_m5_objects_Ide(
    "m5/objects/Ide.py",
    "/home/rachid/Documents/gem5-e1/src/dev/storage/Ide.py",
    "m5.objects.Ide",
    data_m5_objects_Ide,
    913,
    1926);

} // anonymous namespace
