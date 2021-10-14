#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const WrongAnimal* miaou = new WrongCat();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << miaou->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	miaou->makeSound(); //will output the cat sound!
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}
