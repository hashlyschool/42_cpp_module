#include "Point.hpp"

bool	check_arg(Point &a, Point &b, Point &c)
{
	if (a == b or b == c or c == a)
	{
		std::cout << "invalid point" << std::endl;
		return (1);
	}
	return (0);
}

int	main()
{
	std::cout << "=====1======" << std::endl;
	{
		Point a(0, 0);
		Point b(3, 0);
		Point c(3, 3);
		Point point(2 ,1);

		if (check_arg(a, b, c))
			return (0);
		if (bsp(a, b, c, point))
			std::cout << "point IN" << std::endl;
		else
			std::cout << "point OUT" << std::endl;
	}
	std::cout << "=====2======" << std::endl;
	{
		Point a(-4, 50);
		Point b(3, 0.654f);
		Point c(23, 53);
		Point point(0 ,0);

		if (check_arg(a, b, c))
			return (0);
		if (bsp(a, b, c, point))
			std::cout << "point IN" << std::endl;
		else
			std::cout << "point OUT" << std::endl;
	}
	std::cout << "=====3======" << std::endl;
	{
		Point a(-4, 50);
		Point b(-4, 50);
		Point c(23, 53);
		Point point(0 ,0);

		if (check_arg(a, b, c))
			return (0);
		if (bsp(a, b, c, point))
			std::cout << "point IN" << std::endl;
		else
			std::cout << "point OUT" << std::endl;
	}
	return (0);
}
