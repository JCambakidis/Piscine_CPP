#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap *clp1 = new FragTrap("Henry");
	ScavTrap *clp2 = new ScavTrap("Philippe");

	FragTrap* scpt1 = static_cast<FragTrap*>(clp1);

	clp1->attack(clp2->getName());
	clp2->takeDamage(scpt1->getAttackDamage());
	clp2->beRepaired(1);
	clp2->guardGate();
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->highFivesGuys();
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	clp2->attack(scpt1->getName());
	scpt1->takeDamage(clp2->getAttackDamage());
	return 0;
}
