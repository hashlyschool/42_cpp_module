#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(std::string type);

		// Destructor
		virtual ~WrongAnimal();

		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);


		// Getters / Setters

		std::string getType() const;
		void setType(std::string type);

		//methods

		void	makeSound() const;

	private:
		std::string type;

};

#endif
