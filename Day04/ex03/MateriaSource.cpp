#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* mat)
{
	int i = 0;
	while (_materia[i])
		i++;
	if (i < 4)
		_materia[i] = mat;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i]->getType() == type)
			return _materia[i]->clone();
	}
	return 0;
}

MateriaSource::MateriaSource(const MateriaSource &mat)
{
	for (int i = 0; i < 4; i++)
	{
		_materia[i] = mat._materia[i];
	}
	
}

MateriaSource &MateriaSource::operator=(MateriaSource const &mat)
{
	if (&mat == this)
		return *this; 
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (mat._materia[i])
			_materia[i] = mat._materia[i];
		else
			_materia[i] = 0;
	}
	return *this;
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
	
}