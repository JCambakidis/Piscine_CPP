#include"ClapTrap.hpp"

int main()
{
	ClapTrap *clp1 = new ClapTrap("Henry");
	ClapTrap *clp2 = new ClapTrap("Philippe");

	clp1->setAttackDamage(2);
	clp1->attack(clp2->getName());
	clp2->takeDamage(clp1->getAttackDamage());
	clp2->beRepaired(1);
	clp2->setAttackDamage(5);
	clp2->attack(clp1->getName());
	clp1->takeDamage(clp2->getAttackDamage());
	clp2->attack(clp1->getName());
	clp1->takeDamage(clp2->getAttackDamage());
	return 0;
}
