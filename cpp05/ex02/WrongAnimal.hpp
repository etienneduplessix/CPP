#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &assign);
    std::string getType() const;
    virtual void makeSound() const;

protected:
    std::string type;
};

#endif
