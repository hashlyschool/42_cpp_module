#include "Character.hpp"

// Constructors
Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < SIZE_INVENTORY; ++i)
		_inventory[i] = 0;
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character(const Character &copy) : _name(copy.getName() + "_copy")
{
	for (int i = 0; i < SIZE_INVENTORY; ++i)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}

// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}

// Operators
Character & Character::operator=(const Character &assign)
{
	if (this == &assign)
		return *this;
	for (int i = 0; i < SIZE_INVENTORY; ++i)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = 0;
		}
		if (assign._inventory[i])
			this->_inventory[i] = assign._inventory[i]->clone();
	}
	return *this;
}

// Getters / Setters
std::string const	&Character::getName() const
{	return (this->_name); }

AMateria *Character::getMateriaFromInventory(int id)
{
	if (id < 0 || id >= SIZE_INVENTORY)
	{
		std::cout << "Invalid index" << std::endl;
		return (0);
	}
	else if (this->_inventory[id] == 0)
		std::cout << "Slot is empty" << std::endl;
	return (this->_inventory[id]);
}

// Methods
void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << this->_name << " tried to equip nothing and it did nothing" << std::endl;
		return ;
	}
	for (int i = 0; i < SIZE_INVENTORY; ++i)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->_name << " can't equip more than 4 Materia";
	return ;
}

void Character::unequip(int id)
{
	if (id < 0 || id >= SIZE_INVENTORY)
		std::cout << this->_name << " tried to unequip nothing at slot " << id << " and it did nothing\n";
	else if (!(this->_inventory)[id])
		std::cout << this->_name << " has nothing equipped at slot " << id << " so he can't unequip it\n";
	else
	{
		AMateria *ptr = this->_inventory[id];
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< id << "\n";
		this->_inventory[id] = 0;
	}
}

void Character::use(int id, ICharacter& target)
{
	if (id < 0 || id >= 4 || !this->_inventory[id])
	{
		std::cout << "Nothing found to use at index " << id << std::endl;
		return ;
	}
	std::cout << this->getName();
	this->_inventory[id]->use(target);
}
