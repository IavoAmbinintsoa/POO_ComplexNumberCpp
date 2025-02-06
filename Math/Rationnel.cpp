#include "Rationnel.h"

using namespace isa;

Rationnel::Rationnel(int n,int d)
{
    numerateur = n;
    denominateur = d;
}

Rationnel::~Rationnel()
{
}
void Rationnel::setNumerateur(int num)
{
    this->numerateur = num;
}
void Rationnel::setDenominateur(int den)
{
    this->denominateur = den;
}
int Rationnel::getDenominateur()
{
    return this->denominateur;
}
int Rationnel::getNumerateur()
{
    return this->numerateur;
}

//OPERATION DE BASE

Rationnel Rationnel::addition(Rationnel a)
{
    Rationnel Result = Rationnel(1,1);
    Result.setNumerateur(numerateur*a.getDenominateur()+
    denominateur*a.getNumerateur());
    Result.setDenominateur(denominateur * a.getDenominateur());
    return Result;
}
Rationnel Rationnel::soustraction(Rationnel a)
{
    Rationnel Result = Rationnel(1,1);
    Result.setNumerateur(numerateur*a.getDenominateur() - 
    denominateur*a.getNumerateur());
    Result.setDenominateur(denominateur * a.getDenominateur());
    return Result;
}
Rationnel Rationnel::multiplication(Rationnel a)
{
    Rationnel Result = Rationnel(1,1);
    Result.setNumerateur(numerateur*a.getNumerateur());
    Result.setDenominateur(denominateur * a.getDenominateur());
    return Result;
}
Rationnel Rationnel::division(Rationnel a)
{
    Rationnel Result = Rationnel(1,1);
    Result.setNumerateur(numerateur*a.getDenominateur());
    Result.setDenominateur(denominateur * a.getNumerateur());
    return Result;
}
void Rationnel::Info()
{
    std::cout << numerateur << "/" << denominateur ;
}