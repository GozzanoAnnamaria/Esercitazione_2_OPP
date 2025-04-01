#include <iostream>
#include "Complessi.hpp"

int main()
{
	// Print
	ComplexNumber z1(1.0,2.0);
	std::cout<<"z1 = "<<z1<<std::endl;
	
	ComplexNumber z2(1.01,-2.01);
	std::cout<<"z2 = "<<z2<<std::endl;

	ComplexNumber c1(1.0,2.0);
	ComplexNumber c2(2.0,-1.0);

    // Sum
	ComplexNumber sum = c1 + c2;
	std::cout<<"Sum: "<<sum<<std::endl;
	
	// Product
	ComplexNumber product = c1*c2;
	std::cout<<"Product: "<<product<<std::endl;

    // Conjugate
	ComplexNumber z = conjugate(c1);
	std::cout<<"Conjugate: "<<z<<std::endl;
	
}