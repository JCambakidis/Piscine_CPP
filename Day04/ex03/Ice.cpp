#include "Ice.hpp"

Ice::Ice(std::string const & type): AMateria(type)
{

}

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(Ice const &instance)
{
	*this = instance;
}

Ice & Ice::operator=(Ice const &rhs)
{
	_type = rhs.getType();
	return *this;
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice(getType());
	return ice;
}

Ice::~Ice(void)
{

}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
