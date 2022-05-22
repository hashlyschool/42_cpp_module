#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# define SIZE_BRAIN 100

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		// Destructor
		~Brain();

		// Operators
		Brain & operator=(const Brain &assign);

		// Getters / Setters

	private:
		std::string *_idea;

};

#endif
