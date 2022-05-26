#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("cat")
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
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
		this->setType(assign.getType());
	}
	return *this;
}

// Getters / Setters

// Methods

void	Cat::makeSound() const
{
	std::cout << "My type cat" << std::endl;
}
