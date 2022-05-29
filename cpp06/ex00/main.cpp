#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>

static void convertToChar(double value)
{
	if (!isascii(value) || std::isnan(value) || std::isinf(value))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	else if (!std::isprint(value))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	return ;
}

static void convertToInt(double value)
{
	if (std::isnan(value) || std::isinf(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	return ;
}

void convertToFloat(double value)
{
	if (std::isinf(value))
	{
		if (value == std::numeric_limits<float>::infinity())
			std::cout << "float: inff" << std::endl;
		else
			std::cout << "float: -inff" << std::endl;
		return ;
	}
	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout <<"float: "<< static_cast<float>(value) << "f" << std::endl;
}

static void convertToDouble(double value)
{
	if (std::isinf(value))
	{
		if (value == std::numeric_limits<double>::infinity())
			std::cout << "double: inf" << std::endl;
		else
			std::cout << "double: -inf" << std::endl;
		return ;
	}
	std::cout <<"double: "<< static_cast<double>(value) << std::endl;
}

int main (int argc, char **argv)
{
	double value = 0.0;

	if (argc != 2)
	{
		std::cerr << " Usage: ./convert <value>" << std::endl;
		return (1);
	}
	std::cout << std::fixed;
	std::cout.precision(1);

	const char *str = argv[1];


	value = std::strtod(str, NULL);
	if (str[1] == '\0' && !std::isdigit(str[0]) && std::isprint(str[0]))
		value = static_cast < double > (str[0]);
	// CHAR
	try
	{
		convertToChar(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	// INT
	try
	{
		convertToInt(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	// FLOAT
	try
	{
		convertToFloat(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	// DOUBLE
	try
	{
		convertToDouble(value);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
