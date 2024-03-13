#include "Cat.hpp"

Cat::Cat() : Animal() {
    type = "Cat";
    std::cout << "Cat constructor\n";
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat copy constructor\n";
}

Cat::~Cat() {
    std::cout << "Cat destructor\n";
}

Cat& Cat::operator=(const Cat &assign) {
    if (this != &assign) {
        Animal::operator=(assign);
    }
    std::cout << "Cat assignment operator\n";
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!\n";
}
