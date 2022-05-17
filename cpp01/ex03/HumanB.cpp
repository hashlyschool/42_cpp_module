#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor" << std::endl;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
