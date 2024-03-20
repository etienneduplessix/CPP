#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor\n";
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copy constructor\n";
    for (int i = 0; i < 100; ++i) {
        ideas[i] = copy.ideas[i];
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor\n";
}

Brain& Brain::operator=(const Brain &assign) {
    if (this != &assign) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = assign.ideas[i];
        }
    }
    std::cout << "Brain assignment operator\n";
    return *this;
}

std::string Brain::getIdea(int i) const {
    return ideas[i];
}

void Brain::setIdea(int i, const std::string& idea) {
    ideas[i] = idea;
}
