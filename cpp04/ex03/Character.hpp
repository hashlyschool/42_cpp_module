#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define SIZE_INVENTORY 4

class Character : public ICharacter
{
	public:
		// Constructors
		Character(std::string name);
		Character(const Character &copy);

		// Destructor
		~Character();

		// Operators
		Character & operator=(const Character &assign);

		// Getters / Setters

		std::string const & getName() const;
		AMateria	*getMateriaFromInventory(int id);

		// Methods

		void equip(AMateria *m);
		void unequip(int id);
		void use(int id, ICharacter& target);


	private:
		AMateria			*_inventory[SIZE_INVENTORY];
		std::string const	_name;

};

#endif

