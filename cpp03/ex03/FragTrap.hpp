#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	public:
		// Constructors
		FragTrap(std::string Name);
		FragTrap(const FragTrap &copy);

		// Destructor
		~FragTrap();

		// Operators
		FragTrap & operator=(const FragTrap &assign);

		// Getters / Setters

		// Methods

		void attack(const std::string& target);
		void highFivesGuys(void);

};

#endif
