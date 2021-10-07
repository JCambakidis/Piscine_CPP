#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();

	std::string getname(void);
	void announce(void);
	void setname(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif