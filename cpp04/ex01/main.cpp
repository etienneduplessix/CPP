#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Creating and deleting individual animals
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    // Creating and deleting animals in an array
    Animal* a[4];
    for (int i = 0; i < 4; i++) {
        if (i < 2)
            a[i] = new Cat();
        else
            a[i] = new Dog();
    }
    for (int i = 0; i < 4; i++) {
        a[i]->makeSound();
        delete a[i];
    }

    // Testing deep copy of Dog and Brain
    Dog *k = new Dog();
    k->getBrain()->setAllIdeas("asdasd");
    std::cout << "k's ideas : " << k->getBrain()->getIdeas(0) << std::endl;
    Dog *q = new Dog();
    q->getBrain()->setAllIdeas("123123");
    std::cout << "q's ideas : "  << q->getBrain()->getIdeas(0) << std::endl;
    *q = *k;
    std::cout << "q's copied ideas : "  << q->getBrain()->getIdeas(0) << std::endl;
    k->getBrain()->setIdeas("zzz", 0);
    std::cout << "k's ideas : "  << k->getBrain()->getIdeas(0) << std::endl;
    delete k;
    std::cout << "q's ideas : "  << q->getBrain()->getIdeas(0) << std::endl;
    delete q;

    // Testing copy constructor and destructor
    Dog *c = new Dog();
    c->getBrain()->setAllIdeas("C NEW IDEAS");
    Dog *d = new Dog(*c);
    std::cout << "c : " << c->getBrain()->getIdeas(0) << std::endl;
    std::cout << "d : " << d->getBrain()->getIdeas(0) << std::endl;
    c->getBrain()->setIdeas("asd", 0);
    std::cout << "c : " << c->getBrain()->getIdeas(0) << std::endl;
    std::cout << "d : " << d->getBrain()->getIdeas(0) << std::endl;
    delete c;
    delete d;

    return 0;
}
