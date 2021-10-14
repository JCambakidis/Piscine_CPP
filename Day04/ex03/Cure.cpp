#include "Cure.hpp"

Cure::Cure(std::string const & type): AMateria(type)
{

}

Cure::Cure(): AMateria("cure")
{

}

Cure::Cure(Cure const &instance)
{
	*this = instance;
}

Cure & Cure::operator=(Cure const &rhs)
{
	_type = rhs.getType();
	return *this;
}

Cure* Cure::clone() const
{
	Cure *cure = new Cure(getType());
	return cure;
}

Cure::~Cure(void)
{

}


void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
