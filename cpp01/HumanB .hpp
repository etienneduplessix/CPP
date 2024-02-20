#ifndef HUMANB _HPP
# define HUMANB _HPP

# include <iostream>
# include <string>

class HumanB 
{
	public:
		// Constructors
		HumanB ();
		HumanB (const HumanB  &copy);
		
		// Destructor
		~HumanB ();
		
		// Operators
		HumanB  & operator=(const HumanB  &assign);
		
	private:
		
};

#endif