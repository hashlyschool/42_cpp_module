#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal()
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	this->type = copy.getType();
}

// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "\e[0;32mOperator = called of Dog\e[0m" << std::endl;
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return (*this);
}

// Getters / Setters
std::string Dog::getType() const
{
	return (this->type);
}

// Methods
void	Dog::makeSound() const
{
	std::cout << "My type dog" << std::endl;
}
