#include "FragTrap.hpp"

FragTrap::FragTrap() :ScavTrap() {
    std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string& _name) :ScavTrap(_name) {
    // Use the base class initializer list forScavTrap members
    std::cout << "FragTrap " << name << " is born! Ready for gatekeeping!" << std::endl;
    hitPoints = 100;  // Initialize FragTrap-specific members afterScavTrap base class initialization
    energyPoints = 50;
    attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap& Frag)
    :ScavTrap(Frag) {
    // Use the base class initializer list forScavTrap members
    std::cout << "FragTrap " << name << " has been copied!" << std::endl;
    hitPoints = Frag.hitPoints;  // Initialize FragTrap-specific members afterScavTrap base class initialization
    energyPoints = Frag.energyPoints;
    attackDamage = Frag.attackDamage;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << "died" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "FragTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "FragTrap " << name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    if (energyPoints > 0) {
        std::cout << "FragTrap " << this->getName() << " asks for a positive high-five" << std::endl;
    } else {
        std::cout << "FragTrap " << this->getName() << " can't ask for a positive high-five because " << this->getName() << " is dead" << std::endl;
    }
}


void FragTrap::guardGate() {
    std::cout << "FragTrap " << name << " is now in Gatekeeper mode. Guarding the gate!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Frag) {
    if (this != &Frag) {
        // Perform assignment if needed
       ScavTrap::operator=(Frag);
        // Additional assignments for FragTrap-specific members if any
        hitPoints = Frag.hitPoints;
        energyPoints = Frag.energyPoints;
        attackDamage = Frag.attackDamage;
    }
    return *this;
}
