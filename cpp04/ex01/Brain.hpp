#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &copy);
    ~Brain();
    Brain& operator=(const Brain &assign);
    std::string getIdea(const int i) const;
    void setIdea(const int i, const std::string& idea);
};

#endif
