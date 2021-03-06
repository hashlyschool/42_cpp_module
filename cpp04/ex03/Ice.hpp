#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);

		// Destructor
		virtual ~Ice();

		// Operators
		Ice & operator=(const Ice &assign);

		// Methods
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);

	private:

		// std::string _type;
};

#endif
