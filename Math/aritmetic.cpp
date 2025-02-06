#include "arithmetic.h"
using namespace isa;

Complex addition(Complex a,int i)
{
    Rationnel b = Rationnel(i,1);
    return addition(a,b);
}
//if The addition is a different type Rationnel and Complex
Complex addition(Complex a,Rationnel b)
{
    Complex result = Complex();
    result.setReal(b.addition(a.getReal()));
    result.setImaginary(a.getImaginary());
    return result;
}

//The addition is the same type

Complex addition(Rationnel a,Rationnel b)
{
    Complex temp = Complex();
    temp.setReal(a.addition(b));
    //we erase the imaginary party
    a.setNumerateur(0);
    temp.setImaginary(a);
    return temp;
}
Complex addition(Complex a,Complex b)
{
    return a.addition(b);
}