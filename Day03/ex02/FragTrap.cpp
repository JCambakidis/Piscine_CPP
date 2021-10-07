#include "FragTrap.hpp"

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _Name << " give you a highfive !" << std::endl;
}

FragTrap::FragTrap(std::string const & name): ClapTrap(name)
{
		_Hitpoints = 100;
		_Energypoints = 100;
		_AttackDamage = 30;
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("Default name")
{
		_Hitpoints = 100;
		_Energypoints = 100;
		_AttackDamage = 30;
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroy" << std::endl;
}