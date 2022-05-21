#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(std::string Name)
:
	ClapTrap(Name + "_clap_name"),
	FragTrap(Name + "_frag_name"),
	ScavTrap(Name + "_scav_name")
{
	_Name = Name;
	this->setHit(FragTrap::getHit());
	this->setEnergy(ScavTrap::getEnergy());
	this->setDamage(FragTrap::getDamage());
	std::cout << "\e[0;33mDefault Constructor called of DiamondTrap\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
:
	ClapTrap(copy),
	FragTrap(copy),
	ScavTrap(copy)
{
	*this = copy;
	// ClapTrap(copy);
	// this->setName(copy.getName());
	// this->setHit(copy.getHit());
	// this->setEnergy(copy.getEnergy());
	// this->setDamage(copy.getDamage());
	std::cout << "\e[0;33mCopy Constructor called of DiamondTrap\e[0m" << std::endl;
}


// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[0;31mDestructor called of DiamondTrap\e[0m" << std::endl;
}


// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	if (this == &assign)
		return (*this);
	this->setName(assign._Name);
	this->setHit(assign.getHit());
	this->setEnergy(assign.getEnergy());
	this->setDamage(assign.getDamage());
	return *this;
}

// Methods

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _Name << " and my clapName " << ClapTrap::getName() << "!" << std::endl;
}
