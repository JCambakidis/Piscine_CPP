#ifndef DOG_H
# define DOG_H

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : virtual public Animal
{
private:
	Brain* _br;
public:
	virtual void makeSound() const;
	Dog(/* args */);
	Dog(Dog const &dogi);
	~Dog();
};

#endif