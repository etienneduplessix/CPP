#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		
		Animal();
		Animal(const Animal &copy);
	
		~Animal();
		
		Animal & operator=(const Animal &assign);
		
	private:
		
};


class Dog : public Animal {
  public:
    Dog();
    Dog(const Dog &copy);
    ~Dog();
  	Dog & operator=(const Dog &assign);
    void makeSound(); 
};

class Cat : public Animal {
  public:
    cat();
    cat(const cat &copy);
    ~cat();
  	cat & operator=(const cat &assign);
    void makesound();
};



#endif 
