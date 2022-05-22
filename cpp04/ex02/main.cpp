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
		// Animal	animal;
		Cat		cat;
		Dog		dog;

		// animal.makeSound();
		cat.makeSound();
		dog.makeSound();
	}
	return (0);
}
