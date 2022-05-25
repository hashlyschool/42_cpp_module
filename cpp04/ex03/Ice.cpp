#include "Ice.hpp"

// Constructors
Ice::Ice() : AMateria("ice")
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria("ice")
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

// Methods
std::string const &Ice::getType() const
{
	return (this->_type);
}

Ice *Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << " * shoots an ice bolt at " << target_name <<" *" << std::endl;
}

