#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:

		AAnimal();
		AAnimal(const AAnimal &copy);
	
		~AAnimal();
		

		AAnimal & operator=(const AAnimal &assign);
		
	private:
		
};

#endif