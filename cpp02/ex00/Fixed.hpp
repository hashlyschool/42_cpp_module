#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int getRawBits() const;
		void setRawBits(int const raw);
	private:

		int					_RawBits;
		static const int	div = 8;
};

#endif /* *********************************************************** FIXED_H */
