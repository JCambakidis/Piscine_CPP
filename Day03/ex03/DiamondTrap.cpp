#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _Name << " and also " << ClapTrap::_Name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	std::cout << "DiamondTrap attack called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _Name(name)
{
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energypoints = ScavTrap::_Energypoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap("Default name"), FragTrap("Default name"), _Name("Default name")
{
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energypoints = ScavTrap::_Energypoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}