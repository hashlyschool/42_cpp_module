#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	_Name = "No name";
	_Hit = 10;
	_Energy = 10;
	_Damage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	_Name = Name;
	_Hit = 10;
	_Energy = 10;
	_Damage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_Name = copy.getName();
	_Hit = copy.getHit();
	_Energy = copy.getEnergy();
	_Damage = copy.getDamage();
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}

// ClapTrap::ClapTrap(std::string Name, unsigned int Hit, unsigned int Energy, unsigned int Damage)
// {
// 	if (Name.empty() || Hit < 0 || Energy < 0 || Damage < 0)
// 	{
// 		this->_Name = Name;
// 		this->_Hit = Hit;
// 		this->_Energy = Energy;
// 		this->_Damage = Damage;
// 		std::cout << "\e[0;33mFields Constructor called of ClapTrap\e[0m" << std::endl;
// 	}
// }


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	this->setName(assign.getName());
	this->setHit(assign.getHit());
	this->setEnergy(assign.getEnergy());
	this->setDamage(assign.getDamage());
	return *this;
}


// Getters / Setters

std::string ClapTrap::getName() const
{	return _Name; }
void ClapTrap::setName(std::string Name)
{	_Name = Name; }

int ClapTrap::getHit() const
{	return _Hit; }
void ClapTrap::setHit(int Hit)
{	_Hit = Hit; }

int ClapTrap::getDamage() const
{	return _Damage; }
void ClapTrap::setDamage(int Damage)
{	_Damage = Damage; }

int ClapTrap::getEnergy() const
{	return _Energy; }
void ClapTrap::setEnergy(int Energy)
{	_Energy = Energy; }

// Methods

void	ClapTrap::attack(const std::string &target)
{
		if (this->_Hit > 0 && this->_Energy > 0)
		{
			--this->_Energy;
			std::cout << "ClapTrap " << this->_Name
			<< " attack " << target
			<< ", causing " << this->_Damage << " points of damage\n";
		}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit > 0)
	{
		this->_Hit -= amount;
		std::cout << "ClapTrap " << this->_Name
		<< " take " << amount << " damage points" << std::endl;
	}
	if (this->_Hit <= 0)
	{
		this->_Hit = 0;
		std::cout << this->_Name << " Dead" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit > 0 && this->_Energy > 0)
	{
		this->_Hit += amount;
		--this->_Energy;
		std::cout << "ClapTrap " << this->_Name << " recovers " << amount << " Hit points" << std::endl;
	}
}

