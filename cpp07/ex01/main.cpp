#include <iostream>
#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }

		int		get( void ) const { return this->_n; }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

int main(void)
{
	int			iarr[4] = {0, 1, 2, 3};
	char		carr[5] = "abcd";
	float		farr[4] = {0.1f, 2.3f, 4.5f, 6.7f};
	float		darr[4] = {0.12, 2.34, 4.56, 6.78};
	std::string	sarr[4] = {"OK", "KO", "OO", "KK"};

	// INT
	ft_tests(iarr, 4, "INT");

	// CHAR
	ft_tests(carr, 5, "CHAR");

	// FLOAT
	ft_tests(farr, 4, "FLOAT");

	// DOUBLE
	ft_tests(darr, 4, "DOUBLE");

	// STRING
	ft_tests(sarr, 4, "STRING");

	// SHECK_LIST
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- Inever understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
	return (0);
}
