#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		// Destructor
		~ShrubberyCreationForm();

		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);

		std::string	getTarget( void ) const;

		void execute(Bureaucrat const & executor) const;
	private:
		std::string	target;

};

#endif
