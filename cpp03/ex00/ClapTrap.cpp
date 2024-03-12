#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " is born! Ready for action!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hitPoints(other.hitPoints),
      energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " says goodbye. It was an honor!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints = (amount > hitPoints) ? 0 : hitPoints - amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Remaining hit points: "
                  << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " can't take damage. Already out of hit points." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " is repaired for " << amount
                  << " points! Remaining hit points: " << hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " can't be repaired. Out of hit points." << std::endl;
    }
}
