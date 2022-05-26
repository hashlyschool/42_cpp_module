#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	{
		Dog	basic;
		{
			Dog	tmp = basic;
		}
	}
	// Animal	a;
	// Cat		b;

	// a = b;
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	const Animal* temp = i;

	// 	i = j;
	// 	delete temp;
	// 	delete j;//should not create a leak
	// }
	// {
	// 	Animal	animal;
	// 	Cat		cat;
	// 	Dog		dog;

	// 	animal.makeSound();
	// 	cat.makeSound();
	// 	dog.makeSound();
	// }
	// std::cout << "-------------" << std::endl;
	// {
	// 	const Animal* i = new Cat();
	// 	const Animal* j = new Dog();
	// 	const Animal* meta = new Animal();

	// 	std::cout << i->getType() << " " << std::endl;
	// 	std::cout << j->getType() << " " << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();

	// 	delete meta;
	// 	delete j;
	// 	delete i;
	// }
	// std::cout << "-------------" << std::endl;
	// {
	// 	Animal *arr[6];

	// 	for (int i = 0; i < 2; ++i)
	// 		arr[i] = new Animal();
	// 	for (int i = 2; i < 4; ++i)
	// 		arr[i] = new Cat();
	// 	for (int i = 4; i < 6; ++i)
	// 		arr[i] = new Dog();
	// 	for (int i = 0; i < 6; ++i)
	// 		arr[i]->makeSound();
	// 	for (int i = 5; i >= 0; --i)
	// 		delete arr[i];
	// }
	return (0);
}
