#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		// Constructors
		DiamondTrap(std::string Name);
		DiamondTrap(const DiamondTrap &copy);

		// Destructor
		~DiamondTrap();

		// Operators
		DiamondTrap & operator=(const DiamondTrap &assign);

		// Getters / Setters

		// Methods

		using	ScavTrap::attack;
		void	whoAmI();

	private:

		std::string	_Name;

};

#endif
