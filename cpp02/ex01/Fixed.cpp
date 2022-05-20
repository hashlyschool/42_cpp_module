#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(num << div);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(n * (1 << div)));
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if (this == &rhs)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs._RawBits);
	return (*this);
}

std::ostream&		operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	_RawBits = raw;
}

float	Fixed::toFloat( void ) const
{
	float	f;

	f = this->_RawBits;
	return (f / (1 << this->div));
}

int		Fixed::toInt( void ) const
{
	return (this->_RawBits >> this->div);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
