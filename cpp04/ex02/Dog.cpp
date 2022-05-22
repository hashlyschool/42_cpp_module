#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain;
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "\e[0;33mFields Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	delete this->_brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	if (this != &assign)
	{
		_brain = new Brain(*assign._brain);
		this->setType(assign.getType());
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "My type " << this->getType() << std::endl;
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

