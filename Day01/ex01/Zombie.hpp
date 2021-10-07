#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		std::string getname(void);
		void announce(void);
		void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif