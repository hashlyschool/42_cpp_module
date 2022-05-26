#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	this->type = copy.getType();
}

// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	std::cout << "\e[0;32mOperator = called of Cat\e[0m" << std::endl;
	if (this != &assign)
	{
		this->type = assign.getType();
	}
	return *this;
}

// Getters / Setters
std::string Cat::getType() const
{
	return (this->type);
}

// Methods

void	Cat::makeSound() const
{
	std::cout << "My type cat" << std::endl;
}
