#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		Animal	animal;
		Cat		cat;
		Dog		dog;

		animal.makeSound();
		cat.makeSound();
		dog.makeSound();
		std::cout << "-------------" << std::endl;
		Animal	temp = cat;
		// cat = dog; //error
		temp.makeSound();
		temp = dog;
		temp.makeSound();
	}
	std::cout << "-------------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	std::cout << "-------------" << std::endl;
	{
		Animal arr[10];

		for (int i = 0; i < 5; ++i)
			arr[i] = Cat();
		for (int i = 5; i < 10; ++i)
			arr[i] = Dog();
		for (int i = 0; i < 10; ++i)
			std::cout << arr[i].getType() << std::endl;
	}
	return (0);
}
