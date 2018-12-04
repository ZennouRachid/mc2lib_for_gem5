#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ACPIRSDT[] = {
    120,156,189,88,123,111,27,199,17,159,61,82,164,72,75,22,
    229,247,67,182,89,196,138,217,6,22,147,166,110,210,198,117,
    235,218,70,225,34,144,157,147,1,203,74,209,195,233,110,37,
    29,69,222,177,119,43,219,12,36,160,168,140,62,62,64,63,
    65,255,105,255,207,247,107,231,55,123,71,157,30,78,3,180,
    148,68,46,247,246,102,119,103,230,55,175,221,128,242,191,41,
    254,254,138,191,217,223,20,81,200,31,69,125,162,129,162,53,
    135,148,118,40,60,79,219,83,148,254,132,194,41,122,71,180,
    86,33,93,161,125,238,84,233,235,10,197,31,19,104,46,8,
    205,42,133,245,147,104,102,100,221,105,234,87,101,196,161,81,
    147,244,20,173,213,232,101,60,79,85,93,167,237,38,165,239,
    72,41,21,43,90,29,181,10,250,105,90,107,48,205,13,166,
    105,10,205,183,160,201,95,54,240,18,244,97,131,194,38,189,
    99,142,207,80,120,70,24,224,29,103,164,51,75,225,172,116,
    206,82,120,86,58,115,197,226,45,90,155,47,250,231,74,253,
    243,165,254,133,82,255,162,244,231,72,207,83,239,18,245,46,
    83,239,10,109,40,10,91,88,150,133,125,181,118,149,116,149,
    122,215,104,237,26,105,254,92,165,125,69,42,156,47,205,184,
    46,51,206,141,103,44,200,140,27,180,118,131,52,127,22,236,
    140,105,90,233,92,100,72,162,127,243,95,135,97,33,51,195,
    205,107,157,102,81,18,123,81,188,145,68,14,222,215,209,0,
    196,0,77,37,71,243,17,208,28,146,64,201,188,51,154,123,
    188,130,162,30,3,229,96,135,176,66,87,247,20,30,122,21,
    218,229,78,149,54,228,69,175,154,83,236,49,70,243,180,75,
    212,155,162,93,25,89,121,25,95,167,170,169,9,12,219,128,
    193,190,229,185,120,187,202,27,173,116,176,251,178,112,109,192,
    245,146,240,102,206,113,227,13,253,212,31,120,171,159,255,244,
    225,163,231,79,221,149,199,47,58,96,222,52,32,193,96,152,
    164,166,31,173,155,105,80,122,177,63,208,158,103,154,252,144,
    242,52,19,25,150,218,84,249,177,151,68,49,179,192,50,101,
    38,141,134,102,118,60,219,27,36,225,78,95,155,51,60,242,
    84,70,158,164,105,146,118,160,19,23,141,65,51,220,222,52,
    224,113,128,45,58,96,78,154,236,57,55,221,173,100,160,187,
    169,31,108,69,97,247,113,18,236,12,116,108,178,238,166,30,
    220,187,171,63,233,174,239,68,253,176,203,252,119,135,35,179,
    149,196,221,193,189,46,51,163,211,216,239,119,143,9,183,196,
    68,16,59,123,19,109,122,57,135,91,186,63,212,41,4,206,
    206,98,87,53,163,206,171,155,170,162,230,213,172,138,106,5,
    138,245,50,138,255,204,81,116,114,159,100,32,85,142,170,67,
    123,210,1,84,29,160,8,240,42,192,140,69,100,72,54,21,
    237,59,244,187,10,8,246,184,173,178,35,221,28,35,216,19,
    71,178,43,213,105,143,81,158,98,16,191,89,144,133,166,101,
    33,135,118,185,101,120,171,180,199,158,202,148,60,196,237,118,
    131,210,127,160,223,107,192,136,85,76,180,186,91,99,244,171,
    99,244,173,205,66,146,48,74,161,107,23,230,218,105,22,163,
    73,182,52,244,205,150,59,91,0,195,42,18,128,151,147,216,
    98,184,17,197,97,129,169,181,138,141,168,207,86,225,66,127,
    178,154,144,245,19,127,76,6,165,5,253,36,211,98,89,178,
    182,59,7,66,80,111,12,101,25,236,10,126,100,114,168,179,
    0,86,196,214,101,87,4,7,88,109,194,150,225,194,153,47,
    96,245,107,98,7,45,182,132,26,219,65,135,237,96,70,77,
    113,111,193,153,81,103,213,114,4,53,6,144,11,214,81,45,
    140,226,95,100,161,80,180,237,80,186,32,110,202,31,5,188,
    224,139,187,226,231,120,247,21,132,183,163,236,233,12,170,29,
    220,21,51,97,123,97,202,251,112,92,134,16,184,79,81,175,
    150,131,204,166,99,141,34,29,161,101,114,44,227,240,226,85,
    202,254,78,172,76,70,127,151,114,43,217,175,176,25,180,136,
    93,150,195,1,143,94,226,13,255,36,198,149,199,4,65,221,
    108,69,89,242,198,122,50,250,18,212,86,216,67,158,143,158,
    173,247,116,96,178,91,60,240,42,217,105,7,126,28,39,166,
    237,135,97,219,55,236,233,235,59,70,103,109,147,180,23,179,
    14,144,115,175,21,134,51,94,111,52,212,174,116,172,181,132,
    81,96,56,134,156,151,7,241,194,76,27,198,125,43,9,51,
    30,199,212,77,109,220,22,102,64,185,137,48,32,102,225,129,
    20,219,50,29,28,245,97,193,129,141,40,181,194,82,50,221,
    223,144,32,21,244,253,44,243,192,129,140,139,125,65,234,215,
    126,127,71,203,234,25,175,199,12,161,107,121,152,116,236,185,
    2,57,10,177,69,150,56,137,195,17,179,22,5,159,98,215,
    43,121,4,130,237,93,100,187,171,115,91,227,223,154,186,228,
    4,213,220,218,106,133,197,93,130,204,36,120,171,28,114,182,
    190,125,14,25,29,71,156,94,196,129,181,186,63,66,15,147,
    221,219,104,22,209,124,136,230,78,33,241,4,197,158,61,42,
    182,112,239,136,172,65,37,151,106,236,71,95,31,242,163,171,
    7,126,196,81,109,101,87,242,101,175,82,242,135,10,228,78,
    31,228,238,3,79,99,152,217,211,64,42,126,195,73,180,108,
    249,216,112,217,189,138,173,126,192,205,157,197,236,78,219,218,
    89,123,203,207,218,113,114,96,220,109,188,180,113,11,166,237,
    46,64,225,37,227,221,44,25,175,219,6,5,44,215,253,0,
    77,245,125,26,255,225,169,106,124,211,106,252,55,216,106,38,
    183,174,89,177,170,166,10,96,26,128,97,156,216,190,226,102,
    116,25,186,47,107,253,50,167,180,151,241,53,206,82,162,122,
    36,170,79,37,81,73,178,147,90,175,8,93,189,169,162,83,
    3,0,27,21,186,148,103,160,12,41,98,152,38,111,71,237,
    100,163,109,168,96,232,254,98,182,180,152,125,193,49,164,253,
    224,64,213,121,188,72,245,16,254,110,253,31,106,48,81,204,
    207,88,234,201,219,64,75,146,144,39,207,179,238,110,235,19,
    47,79,62,140,138,192,224,20,48,72,192,227,34,5,113,110,
    210,24,52,199,24,64,10,108,145,53,5,128,138,186,204,14,
    94,82,63,190,176,202,12,166,245,23,146,98,84,209,159,9,
    218,101,37,230,222,44,158,82,120,11,40,179,223,147,120,254,
    9,25,199,214,134,200,50,66,193,110,146,125,38,164,54,1,
    253,150,254,90,10,27,69,154,168,228,133,74,217,89,170,99,
    103,17,88,190,87,42,168,30,246,23,168,156,29,11,100,226,
    25,182,248,187,125,56,2,73,101,34,58,208,102,130,152,76,
    219,29,60,48,243,234,0,17,4,220,235,234,188,99,77,66,
    172,229,51,52,159,143,93,85,21,99,147,225,235,214,209,8,
    89,74,12,158,13,49,171,216,188,42,236,206,213,205,77,254,
    229,53,158,174,60,244,30,61,251,242,217,242,138,135,229,138,
    62,150,149,170,149,114,231,254,53,38,255,152,27,205,71,45,
    37,103,67,194,105,135,77,7,173,3,228,247,29,197,39,68,
    174,20,222,201,9,209,158,4,93,91,41,136,169,22,95,137,
    20,136,48,135,34,179,168,104,217,42,111,12,190,197,21,205,
    219,73,187,27,160,189,223,247,7,235,161,255,0,137,47,195,
    86,65,225,94,78,193,119,171,204,55,92,67,189,143,117,121,
    252,162,224,255,245,164,171,207,251,100,15,141,194,183,184,66,
    152,4,18,17,94,108,233,246,64,15,214,249,156,185,21,13,
    219,27,125,127,83,240,168,228,114,61,43,228,50,2,104,201,
    123,37,110,100,200,253,203,73,59,72,98,142,124,59,129,73,
    210,118,168,185,146,215,97,251,110,91,194,102,59,202,218,254,
    58,191,245,3,99,77,253,176,163,74,1,229,167,155,153,212,
    74,219,111,208,61,13,60,61,62,84,71,92,48,110,211,184,
    94,176,41,66,66,12,42,38,41,5,173,231,112,110,225,131,
    156,25,217,104,245,16,205,61,52,93,42,231,219,9,34,248,
    115,4,58,172,14,37,213,212,117,167,225,152,121,235,167,5,
    217,115,204,203,142,187,230,250,247,113,77,93,165,181,169,194,
    65,107,160,212,117,156,10,209,54,16,227,215,154,197,109,208,
    25,25,156,145,139,150,90,126,209,194,174,92,255,95,93,89,
    252,225,52,60,33,253,191,122,176,251,139,211,102,219,125,64,
    121,62,127,159,247,170,178,76,179,214,123,123,170,40,97,203,
    2,201,33,248,202,73,134,228,5,169,246,141,182,208,220,158,
    188,140,226,254,118,207,157,3,151,60,94,70,62,30,139,179,
    47,69,204,232,130,32,86,92,108,225,54,77,174,15,141,20,
    140,168,39,127,41,87,87,34,190,231,216,146,242,192,16,107,
    99,45,224,250,45,214,111,188,99,154,176,69,35,8,253,225,
    80,199,161,251,49,230,124,66,229,226,79,104,38,109,5,136,
    59,35,42,85,22,21,117,129,171,139,227,94,135,16,86,146,
    81,32,108,141,253,236,20,192,20,131,253,99,97,176,29,220,
    201,28,196,85,23,97,201,70,210,113,16,117,159,140,113,184,
    113,162,53,50,63,105,164,51,156,57,254,11,5,87,57,82,
    23,230,207,162,53,49,241,80,247,181,209,199,241,53,80,77,
    126,234,10,53,103,170,100,196,181,126,93,6,121,142,231,157,
    74,132,7,112,127,160,252,166,144,35,188,170,113,140,191,232,
    52,106,13,37,201,242,200,245,111,105,172,54,30,67,229,102,
    43,221,81,230,98,196,64,203,121,10,19,62,188,242,141,178,
    220,74,89,165,203,77,89,145,228,128,143,156,124,150,253,129,
    189,2,145,247,249,25,41,179,246,47,183,114,72,255,238,71,
    104,238,142,225,252,25,102,163,250,30,220,91,42,68,94,202,
    133,93,25,101,143,117,22,188,240,215,249,0,245,90,163,94,
    144,187,186,193,61,179,120,100,198,33,37,149,231,153,235,39,
    82,174,68,3,123,165,36,121,177,252,62,76,125,238,95,60,
    50,154,233,52,242,251,209,55,246,178,177,24,22,133,189,127,
    235,15,233,187,74,227,50,169,100,108,243,209,119,210,3,122,
    1,39,213,155,81,198,12,200,238,39,236,155,199,33,152,72,
    81,157,31,49,254,242,42,167,97,174,182,36,182,39,225,7,
    245,34,46,227,106,169,49,221,80,53,252,206,241,175,195,49,
    202,169,240,121,116,86,85,249,183,197,191,45,103,166,213,168,
    54,26,76,119,102,70,21,255,183,216,204,155,206,173,86,67,
    253,7,29,23,191,113,
};

EmbeddedPython embedded_m5_internal_param_X86ACPIRSDT(
    "m5/internal/param_X86ACPIRSDT.py",
    "/home/rachid/Documents/gem5-e1/build/X86/python/m5/internal/param_X86ACPIRSDT.py",
    "m5.internal.param_X86ACPIRSDT",
    data_m5_internal_param_X86ACPIRSDT,
    2358,
    6822);

} // anonymous namespace