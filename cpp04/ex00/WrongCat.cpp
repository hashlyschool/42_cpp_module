#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
	this->type = copy.getType();
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	std::cout << "\e[0;32mOperator = called of WrongCat\e[0m" << std::endl;
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return *this;
}


// Getters / Setters
std::string WrongCat::getType() const
{
	return (this->type);
}

// Methods
void	WrongCat::makeSound() const
{
	std::cout << "My type WrongCat" << std::endl;
}
