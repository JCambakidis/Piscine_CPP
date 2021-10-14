#ifndef CAT_H
# define CAT_H

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : virtual public Animal
{
private:
	Brain* _br;
public:
	virtual void makeSound() const;
	Cat(/* args */);
	Cat(Cat const &cati);
	~Cat();
};

#endif