#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat *bur = new Bureaucrat("Phillipe", 150);
	try
	{
		for (int i = 0; i < 151; i++)
		{
			bur->incrGrade();
			std::cout << *bur << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "___________________________________________________" << std::endl << std::endl;

	try
	{
		for (int i = 0; i < 151; i++)
		{
			bur->decrGrade();
			std::cout << *bur << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "___________________________________________________" << std::endl << std::endl;

	try
	{
		Bureaucrat *rub = new Bureaucrat("Jean", 151);
		rub->getGrade();
		delete rub;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "___________________________________________________" << std::endl << std::endl;
	
	try
	{
		Bureaucrat *rubur = new Bureaucrat("Colin", 0);
		rubur->getGrade();
		delete rubur;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete bur;

	return 0;
}
