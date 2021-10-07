#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		/* data */
	public:
		void guardGate();

		ScavTrap(std::string const & name);
		ScavTrap();
		~ScavTrap();
};

#endif