#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);

		// Destructor
		virtual ~Cat();

		// Operators
		Cat & operator=(const Cat &assign);

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

