#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	this->_idea = new std::string[100];
	for (int i = 0; i < SIZE_BRAIN; ++i)
		this->_idea[i] = "empty idea";
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

// Destructor
Brain::~Brain()
{
	delete [] (this->_idea);
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < SIZE_BRAIN; ++i)
		_idea[i] = assign._idea[i];
	}
	return *this;
}


// Getters / Setters

