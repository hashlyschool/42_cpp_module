#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

		// Destructor
		~WrongCat();

		// Operators
		WrongCat & operator=(const WrongCat &assign);

		// Getters / Setters
		std::string	getType() const;

		//methods
		void	makeSound() const;

	private:
		std::string type;
};

#endif
