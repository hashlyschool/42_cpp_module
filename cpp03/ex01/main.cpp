#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	scav("Joe");
	ClapTrap	clap("Fedor");

	scav.attack("tank");
	clap.attack("tank");
	scav.beRepaired(10);

	// ScavTrap error = clap; // error
	ClapTrap	check = clap;
	ClapTrap	check2 = scav;
	check.takeDamage(10);

	check2.attack("human");
	check.takeDamage(80);

	check.attack("funtik1");
	clap.attack("funtik2");
	return (0);
}
