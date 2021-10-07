#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

void	Zombie::setname(std::string name)
{
	_name = name;
}

std::string Zombie::getname(void)
{
	return _name;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " destroyed !" << std::endl;
	return ;
}