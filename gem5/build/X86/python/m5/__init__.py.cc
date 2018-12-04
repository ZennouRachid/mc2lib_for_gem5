#include "sim/init.hh"

namespace {

const uint8_t data_m5[] = {
    120,156,77,145,193,75,195,48,20,198,95,210,217,109,93,55,
    188,9,226,197,91,17,92,17,25,120,16,241,160,7,47,19,
    220,64,201,165,212,54,184,108,77,50,146,84,216,159,228,193,
    191,81,95,226,202,76,200,199,47,95,190,23,30,73,5,251,
    113,132,235,30,151,253,70,217,157,66,13,80,19,104,0,24,
    1,78,96,77,97,29,1,121,85,39,208,227,61,216,36,96,
    174,129,16,130,25,12,40,2,111,24,50,95,93,89,12,44,
    238,152,2,163,29,247,129,245,59,30,0,27,116,60,4,54,
    236,56,1,150,4,166,208,140,96,233,41,130,38,5,153,2,
    75,129,236,79,198,176,84,33,191,200,122,216,177,248,193,49,
    207,8,162,243,114,241,135,254,72,150,66,101,19,191,27,251,
    160,114,220,168,178,153,86,218,112,55,248,231,132,112,112,251,
    30,90,179,20,213,198,141,144,159,228,86,27,247,104,12,170,
    15,205,181,226,110,136,176,16,242,249,125,205,43,23,74,116,
    64,235,98,228,109,105,74,105,157,127,85,235,74,52,125,93,
    235,68,19,44,254,201,149,123,9,29,250,14,172,144,109,83,
    58,158,249,143,56,136,189,65,201,87,90,242,220,148,213,74,
    212,249,131,174,90,137,165,54,255,224,114,118,201,175,114,107,
    170,124,187,115,43,173,114,57,203,139,66,40,225,138,98,138,
    150,191,248,86,234,186,109,248,221,185,191,237,12,37,162,105,
    52,33,99,154,208,152,164,135,73,19,114,76,126,1,95,114,
    105,56,
};

EmbeddedPython embedded_m5(
    "m5/__init__.py",
    "/home/rachid/Documents/gem5-e1/src/python/m5/__init__.py",
    "m5",
    data_m5,
    338,
    523);

} // anonymous namespace
