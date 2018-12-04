%module(package="m5.internal") MessageBuffer_vector
%{
#include "params/MessageBuffer.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_MessageBuffer.i"

%include "std_vector.i"

%template(vector_MessageBuffer) std::vector< MessageBuffer * >;
