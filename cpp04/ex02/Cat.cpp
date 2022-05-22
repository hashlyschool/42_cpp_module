#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain;
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "\e[0;33mFields Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	delete this->_brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	if (this != &assign)
	{
		// type = rhs.type;
	// return (*this);
		_brain = new Brain(*assign._brain);
		this->setType(assign.getType());
	}
	return *this;
}

void	Cat::makeSound() const
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

