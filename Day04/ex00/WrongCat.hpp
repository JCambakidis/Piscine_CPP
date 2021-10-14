#ifndef WRONGCAT_H
# define WRONGCAT_H

#include"WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
private:
	/* data */
public:
	virtual void makeSound() const;
	WrongCat(/* args */);
	~WrongCat();
};

#endif