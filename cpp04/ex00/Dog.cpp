#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog")
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "\e[0;33mFields Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	if (this != &assign)
	{
		this->setType(assign.getType());
	}
	return *this;
}


// Getters / Setters
// std::string Cat::getType() const
// {
// 	return _type;
// }
// void Cat::setType(std::string type)
// {
// 	_type = type;
// }

