#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap	a;
	std::string	b = "bbb";
	
	std::cout << std::endl;

	a.attack(b);
	a.takeDamage(50);
	a.highFivesGuys();
	a.takeDamage(100);
	a.highFivesGuys();
	
	std::cout << std::endl;
	
	return 0;
}