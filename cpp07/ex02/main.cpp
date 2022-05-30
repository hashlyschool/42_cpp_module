#include "Array.hpp"

// TEST
template< typename T>
void	display(T &t, unsigned int len)
{
	std::cout << "ref array = \t" << &t << "\t len array = " << len << "\n";
	for (unsigned int i = 0; i < len; i++)
		std::cout << "t[" << i << "] = \t" << t[i] << "\t| ref = \t" << &(t[i]) << "\n";
	std::cout << std::endl;
}

int	main()
{
		Array<int> monPotitArray;
		Array<int> BigArray(5);

		display(monPotitArray, monPotitArray.size());
		display(BigArray, BigArray.size());
		BigArray[0] = 0;
		BigArray[1] = 15;
		BigArray[2] = 24;
		BigArray[3] = 42;
		BigArray[4] = 1;
		display(BigArray, BigArray.size());

		Array<int> copy(BigArray);
		display(copy, copy.size());

	try
	{
		monPotitArray[0] = 1;
	}
	catch (std::exception & e){
		std::cout << "Oh no, index does not exist" << std::endl;
	}

}
