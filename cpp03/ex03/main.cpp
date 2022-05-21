#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		FragTrap	frag("frag");
		ScavTrap	scav("frag");
	}
	{
		FragTrap	frag("frag");

		frag.attack("joe");
		frag.beRepaired(100);
		frag.highFivesGuys();
		frag.takeDamage(200);
		frag.highFivesGuys();
	}
}
