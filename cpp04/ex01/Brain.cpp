#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = "default idea";
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::string *copy_ideas = copy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = copy_ideas[i] + " copy";
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

// Destructor
Brain::~Brain()
{
	delete [] (this->ideas);
	this->ideas = NULL;
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	std::cout << "\e[0;32mOperator = called of Brain\e[0m" << std::endl;
	if (this != &assign)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = assign.ideas[i];
	}
	return (*this);
}

// Getters / Setters
std::string *Brain::getIdeas() const
{
	return (this->ideas);
}
