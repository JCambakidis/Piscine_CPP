#include "AMateria.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(std::string const & type): _type(type)
{

}

AMateria::AMateria(AMateria const &instance)
{
	*this = instance;
}

std::string AMateria::getType() const
{
	return _type;
}

AMateria & AMateria::operator=(AMateria const &rhs)
{
	_type = rhs.getType();
	return *this;
}

AMateria::~AMateria(void)
{

}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}
