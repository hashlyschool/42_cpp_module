#include "Point.hpp"

// Constructors
Point::Point(): _x(0), _y(0)
{
	// std::cout << "\e[0;33mDefault Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const Point &copy): _x(copy._x), _y(copy._y)
{
	// std::cout << "\e[0;33mCopy Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const Fixed x, const Fixed y): _x(x), _y(y)
{
	// std::cout << "\e[0;33mFields Constructor called of Point\e[0m" << std::endl;
}


// Destructor
Point::~Point()
{
	// std::cout << "\e[0;31mDestructor called of Point\e[0m" << std::endl;
}


// Operators
Point & Point::operator=(const Point &assign)
{
	if (this == &assign)
		return (*this);
	return (*this);
}

bool	Point::operator==(Point const &right) const
{
	if (this->getX() == right.getX())
	{
		if (this->getY() == right.getY())
			return (true);
	}
	return (false);
}

// Getters / Setters
const Fixed Point::getX() const
{
	return _x;
}

const Fixed Point::getY() const
{
	return _y;
}
