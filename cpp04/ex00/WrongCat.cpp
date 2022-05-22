#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "\e[0;33mFields Constructor called of WrongCat\e[0m" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
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

