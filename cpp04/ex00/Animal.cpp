#include "Animal.hpp"

// Animal class implementations
Animal::Animal() {}
Animal::Animal(const Animal &copy) {}
Animal::~Animal() {}
Animal &Animal::operator=(const Animal &assign) { return *this; }

// Dog class implementations
Dog::Dog() {}
Dog::Dog(const Dog &copy) {}
Dog::~Dog() {}
Dog &Dog::operator=(const Dog &assign) { return *this; }

std::string Dog::getType() const {
    return "Dog";
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

// Cat class implementations
Cat::Cat() {}
Cat::Cat(const Cat &copy) {}
Cat::~Cat() {}
Cat &Cat::operator=(const Cat &assign) { return *this; }

std::string Cat::getType() const {
    return "Cat";
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}
