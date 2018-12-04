#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Sequencer[] = {
    120,156,189,86,89,111,228,68,16,110,123,174,204,145,107,146,
    204,46,123,90,8,164,1,68,70,32,173,120,0,113,108,162,
    149,120,8,12,206,46,18,121,177,28,187,178,118,214,118,207,
    118,247,132,204,27,82,248,35,72,252,72,222,160,170,124,140,
    103,39,32,30,88,198,153,158,234,175,171,170,235,232,254,156,
    64,20,159,6,126,191,198,175,254,5,135,16,255,44,145,8,
    241,188,144,172,92,178,69,98,139,212,22,103,182,176,194,134,
    0,91,92,88,34,108,138,95,133,184,17,226,167,179,134,8,
    91,2,26,140,182,43,180,41,194,78,137,110,84,104,75,132,
    221,18,237,85,104,91,132,125,113,58,30,96,16,241,159,248,
    25,91,40,25,26,62,204,197,46,14,39,144,126,127,126,9,
    129,49,27,56,115,231,231,139,169,84,38,168,167,242,148,82,
    249,3,7,16,226,204,162,132,48,102,220,141,130,177,4,110,
    14,109,113,217,161,140,48,143,27,204,104,67,64,151,82,185,
    193,213,158,128,62,101,66,242,64,192,38,37,67,242,86,77,
    222,22,176,67,121,145,188,203,242,6,203,67,246,188,39,96,
    191,244,124,176,134,140,24,185,35,224,174,184,124,167,4,239,
    49,120,191,4,187,12,62,40,109,27,84,36,66,30,214,144,
    62,35,143,106,200,128,145,199,194,61,29,111,82,105,108,42,
    195,125,28,82,72,39,10,11,53,209,11,109,80,46,139,118,
    24,69,49,213,204,208,160,183,112,56,154,190,112,116,226,95,
    129,51,195,117,189,93,64,169,143,118,42,199,246,139,170,59,
    232,117,101,97,175,92,152,197,178,238,100,167,102,32,213,34,
    7,41,192,60,26,71,114,55,245,67,58,122,190,241,157,192,
    15,34,112,20,188,158,131,54,218,209,243,25,89,64,200,26,
    113,166,205,223,107,12,81,35,144,89,134,254,32,116,140,116,
    208,219,108,62,118,40,71,58,45,158,151,249,41,120,158,233,
    241,36,149,225,60,161,105,147,20,22,51,96,225,185,154,3,
    107,251,231,218,40,31,15,26,105,7,215,215,94,4,126,8,
    202,180,112,58,245,149,159,26,58,108,223,102,198,116,240,247,
    10,148,142,101,102,168,102,63,98,0,82,157,82,13,168,206,
    108,193,21,49,59,213,234,9,151,142,151,219,212,35,158,242,
    86,181,21,114,134,229,244,242,85,111,86,98,88,202,21,140,
    46,198,114,187,173,194,138,183,204,21,182,10,163,26,68,185,
    62,149,50,225,232,158,249,137,6,179,139,210,92,199,217,75,
    143,142,139,103,128,99,34,52,147,158,2,163,22,158,204,60,
    109,252,36,225,72,169,173,167,220,69,206,1,139,2,88,13,
    170,138,159,45,76,31,127,217,143,94,170,212,180,11,148,188,
    23,29,244,168,255,184,207,107,189,130,82,207,115,148,170,23,
    107,15,123,234,105,234,126,22,128,26,211,225,93,14,250,43,
    28,38,145,76,97,130,189,139,226,112,114,44,131,121,138,113,
    233,201,75,72,159,124,12,159,76,180,10,38,111,222,137,211,
    210,223,225,108,193,55,231,93,114,70,67,219,202,159,161,61,
    176,170,199,30,90,67,235,0,31,250,53,155,53,38,154,42,
    121,189,168,232,200,42,233,104,255,13,58,34,34,106,208,85,
    165,189,220,247,72,197,249,135,171,202,94,241,190,142,169,107,
    46,15,212,54,151,10,233,118,87,42,240,223,149,129,162,250,
    140,156,53,139,50,84,137,86,106,235,188,251,251,173,137,34,
    215,34,251,66,75,92,182,153,243,16,236,172,78,55,120,202,
    52,76,236,107,51,19,87,72,155,145,62,35,3,162,94,98,
    92,68,54,75,157,110,201,145,91,140,228,12,157,147,235,110,
    105,213,47,57,114,88,113,228,251,229,107,165,202,72,63,184,
    165,13,203,178,68,145,75,169,198,212,88,61,226,251,95,49,
    82,20,27,39,241,13,42,46,120,233,120,73,103,181,165,152,
    78,177,254,136,239,252,245,146,197,198,113,22,36,135,206,76,
    193,5,24,52,209,31,56,114,110,240,174,101,33,94,200,216,
    249,173,35,244,179,194,168,182,224,4,139,32,1,237,92,72,
    133,108,87,120,115,206,1,231,224,132,72,88,137,12,94,77,
    146,248,10,72,64,36,72,240,150,134,49,53,142,169,249,8,
    21,167,126,172,156,128,44,226,112,188,183,126,194,184,66,196,
    128,104,172,53,159,55,183,87,226,116,30,142,40,73,190,213,
    113,80,137,225,82,60,226,32,205,176,82,240,176,32,94,81,
    16,134,195,53,216,37,254,48,119,243,148,189,90,202,94,89,
    179,220,176,200,209,51,145,2,29,201,36,116,239,80,84,100,
    104,246,43,66,203,192,252,44,213,171,146,211,218,252,166,80,
    128,249,190,133,139,67,167,234,115,114,118,111,201,31,246,182,
    181,221,34,182,232,22,207,176,97,232,63,157,227,147,111,214,
    111,211,191,164,141,79,73,229,241,45,231,181,238,244,255,102,
    13,10,234,135,58,107,124,55,238,148,103,37,125,114,56,163,
    55,167,230,23,44,205,136,215,92,74,215,173,136,144,203,199,
    110,222,66,120,188,241,23,249,155,255,203,71,228,148,154,208,
    179,122,214,142,61,58,24,53,71,163,191,0,182,7,168,52,
};

EmbeddedPython embedded_m5_objects_Sequencer(
    "m5/objects/Sequencer.py",
    "/home/rachid/Documents/gem5-e1/src/mem/ruby/system/Sequencer.py",
    "m5.objects.Sequencer",
    data_m5_objects_Sequencer,
    1152,
    2838);

} // anonymous namespace
