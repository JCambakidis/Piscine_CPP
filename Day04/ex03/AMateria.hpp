#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &instance);
		AMateria &operator=(AMateria const &rhs);
		virtual ~AMateria(void);

		std::string getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

#endif