#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << " have enterred in Gate keeper mode !" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name): ClapTrap(name)
{
		_Hitpoints = 100;
		_Energypoints = 50;
		_AttackDamage = 20;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap("default name")
{
		_Hitpoints = 100;
		_Energypoints = 50;
		_AttackDamage = 20;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroy" << std::endl;
}