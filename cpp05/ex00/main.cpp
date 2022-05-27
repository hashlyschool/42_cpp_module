#include "Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat	first("First", 75);
		Bureaucrat	second("Second", 75);

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
	}
	std::cout << std::endl << std::endl;
	{
		try
		{
			Bureaucrat plus("Plus", 250);
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
	}
	std::cout << std::endl << std::endl;
	{
		try
		{
			Bureaucrat plus("Plus", 250);
		}
		catch (Bureaucrat::Exception &exc)
		{
			std::cout << exc.what();
		}
	}
	std::cout << std::endl << std::endl;
	return (0);
}
