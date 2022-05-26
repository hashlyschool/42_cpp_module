#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);

		// Destructor
		virtual ~Dog();

		// Operators
		Dog & operator=(const Dog &assign);

		// Getters / Setters
		std::string	getType() const;
		Brain		*getBrain() const;

		// Methods
		void	makeSound() const;

	private:
		std::string	type;
		Brain		*brain;

};

#endif
