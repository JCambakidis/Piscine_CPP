#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap *clp1 = new DiamondTrap("Henry");
	DiamondTrap *clp2 = new DiamondTrap("Philippe");

	clp1->attack(clp2->getName());
	clp2->takeDamage(clp1->getAttackDamage());
	clp2->beRepaired(1);
	clp2->attack(clp1->getName());
	clp1->takeDamage(clp2->getAttackDamage());

	clp1->guardGate();
	clp2->guardGate();

	clp1->highFivesGuys();
	clp2->highFivesGuys();
	return 0;
}
