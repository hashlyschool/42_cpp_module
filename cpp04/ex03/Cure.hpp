#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);

		// Destructor
		~Cure();

		// Operators
		Cure & operator=(const Cure &assign);

		// Methods
		std::string const	&getType() const;
		Cure				*clone() const;
		void				use(ICharacter& target);

	private:

		// std::string _type;
};

#endif
