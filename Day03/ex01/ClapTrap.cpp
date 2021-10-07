#include "ClapTrap.hpp"

/*
*	Getter
*	____________________________
*/

std::string ClapTrap::getName()
{
	return _Name;
}

int ClapTrap::getHitPoints()
{
	return _Hitpoints;
}

int ClapTrap::getEnergyPoints()
{
	return _Energypoints;
}

int ClapTrap::getAttackDamage()
{
	return _AttackDamage;
}

/*
*	Setter
*	____________________________
*/

void ClapTrap::setName(std::string name)
{
	_Name = name;
}

void ClapTrap::setHitPoints(int hitpoints)
{
	_Hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(int energypoints)
{
	_Energypoints = energypoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	_AttackDamage = attackDamage;
}


/*
*	Basic Functions
*	____________________________
*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_Name << " causing " << this->_AttackDamage << " damage to " << target << "." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_Hitpoints -= amount;
	std::cout << "ClapTrap " << this->_Name << " get " << amount << " damage." << std::endl;
	if (_Hitpoints <= 0)
		delete this;
	else
		std::cout << "ClapTrap " << this->_Name << " has " << _Hitpoints << " hp left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_Hitpoints += amount;
	std::cout << "ClapTrap " << this->_Name << " was healed by " << amount << "." << std::endl;
	std::cout << "ClapTrap " << this->_Name << " has " << _Hitpoints << " hp left." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap &clp)
{
	_Name = clp.getName();
	_Hitpoints = clp.getHitPoints();
	_Energypoints = clp.getEnergyPoints();
	_AttackDamage = clp.getAttackDamage();
	std::cout << "ClapTrap " << this->_Name << " assignation." << std::endl;
	return *this;
}

/*
*	Constructors
*	____________________________
*/

ClapTrap::ClapTrap(std::string Name):_Name(Name), _Hitpoints(10), _Energypoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << this->_Name << " was created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clp):_Name(clp._Name), _Hitpoints(clp._Hitpoints), _Energypoints(clp._Energypoints), _AttackDamage(clp._AttackDamage)
{
	std::cout << "ClapTrap " << this->_Name << " was copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_Name << " was destroy." << std::endl;
}