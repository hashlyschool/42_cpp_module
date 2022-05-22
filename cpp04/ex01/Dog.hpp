#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		Dog(std::string type);

		// Destructor
		~Dog();

		// Operators
		Dog & operator=(const Dog &assign);

	private:
		Brain	*_brain;

};

#endif
