#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of AAnimal\e[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AAnimal\e[0m" << std::endl;
}


// Destructor
AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mDestructor called of AAnimal\e[0m" << std::endl;
}


// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	(void) assign;
	return *this;
}

