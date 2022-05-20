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

		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed( Fixed const & src );
		~Fixed();

		Fixed	&operator=( Fixed const & rhs );

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream & o, Fixed const & rhs);

#endif /* *********************************************************** FIXED_H */
