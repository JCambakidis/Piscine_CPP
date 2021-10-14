#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	int number_of_animals = 10;
	Animal *animals[number_of_animals];

	for (int i = 0; i < number_of_animals / 2; i++)
		animals[i] = new Dog();
	for (int i = number_of_animals / 2; i < number_of_animals; i++)
		animals[i] = new Cat();
	
	Animal *copied_animal = new Animal(*animals[3]);
	Dog *copied_dog = new Dog(*dynamic_cast<Dog*>(animals[3]));
	Cat *copied_cat = new Cat(*dynamic_cast<Cat*>(animals[7]));
	
	// Cat *copied_cat = new Cat(*dynamic_cast<Cat*>(animals[3])); <- Seg Fault
	// Dog *copied_animal = new Dog(*animals[3]); <- Not Working
	// Cat *copied_animal = new Cat(*animals[3]); <- Not Working
	// Animal *copied_animal = new Dog(*animals[3]); <- Not Working
	// Cat *copied_animal = new Animal(*animals[3]); <- Not Working

	copied_cat->makeSound();
	copied_dog->makeSound();
	copied_animal->makeSound();
	for (int i = 0; i < number_of_animals; i++)
		delete animals[i];

	delete copied_animal;
	delete copied_dog;
	delete copied_cat;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	return 0;
}
