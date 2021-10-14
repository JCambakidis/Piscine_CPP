#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
private:
	/* data */
public:
	std::string getType() const;

	virtual void makeSound() const;
	Animal();
	Animal(std::string type);
	~Animal();
protected:
	std::string _type;
};

#endif