#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public virtual AMateria
{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const &instance);
		Cure &operator=(Cure const &rhs);
		~Cure(void);
		virtual Cure* clone() const;
		void use(ICharacter& target);

	private:

};

#endif