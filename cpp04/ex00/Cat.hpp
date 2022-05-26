#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);

		// Destructor
		~Cat();

		// Operators
		Cat & operator=(const Cat &assign);

		// Getters / Setters
		std::string	getType() const;

		// Methods
		void		makeSound() const;

	private:
		std::string type;
};

#endif
