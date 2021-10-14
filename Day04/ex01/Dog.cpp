#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}

Dog::Dog(/* args */): Animal("Dog")
{
	std::cout << "It's a " << _type << std::endl;
	_br = new Brain();
}

Dog::Dog(Dog const &dogi):Animal(dogi.getType())
{
	std::cout << "Dog has been copied !" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Adios " << _type << std::endl;
	delete _br;
}