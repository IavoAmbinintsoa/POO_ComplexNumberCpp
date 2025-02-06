#include "Rationnel.h"
#include <iostream>

namespace isa
{
    class Complex
    {
        private:
            Rationnel real = Rationnel(1,1);
            Rationnel imaginary = Rationnel(1,1);
        public:
            Complex();
            ~Complex();

        //setter and getter
            void setReal(Rationnel a);
            Rationnel getReal();
            void setImaginary(Rationnel a);
            Rationnel getImaginary();

        //Basic Operation
            Complex addition(Complex a);
            Complex multiplication(Complex a);
            Complex soustraction(Complex a);
            Complex division(Complex a);//Not finish

        //Methode to display the complex notation
        void Info();
    };   
};
