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

		// Destructor
		virtual ~Animal();

		// Operators
		Animal & operator=(const Animal &assign);

		//methods

		virtual void	makeSound() const;

		// Getters / Setters
		std::string getType() const;
		void setType(std::string type);

	private:
		std::string type;

	protected:
		Animal(std::string type);

};

#endif
