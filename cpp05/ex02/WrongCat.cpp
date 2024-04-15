
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type = "WrongCat";
    std::cout << "WrongCat constructor\n";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << "WrongCat copy constructor\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor\n";
}

WrongCat& WrongCat::operator=(const WrongCat &assign) {
    if (this != &assign) {
        WrongAnimal::operator=(assign);
    }
    std::cout << "WrongCat assignment operator\n";
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "braou!\n";
}
