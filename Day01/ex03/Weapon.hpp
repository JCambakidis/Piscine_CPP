#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	const std::string getType(void);
	void setType(std::string type);
	
	Weapon(std::string type);
	~Weapon();
};

#endif