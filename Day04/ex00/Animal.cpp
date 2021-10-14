#include "Animal.hpp"

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
}

Animal::Animal()
{
	std::cout << "Animal has been born !" << std::endl;
}

Animal::Animal(std::string type):_type(type)
{
	std::cout << "Animal has been born !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal  died !" << std::endl;
}