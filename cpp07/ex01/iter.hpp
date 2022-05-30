#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

// Subject
template< typename T>
void iter(T *array, int array_length, void (*f)(T const &ref))
{
	if (!f)
	{
		std::cout << "f = NULL" << std::endl;
		return ;
	}
	for(int i = 0; i < array_length; i++)
		f(array[i]);
}

// Tests
template< typename T>
void	display(T const &t)
{
	std::cout << t << " ";
}

template< typename T>
void ft_tests(T t, int len, std::string type)
{
	std::cout << std::endl << type << std::endl;
	std::cout << "----------------------------" << std::endl;
	iter(t, len, display);
	std::cout << std::endl << std::endl;
}

#endif
