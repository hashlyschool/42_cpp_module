#include "Form.hpp"

// Constructors
Form::Form() :
	_name("NoName"),
	_grade_to_sign(150),
	_grade_to_execute(150),
	_signed(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy) :
	_name(copy.getName()),
	_grade_to_sign(copy.getGradeToSign()),
	_grade_to_execute(copy.getGradeToExecute()),
	_signed(copy.getSigned())
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) :
	_name(name),
	_grade_to_sign(grade_to_sign),
	_grade_to_execute(grade_to_execute),
	_signed(0)
{
	if (_grade_to_sign > 150 || _grade_to_execute > 150)
		throw (Form::GradeTooLowException());
	else if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw (Form::GradeTooHighException());
	else
		std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}

// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	if (this != &assign)
		this->_signed = assign.getSigned();
	return (*this);
}

// Getters / Setters
std::string Form::getName() const
{	return (this->_name); }
int Form::getGradeToSign() const
{	return (this->_grade_to_sign); }
int Form::getGradeToExecute() const
{	return (this->_grade_to_execute); }
bool Form::getSigned() const
{	return _signed; }

void Form::setSigned(const bool value)
{
	std::cout << *this << " signed value was set to " << value << std::endl;
	this->_signed = value;
}

// Exceptions
const char * Form::Exception::what() const throw()
{
	return "FormException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("the grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("the grade is too high");
};

const char* Form::UnsignedFormException::what() const throw()
{
	return ("Cannot execute an unsigned form");
};

std::ostream & operator<<( std::ostream & os, Form const & form)
{
	os << "Form " << form.getName() << " having a grade_to_sign " << form.getGradeToSign() << " and a grade_to_execute "
		<< form.getGradeToExecute() << " with signed equal to " << form.getSigned();
	return (os);
}

// Methods
void	Form::be_signed(Bureaucrat & ref)
{
	int	grade = ref.getGrade();

	if (grade > _grade_to_sign)
	{
		throw (Form::GradeTooLowException());
		return ;
	}
	this->_signed = true;
	std::cout << "Form " << this->getName() << " was just signed by the bureaucrat " << ref.getName() << std::endl;
}
