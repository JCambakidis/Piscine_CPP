#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zomb = Zombie(name);
	zomb.announce();
}