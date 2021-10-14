#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal has been born !" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
	std::cout << "WrongAnimal has been born !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal  died !" << std::endl;
}