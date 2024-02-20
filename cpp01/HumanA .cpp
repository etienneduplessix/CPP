#include "HumanA .hpp"

// Constructors
HumanA ::HumanA ()
{
	std::cout << "\e[0;33mDefault Constructor called of HumanA \e[0m" << std::endl;
}

HumanA ::HumanA (const HumanA  &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of HumanA \e[0m" << std::endl;
}


// Destructor
HumanA ::~HumanA ()
{
	std::cout << "\e[0;31mDestructor called of HumanA \e[0m" << std::endl;
}


// Operators
HumanA  & HumanA ::operator=(const HumanA  &assign)
{
	(void) assign;
	return *this;
}

