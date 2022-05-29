#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// For randomness
#include <cstdlib>
#include <ctime>

static void ft_msg(std::string msg)
{
	std::cout << msg << std::endl;
}

Base * generate(void)
{
	int random = (std::rand() % 3) + 1; // Random int between 1 and 3
	A	*ret1;
	B	*ret2;
	C	*ret3;
	switch (random)
	{
		case (1):
			ret1 = new A;
			ft_msg("Random A created");
			return (static_cast<Base *>(ret1));
			break ;
		case (2):
			ret2 = new B;
			ft_msg("Random B created");
			return (static_cast<Base *>(ret2));
			break ;
		case (3):
			ret3 = new C;
			ft_msg("Random C created");
			return (static_cast<Base *>(ret3));
			break ;
		default:
			ret3 = new C;
			ft_msg("Default C created");
			return (static_cast<Base *>(ret3));
			break ;
	}
}

// Identify via address
void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "Unknown type\n";
}

// Identify via reference
void identify(Base& p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A\n";
		return ;
	}
	catch (std::exception &bc) {
		std::cout << "Definetely not A\n";
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B\n";
		return ;
	}
	catch (std::exception &bc) {
		std::cout << "Definetely not B\n";
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C\n";
		return ;
	}
	catch (std::exception &bc) {
		std::cout << "Definetely not C\n";
	}
	std::cout << "Unknown type\n";
}

int main(void)
{
	std::srand(std::time(0)); // need to call this before calling std::rand()

	// 3 random Base children
	std::cout << "3 RANDOM BASE CHILDREN:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	std::cout << std::endl << std::endl;

	// Create references
	Base &rand1_ref = *rand1;
	Base &rand2_ref = *rand2;
	Base &rand3_ref = *rand3;

	std::cout << "IDENTIFY VIA ADDRESS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1);
	identify(rand2);
	identify(rand3);
	std::cout << std::endl << std::endl;

	std::cout << "IDENTIFY VIA REFERENCE:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1_ref);
	identify(rand2_ref);
	identify(rand3_ref);
	std::cout << std::endl << std::endl;

	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete rand1;
	delete rand2;
	delete rand3;
	std::cout << std::endl << std::endl;
	return (0);
}
