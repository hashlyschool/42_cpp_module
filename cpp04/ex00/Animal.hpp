#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);

		// Destructor
		virtual ~Animal();

		// Operators
		Animal & operator=(const Animal &assign);

		//methods

		void	makeSound() const;

		// Getters / Setters

		std::string getType() const;
		void setType(std::string type);

	private:
		std::string type;

	protected:



};

#endif
