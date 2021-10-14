#ifndef DOG_H
# define DOG_H

#include"Animal.hpp"

class Dog : virtual public Animal
{
private:
	/* data */
public:
	virtual void makeSound() const;
	Dog(/* args */);
	~Dog();
};

#endif