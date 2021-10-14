#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public virtual ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const &instance);
		Character &operator=(Character const &rhs);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	private:
		std::string _name;
		AMateria *_matTab[4];
		int _materiaCount;
};

#endif