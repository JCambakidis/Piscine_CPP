#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "CHEEEEeeeeeech !" << std::endl;
}

WrongCat::WrongCat(/* args */): WrongAnimal("WrongCat")
{
	std::cout << "It's a " << _type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Adios " << _type << std::endl;
}