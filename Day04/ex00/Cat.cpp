#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}

Cat::Cat(/* args */): Animal("Cat")
{
	std::cout << "It's a " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Adios " << _type << std::endl;
}