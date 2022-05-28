#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : Form("Default Robo Parent", 72, 45)
{
	this->target = "Default";
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robo Parent", 72, 45)
{
	this->target = target;
	std::cout << "\e[0;33mField Constructor called of RobotomyRequestForm\e[0m" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute())
{
	this->target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->target = assign.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (this->target);
}

const char* RobotomyRequestForm::FailureException::what() const throw()
{
	return ("Robotomy failure");
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw (Form::UnsignedFormException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (Form::GradeTooLowException());
	int success = std::rand() % 2; // Random number between 0 and 1
	std::cout << "< intensive drilling noises >" << std::endl;
	if (success == 1)
	{
		std::cout << this->target << " has been robotomized" << std::endl;
	}
	else
		throw (RobotomyRequestForm::FailureException());
}
