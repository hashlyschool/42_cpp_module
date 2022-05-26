#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);

		// Destructor
		~Dog();

		// Operators
		Dog & operator=(const Dog &assign);

		// Getters / Setters
		std::string getType() const;

		// Methods
		void	makeSound() const;

	private:
		std::string type;
};

#endif
