#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}

Dog::Dog(/* args */): Animal("Dog")
{
	std::cout << "It's a " << _type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Adios " << _type << std::endl;
}