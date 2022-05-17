#include <string>
#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory adress:"
	<< "\n\t&string = " << &string
	<< "\n\tstringPTR = " << stringPTR
	<< "\n\t&stringREF = " << &stringREF
	 << std::endl;

	std::cout << "Value:"
	<< "\n\tstring = " << string
	<< "\n\t*stringPTR = " << *stringPTR
	<< "\n\tstringREF = " << stringREF
	<< std::endl;

	return (0);
}
