#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
		std::string _Name;
		int _Hitpoints;
		int	_Energypoints;
		int _AttackDamage;

	public:

		//GETTER
		std::string getName();
		int getHitPoints();
		int getEnergyPoints();
		int getAttackDamage();

		//SETTER
		void setName(std::string name);
		void setHitPoints(int hitpoints);
		void setEnergyPoints(int energypoints);
		void setAttackDamage(int attackDamage);

		//BASIC FUNCTIONS
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		ClapTrap & operator=(ClapTrap &clp);

		//CONSTRUCTORS
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const &clp);
		virtual ~ClapTrap();
};

#endif