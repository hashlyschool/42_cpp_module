#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->_RawBits = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const num)
{
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num << this->div);
}

Fixed::Fixed(float const n)
{
	int	a;

	a = roundf(n * (1 << this->div));
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(a);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if (this == &rhs)
		return (*this);
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(rhs._RawBits);
	return (*this);
}

bool	Fixed::operator==(Fixed const &right) const
{	return (right._RawBits == this->_RawBits);}

bool	Fixed::operator!=(Fixed const &right) const
{	return (!(*this == right));}

bool	Fixed::operator>(Fixed const &right) const
{	return (this->_RawBits > right._RawBits);}

bool	Fixed::operator<(Fixed const &right) const
{	return (this->_RawBits < right._RawBits);}

bool	Fixed::operator>=(Fixed const &right) const
{	return (this->_RawBits >= right._RawBits);}

bool	Fixed::operator<=(Fixed const &right) const
{	return (this->_RawBits <= right._RawBits);}

Fixed	Fixed::operator+(Fixed const &right) const
{	return (Fixed(this->toFloat() + right.toFloat()));}

Fixed	Fixed::operator-(Fixed const &right) const
{	return (Fixed(this->toFloat() - right.toFloat()));}

Fixed	Fixed::operator*(Fixed const &right) const
{	return (Fixed(this->toFloat() * right.toFloat()));}

Fixed	Fixed::operator/(Fixed const &right) const
{	return (Fixed(this->toFloat() / right.toFloat()));}

Fixed	&Fixed::operator++()
{
	this->_RawBits += 1;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_RawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	prev = *this;

	this->_RawBits += 1;
	return (prev);
}

Fixed	Fixed::operator--(int)
{
	Fixed	prev = *this;

	this->_RawBits -= 1;
	return (prev);
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
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
