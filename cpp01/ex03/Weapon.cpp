#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}


Weapon::~Weapon()
{
	// std::cout << "Weapon destructor" << std::endl;
}

std::string const	&Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
