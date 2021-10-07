#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	public:
		void whoAmI();

		void attack(std::string const & target);
		
		DiamondTrap(std::string const & name);
		DiamondTrap();
		~DiamondTrap();
};

#endif