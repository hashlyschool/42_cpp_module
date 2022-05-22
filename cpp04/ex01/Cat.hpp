#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		Cat(std::string type);

		// Destructor
		~Cat();

		// Operators
		Cat & operator=(const Cat &assign);

		// // Getters / Setters
		// std::string getType() const;
		// void setType(std::string type);

	private:
		Brain	*_brain;

};

#endif
