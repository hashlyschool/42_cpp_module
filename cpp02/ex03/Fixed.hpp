#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:

		int					_RawBits;
		static const int	div = 8;

	public:

		//ex00
		Fixed();
		~Fixed();
		Fixed( Fixed const & src );
		Fixed	&operator=( Fixed const & rhs );
		int		getRawBits() const;
		void	setRawBits(int const raw);

		//ex01
		Fixed(const int);
		Fixed(const float);

		float	toFloat( void ) const;
		int		toInt( void ) const;

		//ex02
		bool	operator==(Fixed const &right) const;
		bool	operator!=(Fixed const &right) const;
		bool	operator>(Fixed const &right) const;
		bool	operator<(Fixed const &right) const;
		bool	operator>=(Fixed const &right) const;
		bool	operator<=(Fixed const &right) const;

		Fixed	operator+(Fixed const &right) const;
		Fixed	operator-(Fixed const &right) const;
		Fixed	operator*(Fixed const &right) const;
		Fixed	operator/(Fixed const &right) const;

		Fixed&	operator++( void );
		Fixed&	operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );

		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static Fixed const &min( Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
};

//ex01
std::ostream& operator<<(std::ostream & o, Fixed const & rhs);

#endif /* *********************************************************** FIXED_H */
