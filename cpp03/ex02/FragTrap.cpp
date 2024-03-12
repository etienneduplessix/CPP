#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap() {
    std::cout << "FragTrap default constructor called! I am a unique FragTrap!" << std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ScavTrap(_name) {
    // Use the base class initializer list for ScavTrap members
    std::cout << "FragTrap " << name << " is born! Ready for gatekeeping! I am a unique FragTrap!" << std::endl;
    hitPoints = 100;  // Initialize FragTrap-specific members after ScavTrap base class initialization
    energyPoints = 50;
    attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap& frag) : ScavTrap(frag) {
    // Use the base class initializer list for ScavTrap members
    std::cout << "FragTrap " << name << " has been copied! I am a unique FragTrap!" << std::endl;
    hitPoints = frag.hitPoints;  // Initialize FragTrap-specific members after ScavTrap base class initialization
    energyPoints = frag.energyPoints;
    attackDamage = frag.attackDamage;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " died. I was a unique FragTrap!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "FragTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage! I am a unique FragTrap!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "FragTrap " << name << " can't attack. Not enough hit points or energy points. I was a unique FragTrap!" << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    if (energyPoints > 0) {
        std::cout << "FragTrap " << this->getName() << " asks for a positive high-five. I am a unique FragTrap!" << std::endl;
    } else {
        std::cout << "FragTrap " << this->getName() << " can't ask for a positive high-five because " << this->getName() << " is dead. I was a unique FragTrap!" << std::endl;
    }
}

void FragTrap::guardGate() {
    std::cout << "FragTrap " << name << " is now in Gatekeeper mode. Guarding the gate! I am a unique FragTrap!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& frag) {
    if (this != &frag) {
        ScavTrap::operator=(frag);
        hitPoints = frag.hitPoints;
        energyPoints = frag.energyPoints;
        attackDamage = frag.attackDamage;
    }
    return *this;
}
