#include "arithmetic.h"

void testRationel();
int main()
{
    testRationel();
    return 0;
}
void testRationel()
{
    isa::Rationnel un_demi = isa::Rationnel(1,2);
    isa::Rationnel trois_quarts = isa::Rationnel(3,4);
    
    isa::Complex i = isa::Complex();
    isa::Complex j = isa::Complex();
    isa::Complex result = isa::Complex();
    isa::Complex o = isa::Complex();
    
    int d = 7;
    
    i.setReal(un_demi);
    i.setImaginary(trois_quarts);
    
    
    j.setReal(trois_quarts);
    j.setImaginary(un_demi);
    result = i.multiplication(j);
    i.Info();
    std::cout << " + ";
    j.Info();
    std::cout << " = ";
    result.Info();
    std::cout << std::endl;
   
   o = addition(i,d);
   i.Info();
   std::cout << " + " << d;
   std::cout << " = ";
   o.Info();
   std::cout << std::endl;
}