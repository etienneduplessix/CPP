#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog's Default constructor called" << std::endl;
    _type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog's Copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog's Copy operator called" << std::endl;
    if (this == &dog)
        return (*this);
    _type = dog._type; // Corrected variable name
    this->brain = new Brain();
    *this->brain = *dog.brain;
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
