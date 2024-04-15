#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat's Default constructor called" << std::endl;
    _type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Cat's Copy constructor called" << std::endl;
    *this = Cat;
}

Cat &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat's Copy operator called" << std::endl;
    if (this == &Cat)
        return (*this);
    _type = Cat._type; // Corrected variable name
    this->brain = new Brain();
    *this->brain = *Cat.brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat say Wouf" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat's Default destructor called" << std::endl;
    delete this->brain;
}

Brain *Cat::getBrain() const
{
    return (this->brain);
}
