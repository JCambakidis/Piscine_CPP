#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}