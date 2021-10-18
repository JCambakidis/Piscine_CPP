#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	Bureaucrat *bur = new Bureaucrat("Phillipe", 50);
	Form *form;
	try
	{
		form = new Form("Oulala", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		form = new Form("AAAAAA", 15);
	}
	
	bur->signForm(*form);

	Bureaucrat *bur2 = new Bureaucrat("Colin", 10);

	std::cout << *form << std::endl;

	bur2->signForm(*form);

	std::cout << *form << std::endl;
	

	delete bur;
	delete bur2;
	delete form;

	return 0;
}
