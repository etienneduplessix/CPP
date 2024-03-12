#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor called! I am a unique ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name) {
    std::cout << "ScavTrap " << name << " is born! Ready for gatekeeping! I am a unique ScavTrap!" << std::endl;
    hitPoints = 100;  
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
    : ClapTrap(scav) {
    std::cout << "ScavTrap " << name << " has been copied! I am a unique ScavTrap!" << std::endl;
    hitPoints = scav.hitPoints;  
    energyPoints = scav.energyPoints;
    attackDamage = scav.attackDamage;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " bids farewell. Gatekeeping duties completed! I am a unique ScavTrap!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage! I am a unique ScavTrap!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ScavTrap " << name << " can't attack. Not enough hit points or energy points. I am a unique ScavTrap!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode. Guarding the gate! I am a unique ScavTrap!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav) {
    if (this != &scav) {
        ClapTrap::operator=(scav);
        hitPoints = scav.hitPoints;
        energyPoints = scav.energyPoints;
        attackDamage = scav.attackDamage;
    }
    return *this;
}
