#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	this->type = copy.type;
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete this->brain;
}

// Operators
Cat	&Cat::operator=(const Cat &assign)
{
	std::cout << "\e[0;32mOperator = called of Cat\e[0m" << std::endl;
	if (this != &assign)
	{
		this->type = assign.type;
		if (this->brain)
			delete (this->brain);
		this->brain = new Brain(*assign.brain);
	}
	return (*this);
}

// Getters / Setters
std::string Cat::getType() const
{
	return (this->type);
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}

// Methods
void Cat::makeSound() const
{
	std::cout << "My type cat" << std::endl;
}
