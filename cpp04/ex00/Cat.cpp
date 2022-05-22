#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat")
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "\e[0;33mFields Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
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

