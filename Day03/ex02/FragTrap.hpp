#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		void highFivesGuys();

		FragTrap(std::string const & name);
		FragTrap();
		~FragTrap();
};

#endif