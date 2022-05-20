#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
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
		bool	operator==(Point const &right) const;
		// Getters / Setters
		const Fixed getX() const;
		const Fixed getY() const;

	private:
		const Fixed _x;
		const Fixed _y;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
