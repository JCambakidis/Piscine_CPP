#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif