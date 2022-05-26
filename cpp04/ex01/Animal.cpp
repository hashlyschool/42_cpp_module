#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	this->type = "animal";
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	std::cout << "\e[0;32mOperator = called of Animal\e[0m" << std::endl;
	if (this != &assign)
	{
		this->type =  assign.type;
	}
	return *this;
}

// Methods

void	Animal::makeSound() const
{
	std::cout << "My type animal" << std::endl;
}

// Getters / Setters
std::string Animal::getType() const
{
	return (this->type);
}

