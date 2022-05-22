#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat(std::string type);

		// Destructor
		~WrongCat();

		// Operators
		WrongCat & operator=(const WrongCat &assign);

		// // Getters / Setters
		// std::string getType() const;
		// void setType(std::string type);

	// private:
	// 	std::string _type;

};

#endif
