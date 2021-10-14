#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	private:
		/* data */
	public:
		std::string getType() const;

		virtual void makeSound() const = 0;
		Animal &operator=(Animal & animal);

		Animal();
		Animal(std::string type);
		Animal(Animal const &animal);
		virtual ~Animal();
	protected:
		std::string _type;
};

#endif