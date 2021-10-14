#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource
{
	private:
		AMateria *_materia[4];
	public:
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		MateriaSource &operator=(MateriaSource const &mat);
		MateriaSource(const MateriaSource &mat);
		MateriaSource();
		~MateriaSource();
};

#endif