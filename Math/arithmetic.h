#include "Complex.h"
/*
    This header is used to perform basic operations with different types  
    or the same type when the exact type is unknown.
*/

isa::Complex addition(isa::Complex a,isa::Rationnel b);
isa::Complex addition(isa::Complex a,int i);
isa::Complex addition(isa::Rationnel a,isa::Rationnel b);
isa::Complex addition(isa::Complex a,isa::Complex b);

isa::Complex soustraction(isa::Complex a,isa::Rationnel b);
isa::Complex soustraction(isa::Complex a,int i);
isa::Complex soustraction(isa::Rationnel a,isa::Rationnel b);
isa::Complex soustraction(isa::Complex a,isa::Complex b);

isa::Complex multiplication(isa::Complex a,isa::Rationnel b);
isa::Complex multiplication(isa::Complex a,int i);
isa::Complex multiplication(isa::Rationnel a,isa::Rationnel b);
isa::Complex multiplication(isa::Complex a,isa::Complex b);
