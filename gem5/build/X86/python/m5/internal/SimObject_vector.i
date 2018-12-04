%module(package="m5.internal") SimObject_vector
%{
#include "params/SimObject.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_SimObject.i"

%include "std_vector.i"

%template(vector_SimObject) std::vector< SimObject * >;
