#include "Data.hpp"

// Constructors
Data::Data() : _value(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Data\e[0m" << std::endl;
}

Data::Data(const Data &copy)
{
	_value = copy.getValue();
	std::cout << "\e[0;33mCopy Constructor called of Data\e[0m" << std::endl;
}

Data::Data(std::string value)
{
	_value = value;
	std::cout << "\e[0;33mFields Constructor called of Data\e[0m" << std::endl;
}

// Destructor
Data::~Data()
{
	std::cout << "\e[0;31mDestructor called of Data\e[0m" << std::endl;
}


// Operators
Data & Data::operator=(const Data &assign)
{
	if (this != &assign)
		this->_value = assign.getValue();
	return (*this);
}


// Getters / Setters
std::string Data::getValue() const
{
	return _value;
}
