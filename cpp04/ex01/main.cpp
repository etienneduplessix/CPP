#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wrongI->getType() << " " << std::endl;
    
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    wrongI->makeSound(); // will output the WrongAnimal sound!

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0;
}
