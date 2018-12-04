%module(package="m5.internal") X86LocalApic_vector
%{
#include "params/X86LocalApic.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_X86LocalApic.i"

%include "std_vector.i"

%template(vector_X86LocalApic) std::vector< X86ISA::Interrupts * >;
