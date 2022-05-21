#include "DiamondTrap.hpp"
#include <iostream>


int	main()
{
	{
		DiamondTrap diamond("DIAMOND");

		diamond.attack("tank");
		diamond.beRepaired(80);
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.takeDamage(170);
		diamond.takeDamage(50);
		diamond.whoAmI();
	}
}
