#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	this->type = copy.type;
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete this->brain;
	this->brain = NULL;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "\e[0;32mOperator = called of Dog\e[0m" << std::endl;
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
std::string Dog::getType() const
{
	return (this->type);
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}

// Methods
void Dog::makeSound() const
{
	std::cout << "My type dog" << std::endl;
}
