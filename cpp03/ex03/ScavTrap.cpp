#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->setHit(100);
	this->setEnergy(50);
	this->setDamage(20);
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	// ClapTrap(copy);
	// this->setName(copy.getName());
	// this->setHit(copy.getHit());
	// this->setEnergy(copy.getEnergy());
	// this->setDamage(copy.getDamage());
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	if (this == &assign)
		return (*this);
	this->setName(assign.getName());
	this->setHit(assign.getHit());
	this->setEnergy(assign.getEnergy());
	this->setDamage(assign.getDamage());
	return *this;
}

// Methods

void	ScavTrap::attack(const std::string &target)
{
	if (this->getHit() > 0 && this->getEnergy() > 0)
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "ScavTrap " << this->getName()
		<< " attack " << target
		<< ", causing " << this->getDamage() << " points of damage\n";
	}
}


void	ScavTrap::guardGate()
{
	if (this->getHit() > 0)
	{
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	}
}
