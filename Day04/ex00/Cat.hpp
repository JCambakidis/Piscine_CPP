#ifndef CAT_H
# define CAT_H

#include"Animal.hpp"

class Cat : virtual public Animal
{
private:
	/* data */
public:
	virtual void makeSound() const;
	Cat(/* args */);
	~Cat();
};

#endif