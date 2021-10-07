#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zomb = new Zombie(name);
	return zomb;
}