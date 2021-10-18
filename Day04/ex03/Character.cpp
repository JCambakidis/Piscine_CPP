#include "Character.hpp"

Character::Character()
{
	_materiaCount = 0;
	for (int i = 0; i < 4; i++)
		_matTab[i] = 0;
}

Character::Character(std::string name): _name(name)
{
	_materiaCount = 0;
	for (int i = 0; i < 4; i++)
		_matTab[i] = 0;
}

Character::Character(Character const &instance)
{
	*this = instance;
	_materiaCount = instance._materiaCount;
	for (int i = 0; i < 4; i++)
	{
		if (_matTab[i])
			delete _matTab[i];
	}
	for (int i = 0; i < 4; i++)
		_matTab[i] = instance._matTab[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_matTab[i])
			delete _matTab[i];
	}
	
}

Character & Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_materiaCount < 4)
		_matTab[_materiaCount++] = m;
}

void Character::unequip(int idx)
{
	if (_matTab[idx])
		_matTab[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (_matTab[idx])
		_matTab[idx]->use(target);
}