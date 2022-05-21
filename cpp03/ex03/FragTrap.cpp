#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->setHit(100);
	this->setEnergy(100);
	this->setDamage(30);
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	// ClapTrap(copy);
	// this->setName(copy.getName());
	// this->setHit(copy.getHit());
	// this->setEnergy(copy.getEnergy());
	// this->setDamage(copy.getDamage());
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
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

void	FragTrap::attack(const std::string &target)
{
	if (this->getHit() > 0 && this->getEnergy() > 0)
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "FragTrap " << this->getName()
		<< " attack " << target
		<< ", causing " << this->getDamage() << " points of damage\n";
	}
}


void	FragTrap::highFivesGuys()
{
	if (this->getHit() > 0)
	{
		std::cout << "High Five Guys" << std::endl;
	}
}
