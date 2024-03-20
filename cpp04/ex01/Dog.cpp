#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &Dog)
{
	std::cout << "Dog's Copy constructor called" << std::endl;
	*this = Dog;
}

Dog &Dog::operator=(const Dog &Dog)
{
	std::cout << "Dog's Copy operator called" << std::endl;
	if (this == &Dog)
		return (*this);
	this->type = Dog.type;
	delete this->brain;
	this->brain = new Brain(*Dog.getBrain());
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog say Wouf" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's Default destructor called" << std::endl;
	delete this->brain;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}