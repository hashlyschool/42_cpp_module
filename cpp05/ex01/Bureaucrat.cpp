#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150)
{	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl; }

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName() + "_copy")
{
	_grade = copy.getGrade();
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return (*this);
}

// Getters / Setters
const std::string Bureaucrat::getName() const
{	return (this->_name); }

int Bureaucrat::getGrade() const
{	return (this->_grade); }

void Bureaucrat::setGrade(int grade)
{	_grade = grade; }

// Methods

void				Bureaucrat::incrementGrade( void )
{
	std::cout << "Incrementing bureaucrat " << _name << "'s grade " << _grade << " by 1\n";
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void				Bureaucrat::decrementGrade( void )
{
	std::cout << "Decrementing bureaucrat " << _name << "'s grade " << _grade << " by 1\n";
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void Bureaucrat::signForm(Form & assign)
{
	try
	{
		if (assign.getSigned())
			std::cout << "Bureaucrat " << this->_name << " cannot sign " << assign.getName() << " because the form is already signed" << std::endl;
		else
		{
			assign.be_signed(*this);
			std::cout << "Bureaucrat " << this->_name << " succesfully signs Form" << assign.getName() << std::endl;
		}
	}
	catch (Form::Exception &e)
	{
		std::cout << "Bureaucrat " << this->_name << " with a grade " << this->_grade << " cannot sign " << assign << " because " << e.what() << std::endl;
	}
}

// << operator overload
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "Bureaucrat " << bureaucrat.getName() << " has a grade " << bureaucrat.getGrade();
	return (os);
}

// Exceptions
const char * Bureaucrat::Exception::what() const throw()
{
	return ("BureaucratException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Cannot get a grade > 150!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Cannot get a grade < 1!");
};
