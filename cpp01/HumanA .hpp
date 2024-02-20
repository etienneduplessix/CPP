#ifndef HUMANA _HPP
# define HUMANA _HPP

# include <iostream>
# include <string>

class HumanA 
{
	public:
		// Constructors
		HumanA ();
		HumanA (const HumanA  &copy);
		
		// Destructor
		~HumanA ();
		
		// Operators
		HumanA  & operator=(const HumanA  &assign);
		
	private:
		
};

#endif