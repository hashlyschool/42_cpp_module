#include "Point.hpp"

// Constructors
Point::Point()
{
	_x = 0;
	_y = 0;
	std::cout << "\e[0;33mDefault Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const Point &copy)
{
	_x = copy.getX();
	_y = copy.getY();
	std::cout << "\e[0;33mCopy Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const Fixed x, const Fixed y)
{
	_x = x;
	_y = y;
	std::cout << "\e[0;33mFields Constructor called of Point\e[0m" << std::endl;
}


// Destructor
Point::~Point()
{
	std::cout << "\e[0;31mDestructor called of Point\e[0m" << std::endl;
}


// Operators
Point & Point::operator=(const Point &assign)
{
	_x = assign.getX();
	_y = assign.getY();
	return *this;
}


// Getters / Setters
const Fixed Point::getX() const
{
	return _x;
}
void Point::setX(const Fixed x)
{
	_x = x;
}

const Fixed Point::getY() const
{
	return _y;
}
void Point::setY(const Fixed y)
{
	_y = y;
}

