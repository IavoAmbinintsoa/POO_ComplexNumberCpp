#include <iostream>

namespace isa
{
    class Rationnel
    {
        private:
            int numerateur;
            int denominateur;
        public:
            Rationnel(int n,int d);
            ~Rationnel();

            //Accesseur et mutateur
            void setNumerateur(int num);
            void setDenominateur(int num);
            int getNumerateur();
            int getDenominateur();

            //Operation de Base
            Rationnel addition(Rationnel a);
            Rationnel multiplication(Rationnel a);
            Rationnel soustraction(Rationnel a);
            Rationnel division(Rationnel a);

            //Info
            void Info();
    };
} ;

