#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

int main(void)
{
	Zombie zomb = Zombie("Glurp");
	zomb.announce();

	Zombie *zombzomb = newZombie("Pas Glurp");

	randomChump("Cheeeech");
	
	delete zombzomb;
	return 0;
}
