#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	if (this == &assign)
		return (*this);
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (assign._inventory[i])
			this->_inventory[i] = assign._inventory[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	if (!m)
	{
		std::cout << "Materia does not exist" << std::endl;
		return ;
	}
	while (this->_inventory[i] && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	this->_inventory[i] = m;
	std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (this->_inventory[i] && this->_inventory[i]->getType() != type && i < 4)
		i++;
	if (i >= 4 || !this->_inventory[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (this->_inventory[i]->clone());
}
