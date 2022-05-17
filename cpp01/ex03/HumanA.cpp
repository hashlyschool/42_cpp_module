#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type): name(name), weapon(type) {}

HumanA::~HumanA()
{
	// std::cout << "HumanA destructor" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
