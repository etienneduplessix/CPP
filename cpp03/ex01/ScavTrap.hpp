#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string& name);  // Match the type with the definition
    ScavTrap(const ScavTrap& scav);
    ~ScavTrap();

    void attack(const std::string& target);  // Override base class function
    void guardGate();  // ScavTrap specific function

    ScavTrap& operator=(const ScavTrap& scav);  // Optional: Assignment operator

private:
    // Add any additional ScavTrap-specific members here if needed
};

#endif
