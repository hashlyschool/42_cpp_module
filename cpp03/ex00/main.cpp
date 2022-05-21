#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	ClapTrap("Joe");

	ClapTrap.attack("Bobbie");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(2);
	ClapTrap.takeDamage(3);
	ClapTrap.attack("Bobbie");
	ClapTrap.takeDamage(5);
	ClapTrap.attack("Bobbie");
	return (0);
}
