#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& frag);
    ~FragTrap();

    void highFivesGuys();
    void attack(const std::string& target);  // Remove 'override'
    void guardGate();  // Remove 'override'
    FragTrap& operator=(const FragTrap& frag);

private:
 
};

#endif
