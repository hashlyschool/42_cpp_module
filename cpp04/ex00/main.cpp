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
		Animal	temp = cat;

		animal.makeSound(); //animal
		cat.makeSound(); //cat
		dog.makeSound(); //dog
		// cat = dog; //error
		temp.makeSound(); //animal
		std::cout << animal.getType() << " " << std::endl; //animal
		std::cout << cat.getType() << " " << std::endl; //cat
		std::cout << dog.getType() << " " << std::endl; //dog
		std::cout << temp.getType() << " " << std::endl; //cat
	}
	std::cout << "-------------" << std::endl;
	{
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		const Animal* meta = new Animal();
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "-------------" << std::endl;
	{
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		k->makeSound();

		delete k;
		delete meta;
		delete j;
		delete i;
	}
	return (0);
}
