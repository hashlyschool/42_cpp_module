#include "Array.hpp"

int	main()
{
	try{
		Array<int> monPotitArray;
		Array<int> BigArray(5);

		std::cout << "Number of elements in the first array : " << monPotitArray.size() << std::endl;
		std::cout << "Number of elements in the second array : " << BigArray.size() << std::endl;

		BigArray[0] = 0;
		BigArray[1] = 15;
		BigArray[2] = 24;
		BigArray[3] = 42;
		BigArray[4] = 1;

		Array<int> copy(BigArray);

		std::cout << "Number of elements in the copy : " << copy.size() << std::endl;
		std::cout << "copy[2] = " << copy[2] << std::endl;

		monPotitArray[0] = 1;
	}
	catch (std::exception & e){
		std::cout << "Oh no, index does not exist" << std::endl;
	}

}
