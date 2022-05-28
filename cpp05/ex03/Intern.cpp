#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

// Methods

static Form	*new_robo(std::string target)
{
	Form	*robo = new RobotomyRequestForm(target);
	return (robo);
}

static Form	*new_president(std::string target)
{
	Form	*president = new PresidentialPardonForm(target);
	return (president);
}

static Form	*new_shrub(std::string target)
{
	Form	*shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

// Subject required method:
Form *Intern::makeForm(std::string form_name, std::string form_target)
{
	Form	*(*fct[3])(std::string target) = { new_robo, new_president, new_shrub};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form	*ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form_name == msg[i])
			ret = fct[i](form_target);
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw (Intern::Exception());
	return (ret);
}

// Exception:
const char* Intern::Exception::what() const throw()
{
	return ("Unknown Form exception");
}
