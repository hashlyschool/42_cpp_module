#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:

		// Constructors
		AMateria();
		AMateria(const AMateria &copy);
		AMateria(const std::string &type);

		// Destructor
		virtual ~AMateria();

		// Operators


		// Getters / Setters
		const std::string &getType() const;

		// Methods

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		const std::string _type;

};


#endif
