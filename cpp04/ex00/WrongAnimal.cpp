#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "\e[0;33mFields Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	if (this != & assign)
		this->setType(getType());
	return *this;
}

// Methods

void	WrongAnimal::makeSound() const
{
	std::cout << "My type WrongAnimal" << std::endl;
}

// Getters / Setters
std::string WrongAnimal::getType() const
{
	return this->type;
}
void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

