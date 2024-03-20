#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Brain; 
class Animal {
public:
    Animal();
    Animal(const Animal &copy);
    virtual ~Animal();
    Animal& operator=(const Animal &assign);
    std::string getType() const;
    virtual void makeSound() const;
    virtual Brain * getBrain() const = 0;

protected:
    std::string type;
};

#endif
