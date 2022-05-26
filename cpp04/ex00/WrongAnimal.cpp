#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
	this->type = copy.type;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "\e[0;32mOperator = called of WrongAnimal\e[0m" << std::endl;
	if (this != &assign)
	{
		this->type =  assign.type;
	}
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
	return (this->type);
}

