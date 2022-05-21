#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public:
		// Constructors
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &copy);

		// Destructor
		~ScavTrap();

		// Operators
		ScavTrap & operator=(const ScavTrap &assign);

		// Getters / Setters

		// Methods

		void attack(const std::string& target);
		void guardGate();

};

#endif
