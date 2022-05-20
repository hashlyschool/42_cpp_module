#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	//default test
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl << std::endl;
	}
	std::cout << "-------------MY TEST------------" << std::endl;
	{
		std::cout << "\t---ONE----" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "a = "<< a << std::endl;
		std::cout << "b = "<< b << std::endl;

		if (a == b)
			std::cout << "a = b" << std::endl;
		else
			std::cout << "a != b" << std::endl;

		if (a != b)
			std::cout << "a != b" << std::endl;
		else
			std::cout << "a = b" << std::endl;

		if (a > b)
			std::cout << "a > b" << std::endl;
		else
			std::cout << "a !> b" << std::endl;

		if (a < b)
			std::cout << "a < b" << std::endl;
		else
			std::cout << "a !< b" << std::endl;

		if (a >= b)
			std::cout << "a >= b" << std::endl;
		else
			std::cout << "a !>= b" << std::endl;

		if (a <= b)
			std::cout << "a <= b" << std::endl;
		else
			std::cout << "a !<= b" << std::endl;

		std::cout << "\t---SECOND----" << std::endl;
		// Fixed a;
		Fixed c( Fixed( 5.05f ) * Fixed( 2 ) );
		a = 3.14f;

		std::cout << "a = "<< a << std::endl;
		std::cout << "c = "<< c << std::endl;

		c = 3.14f;

		std::cout << "a = "<< a << std::endl;
		std::cout << "c = "<< c << std::endl;

		if (a == c)
			std::cout << "a = c" << std::endl;
		else
			std::cout << "a != c" << std::endl;

		if (a != c)
			std::cout << "a != c" << std::endl;
		else
			std::cout << "a = c" << std::endl;

		if (a > c)
			std::cout << "a > c" << std::endl;
		else
			std::cout << "a !> c" << std::endl;

		if (a < c)
			std::cout << "a < c" << std::endl;
		else
			std::cout << "a !< c" << std::endl;

		if (a >= c)
			std::cout << "a >= c" << std::endl;
		else
			std::cout << "a !>= c" << std::endl;

		if (a <= c)
			std::cout << "a <= c" << std::endl;
		else
			std::cout << "a !<= c" << std::endl;
	}
	std::cout << "\t---THIRTH----" << std::endl;
	{
		Fixed a;

		std::cout << "a:\t" << a << std::endl;
		std::cout << "a++:\t" << a++ << std::endl;
		std::cout << "a:\t" << a << std::endl;
		std::cout << "++a:\t" << ++a << std::endl;
		std::cout << "a:\t" << a << std::endl;
		std::cout << "--a:\t" << --a << std::endl;
		std::cout << "a:\t" << a << std::endl;
		std::cout << "a--:\t" << a-- << std::endl;
		std::cout << "a:\t" << a << std::endl;
	}
	std::cout << "\t---FOURTH----" << std::endl;
	{
		Fixed a = 1265;
		Fixed const b( Fixed( 523.05f ) * Fixed( 2 ) );
		Fixed c(11.6f);

		std::cout << "a = "<< a << std::endl;
		std::cout << "b = "<< b << std::endl;
		std::cout << "c = "<< c << std::endl << std::endl;

		std::cout << "max(a, b)\t" << Fixed::max( a, b ) << std::endl;
		std::cout << "max(b, c)\t" << Fixed::max( b, c ) << std::endl;
		std::cout << "max(c, a)\t" << Fixed::max( c, a ) << std::endl;

		std::cout << "min(a, b)\t" << Fixed::min( a, b ) << std::endl;
		std::cout << "min(b, c)\t" << Fixed::min( b, c ) << std::endl;
		std::cout << "min(c, a)\t" << Fixed::min( c, a ) << std::endl;
	}
	return 0;
}
