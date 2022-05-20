#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	m, l;
	Point	B(b.getX() - a.getX(), b.getY() - a.getY());
	Point	C(c.getX() - a.getX(), c.getY() - a.getY());
	Point	P(point.getX() - a.getX(), point.getY() - a.getY());

	m = (P.getX() * B.getY() - B.getX() * P.getY()) / (C.getX() * B.getY() - B.getX() * C.getY());
	if (m >= 0 and m <= 1)
	{
		l = (P.getX() - m * C.getX()) / B.getX();
		if (l >= 0 and (m + l <= 1))
			return (true);
	}
	return (false);
}
