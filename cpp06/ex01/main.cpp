#include "Data.hpp"
#include <stdint.h>

// Data to uintptr_t
static uintptr_t serialize(Data* ptr)
{
	return	(reinterpret_cast<uintptr_t>(ptr));
}

// Uintptr_t to data
static Data* deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data data1("Data");

	// serialize
	uintptr_t	test = serialize(&data1);

	// deserialize
	Data	*data2 = deserialize(test);
	std::cout << std::endl << std::endl;

	// Result should be the same!
	// (Serialization/deserialization keep the same value inside data and same address)

	std::cout << "ADRESSES COMPARED:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Data1 address: "<< &data1 << std::endl;
	std::cout << "Data2 address: "<< data2 << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "VALUES INSIDE DATA COMPARED:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Data1 value: " << data1.getValue() << std::endl;
	std::cout << "Data2 value: " << (*data2).getValue() << std::endl;
	std::cout << std::endl << std::endl;

	return (0);
}
