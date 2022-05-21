#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &copy);
		// ClapTrap(std::string Name, unsigned int Hit, unsigned int Energy, unsigned int Damage);

		// Destructor
		~ClapTrap();

		// Operators
		ClapTrap & operator=(const ClapTrap &assign);

		// Methods

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string		_Name;
		int	_Hit;
		int	_Energy;
		int	_Damage;

	protected:

		// Getters / Setters

		std::string	getName() const;
		void		setName(std::string Name);

		int			getHit() const;
		void		setHit(int Hit);

		int			getEnergy() const;
		void		setEnergy(int Energy);

		int			getDamage() const;
		void		setDamage(int Damage);
};

#endif
