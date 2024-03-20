#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "Dog constructor\n";
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog copy constructor\n";
}

Dog::~Dog() {
    std::cout << "Dog destructor\n";
}

Dog& Dog::operator=(const Dog &assign) {
    if (this != &assign) {
        Animal::operator=(assign);
    }
    std::cout << "Dog assignment operator\n";
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!\n";
}
