#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : _brain(new Brain()) {
    std::cout << "I CAT" << std::endl;
    setType("Cat");
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat :c" << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original), _brain(new Brain(*original._brain)) {
    std::cout << "I'm a CopyCat" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
        setType(rhs.getType());
        *_brain = *(rhs._brain);
    }
    std::cout << "Cats equalized" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "MEOW" << std::endl;
}
