#include "HumanB.hpp"

// Constructors
HumanB ::HumanB ()
{
	std::cout << "\e[0;33mDefault Constructor called of HumanB \e[0m" << std::endl;
}

HumanB ::HumanB (const HumanB  &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of HumanB \e[0m" << std::endl;
}


// Destructor
HumanB ::~HumanB ()
{
	std::cout << "\e[0;31mDestructor called of HumanB \e[0m" << std::endl;
}


// Operators
HumanB  & HumanB ::operator=(const HumanB  &assign)
{
	(void) assign;
	return *this;
}

