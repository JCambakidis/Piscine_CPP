#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	Zombie* zombies;
	if (argc == 3)
	{
		int number_of_zombies = atoi(argv[1]);
		zombies = zombieHorde(number_of_zombies, argv[2]);
		for (int i = 0; i < number_of_zombies; i++)
		{
			std::cout << i << " : ";
			zombies[i].announce();
		}
		delete [] zombies;
	}
	return 0;
}

