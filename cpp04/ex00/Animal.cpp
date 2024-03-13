#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor\n";
}

Animal::Animal(const Animal &copy) : type(copy.type) {
    std::cout << "Animal copy constructor\n";
}

Animal::~Animal() {
    std::cout << "Animal destructor\n";
}

Animal& Animal::operator=(const Animal &assign) {
    if (this != &assign) {
        type = assign.type;
    }
    std::cout << "Animal assignment operator\n";
    return *this;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound\n";
}
