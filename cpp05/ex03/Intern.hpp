#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);

		// Destructor
		~Intern();

		// Operators
		Intern & operator=(const Intern &assign);

		// Method:
		Form *makeForm(std::string form_name, std::string form_target);

		// Exception:
		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

#endif
