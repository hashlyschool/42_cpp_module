#include <iostream>
#include "whatever.hpp"

class Awesome
{
	public:
		Awesome(void) : _n(0) {}

		Awesome( int n ) : _n( n ) {}

		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }

		bool	operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool	operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool	operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool	operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool	operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool	operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

		int		get_n() const { return _n; }

	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a)
{
	o << a.get_n();
	return o;
}

int main( void )
{
	// Subject
	{
		int a = 2;
		int b = 3;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl << std::endl;
	}
	// INT
	{
		int			a = 43;
		int			b = -12;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl << std::endl;
	}
	// FLOAT
	{
		float		a = 0.0f;
		float		b = -475.14f;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl << std::endl;
	}
	// STRING
	{
		std::string	a = "Bonjour";
		std::string	b = "Au revoir";

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl << std::endl;

	}
	// CHAR
	{
		char		a = 'a';
		char		b = 'b';

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl << std::endl;
	}
	// DOUBLE
	{
		double		a = 4.4;
		double		b = 4.4;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl << std::endl;
	}
	// CHECK_LIST
	Awesome a(2), b(4);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl << std::endl;
	return 0;
}
