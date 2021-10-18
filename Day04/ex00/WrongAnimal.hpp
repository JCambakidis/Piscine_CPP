#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
private:
	/* data */
public:
	std::string getType() const;

	void makeSound() const;
	WrongAnimal();
	WrongAnimal(std::string type);
	~WrongAnimal();
protected:
	std::string _type;
};

#endif