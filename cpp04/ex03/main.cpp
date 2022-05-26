#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// default test
int main()
{
	// Character test("test");
	// {
	// 	Character temp = test;
	// 	std::cout << temp.getName() << std::endl;
	// }
	// std::cout << test.getName() << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	// tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 		// Deep copy character
// 	ICharacter* bob = new Character("bob");
// 	std::cout << "DEEP COPY CHARACTER:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;

// 	Character	*charles = new Character("Charles");
// 	AMateria* tmp;
// 	tmp = src->createMateria("cure");
// 	charles->equip(tmp);
// 	tmp = src->createMateria("ice");
// 	charles->equip(tmp);
// 	tmp = src->createMateria("earth");
// 	charles->equip(tmp);
// 	std::cout << std::endl;

// 	//Deep copy vs its source character

// 	std::cout << "DEEP COPY VS SOURCE:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	Character	*charles_copy = new Character(*charles);


// 	std::cout << "\nCHARLEY:\n" << std::endl;
// 	charles->use(0, *bob);
// 	charles->use(1, *bob);
// 	charles->use(2, *bob);
// 	charles->use(3, *bob);

// 	std::cout << "\nCHARLEY COPY:\n" << std::endl;
// 	charles_copy->use(0, *bob);
// 	charles_copy->use(1, *bob);
// 	charles_copy->use(2, *bob);
// 	charles_copy->use(3, *bob);


// 	tmp = charles->getMateriaFromInventory(0);
// 	charles->unequip(0); // this shows that they have different materia pointers equipped
// 	delete tmp;
// 	tmp = charles_copy->getMateriaFromInventory(1);
// 	charles_copy->unequip(1); //this will produce a leak if we don't store the address somewhere else before
// 	delete tmp;
// 	tmp = src->createMateria("cure");
// 	charles_copy->equip(tmp);
// 	tmp = src->createMateria("ice");
// 	charles_copy->equip(tmp);
// 	tmp = src->createMateria("fire");
// 	charles_copy->equip(tmp);
// 	std::cout << std::endl;

// 	std::cout << "\nCHARLEY:\n" << std::endl;
// 	charles->use(0, *bob);
// 	charles->use(1, *bob);
// 	charles->use(2, *bob);
// 	charles->use(3, *bob);

// 	std::cout << "\nCHARLEY COPY:\n" << std::endl;
// 	charles_copy->use(0, *bob);
// 	charles_copy->use(1, *bob);
// 	charles_copy->use(2, *bob);
// 	charles_copy->use(3, *bob);
// 	std::cout << std::endl;

// 	delete bob;
// 	delete charles;
// 	delete charles_copy;
// 	delete src;
// 	return (0);
// }

