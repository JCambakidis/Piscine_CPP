#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

const std::string Weapon::getType(void)
{
	return (const std::string)_type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}