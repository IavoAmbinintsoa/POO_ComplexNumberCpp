#include "Complex.h"
using namespace isa;
Complex::Complex()
{
}
Complex::~Complex()
{
}

void Complex::setReal(Rationnel a)
{
    real = a;
}
void Complex::setImaginary(Rationnel a)
{
    imaginary = a;
}
Rationnel Complex::getReal()
{
    return real;
}
Rationnel Complex::getImaginary()
{
    return imaginary;
}
void Complex::Info()
{
    std::cout << " [ " << "(" << real.getNumerateur() << "/"
            << real.getDenominateur() << ")" << " + " 
            << "(" << imaginary.getNumerateur() << "/"
            << imaginary.getDenominateur() << ")" << "i" << " ] " ;
}
Complex Complex::addition(Complex a)
{
    Complex Result = Complex();
    Result.setReal(real.addition(a.getReal()));
    Result.setImaginary(imaginary.addition(a.getImaginary()));
    return Result;
}
Complex Complex::soustraction(Complex a)
{
    Complex Result = Complex();
    Result.setReal(real.soustraction(a.getReal()));
    Result.setImaginary(imaginary.soustraction(a.getImaginary()));
    return Result;
}
Complex Complex::multiplication(Complex a)
{
    Complex Result = Complex();
    Result.setReal(
        real.multiplication(a.getReal()).soustraction(imaginary.multiplication(a.getImaginary()))
    );
    Result.setImaginary(
        imaginary.multiplication(a.getReal()).addition(real.multiplication(a.getImaginary()))
    );
    return Result;
}
Complex Complex::division(Complex a)
{
    Complex Result = Complex();
    std::cout << "this is not assing !" << std::endl;
    return Result;
}