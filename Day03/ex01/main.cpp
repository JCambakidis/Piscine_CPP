#include "ScavTrap.hpp"

int main()
{
	ClapTrap *clp1 = new ScavTrap("Henry");
	ScavTrap *clp2 = new ScavTrap("Philippe");

	ScavTrap* scpt1 = static_cast<ScavTrap*>(clp1);

	clp1->attack(clp2->getName());
	clp2->takeDamage(scpt1->getAttackDamage());
	clp2->beRepaired(1);
	scpt1->guardGate();
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	return 0;
}
