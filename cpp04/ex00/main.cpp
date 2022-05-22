#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
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
		// const WrongAnimal* meta = new WrongAnimal();
		// const WrongAnimal* i = new WrongCat();
		// i->makeSound(); //will output the cat sound!
		// meta->makeSound();
		const WrongAnimal* k = new WrongCat();

		k->makeSound();
		delete k;
	}
	return (0);
}
