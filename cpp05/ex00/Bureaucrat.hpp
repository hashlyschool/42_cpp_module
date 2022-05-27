#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);

		// Destructor
		~Bureaucrat();

		// Operators
		Bureaucrat	&operator=(const Bureaucrat &assign);

		// Getters
		const	std::string getName() const;
		int		getGrade() const;

		// Setters
		void	setGrade(const int new_grade);

		// Methods
		void	incrementGrade();
		void	decrementGrade();

		// Exceptions
		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public Bureaucrat::Exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public Bureaucrat::Exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		std::string	_name;
		int			_grade;

};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif

