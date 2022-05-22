#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

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

		// // Getters / Setters
		// std::string getType() const;
		// void setType(std::string type);

	// private:
	// 	std::string _type;

};

#endif
