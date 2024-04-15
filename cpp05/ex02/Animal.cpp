#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal constructor\n";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal's Copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal() {
    std::cout << "Animal destructor\n";
}

Animal& Animal::operator=(const Animal &assign) {
    if (this != &assign) {
        _type = assign._type;
    }
    std::cout << "Animal assignment operator\n";
    return *this;
}


std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const {
    std::cout << "Animal sound\n";
}
