#include "Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat	first("First", 15);
		Bureaucrat	second("Second", 125);

		std::cout << first << std::endl;
		std::cout << second << std::endl;
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat minus("Minus", -250);
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
		std::cout << std::endl << std::endl;
	}
	{
		try
		{
			Bureaucrat plus("Plus", 250);
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
		std::cout << std::endl << std::endl;
	}
	{
		Bureaucrat	test("One", 1);
		try
		{
			test.incrementGrade();
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Bureaucrat	test("Second", 150);
		try
		{
			test.decrementGrade();
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		Bureaucrat	test("blabla", 15);
		try
		{
			test.decrementGrade();
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
		std::cout << test << std::endl;
		try
		{
			test.incrementGrade();
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
		std::cout << test << std::endl;
	}
	return (0);
}
