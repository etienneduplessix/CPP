#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type) {
    std::cout << "WrongAnimal copy constructor\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &assign) {
    if (this != &assign) {
        type = assign.type;
    }
    std::cout << "WrongAnimal assignment operator\n";
    return *this;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound\n";
}
