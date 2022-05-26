#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("dog")
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
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
		this->setType(assign.getType());
	}
	return *this;
}


// Getters / Setters

// Methods

void	Dog::makeSound() const
{
	std::cout << "My type dog" << std::endl;
}
