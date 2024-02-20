#include "Zombie.hpp"

Zombie::Zombie() {
    // Default constructor
}

Zombie::Zombie(std::string name) : name(name) {
    // Constructor with parameter
}

Zombie::~Zombie() {
    std::cout << this->name << " is destroyed!" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}