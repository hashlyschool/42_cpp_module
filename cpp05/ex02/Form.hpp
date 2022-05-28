#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(std::string name, int grade_to_sign, int _grade_to_execute);

		// Destructor
		virtual ~Form();

		// Operators
		Form & operator=(const Form &assign);

		// Getters / Setters
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getSigned() const;
		//ex01
		void setSigned(const bool value);
		//ex02
		virtual void execute(Bureaucrat const & executor) const = 0;
		// Exceptions
		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		class UnsignedFormException : public Form::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		// Methods
		void	be_signed(Bureaucrat & ref);

	private:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
		bool				_signed;

};

std::ostream & operator<<( std::ostream &os, Form const &form);

#endif
