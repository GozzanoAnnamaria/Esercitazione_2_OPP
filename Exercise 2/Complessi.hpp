#include <iostream>
#include <cmath>


class ComplexNumber{
	public:
    float real;
    float imaginary;
    
    ComplexNumber(float a, float b){
        real = a;
        imaginary = b;
    }
};

// Print
std::ostream& operator<<(std::ostream& os, const ComplexNumber& c)
{
    os<<std::showpos<<c.real <<c.imaginary<<"i"<<std::endl;
    return os;
}

// Sum
ComplexNumber operator*(const ComplexNumber& c1, const ComplexNumber& c2)
{
    float real = c1.real + c2.real;
    float imaginary = c1.imaginary + c2.imaginary;

    ComplexNumber c(real,imaginary);

    return c;
}

// Product
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    float real = c1.real * c2.real;
    float imaginary = c1.imaginary * c2.imaginary;

    ComplexNumber c(real,imaginary);

    return c;
}


// Conjugate
ComplexNumber conjugate(const ComplexNumber& a)
{
    ComplexNumber c(a.real,-a.imaginary);
    
    return c;
}

