#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleTrace[] = {
    120,156,173,80,193,78,195,48,12,117,218,49,161,113,132,35,
    71,132,34,36,22,33,196,13,77,8,113,68,3,173,187,208,
    75,212,37,134,22,53,109,213,164,210,118,134,255,6,59,48,
    24,119,162,248,201,142,237,103,231,25,248,62,41,217,13,153,
    63,33,176,116,5,212,0,75,155,0,10,120,22,96,83,120,
    7,120,3,120,202,19,176,35,200,228,30,21,86,31,116,164,
    32,47,48,156,133,3,194,172,114,93,141,203,190,48,104,182,
    244,156,189,101,250,35,2,4,200,5,15,97,42,1,121,10,
    139,76,38,148,88,112,153,63,38,48,221,160,218,75,213,245,
    237,10,149,143,132,58,48,227,180,44,229,136,231,237,19,104,
    221,20,14,181,14,147,24,184,214,14,53,135,177,96,211,97,
    124,55,235,181,46,177,176,216,75,222,228,23,252,140,64,149,
    173,67,69,204,101,101,213,93,107,6,135,77,240,234,5,221,
    213,57,94,40,223,27,245,103,151,157,207,77,187,77,92,152,
    201,60,143,28,139,177,152,75,86,50,176,56,143,220,16,14,
    183,222,125,229,3,54,216,63,172,94,209,132,159,206,255,93,
    40,202,114,253,37,196,236,148,57,89,215,73,242,9,161,100,
    111,69,
};

EmbeddedPython embedded_m5_objects_SimpleTrace(
    "m5/objects/SimpleTrace.py",
    "/home/rachid/Documents/gem5-e1/src/cpu/o3/probe/SimpleTrace.py",
    "m5.objects.SimpleTrace",
    data_m5_objects_SimpleTrace,
    274,
    488);

} // anonymous namespace
