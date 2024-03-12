#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name) {
    // Use the base class initializer list for ClapTrap members
    std::cout << "ScavTrap " << name << " is born! Ready for gatekeeping!" << std::endl;
    hitPoints = 100;  // Initialize ScavTrap-specific members after ClapTrap base class initialization
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
    : ClapTrap(scav) {
    // Use the base class initializer list for ClapTrap members
    std::cout << "ScavTrap " << name << " has been copied!" << std::endl;
    hitPoints = scav.hitPoints;  // Initialize ScavTrap-specific members after ClapTrap base class initialization
    energyPoints = scav.energyPoints;
    attackDamage = scav.attackDamage;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " bids farewell. Gatekeeping duties completed!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ScavTrap " << name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode. Guarding the gate!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav) {
    if (this != &scav) {
        // Perform assignment if needed
        ClapTrap::operator=(scav);
        // Additional assignments for ScavTrap-specific members if any
        hitPoints = scav.hitPoints;
        energyPoints = scav.energyPoints;
        attackDamage = scav.attackDamage;
    }
    return *this;
}
