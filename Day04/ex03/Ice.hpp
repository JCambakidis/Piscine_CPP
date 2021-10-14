#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public virtual AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const &instance);
		Ice &operator=(Ice const &rhs);
		~Ice(void);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);

	private:

};

#endif