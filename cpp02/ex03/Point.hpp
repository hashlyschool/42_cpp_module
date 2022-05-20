#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(const Point &copy);
		Point(const Fixed x, const Fixed y);

		// Destructor
		~Point();

		// Operators
		Point & operator=(const Point &assign);

		// Getters / Setters
		const Fixed getX() const;
		void setX(const Fixed x);
		const Fixed getY() const;
		void setY(const Fixed y);

	private:
		const Fixed _x;
		const Fixed _y;

};

#endif
