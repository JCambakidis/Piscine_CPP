#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	std::cout << "** ShrubberyCreationForm Test **" << std::endl;
	std::cout << "--------------------------------" << std::endl << std::endl;

	Bureaucrat *bur = new Bureaucrat("Phillipe", 150);
	Bureaucrat *bur2 = new Bureaucrat("Colin", 145);
	Bureaucrat *bur3 = new Bureaucrat("Jean", 120);
	Form *form = new ShrubberyCreationForm("home");

	bur->executeForm(*form);

	bur->signForm(*form);

	bur->executeForm(*form);

	std::cout << "___________________________________" << std::endl << std::endl;


	std::cout << *form << std::endl;

	bur2->executeForm(*form);

	bur3->executeForm(*form);

	bur2->signForm(*form);

	bur2->executeForm(*form);

	std::cout << "___________________________________" << std::endl << std::endl;


	std::cout << *form << std::endl;

	bur3->executeForm(*form);

	delete bur;
	delete bur2;
	delete bur3;
	delete form;

	std::cout << std::endl << std::endl << "** RobotomyRequestForm Test **" << std::endl;
	std::cout << "--------------------------------" << std::endl << std::endl;

	bur = new Bureaucrat("Phillipe", 150);
	bur2 = new Bureaucrat("Colin", 72);
	bur3 = new Bureaucrat("Jean", 45);
	form = new RobotomyRequestForm("robot");

	bur->executeForm(*form);

	bur->signForm(*form);

	bur->executeForm(*form);

	std::cout << "___________________________________" << std::endl << std::endl;


	std::cout << *form << std::endl;

	bur2->executeForm(*form);

	bur3->executeForm(*form);

	bur2->signForm(*form);

	bur2->executeForm(*form);

	std::cout << "___________________________________" << std::endl << std::endl;


	std::cout << *form << std::endl;

	bur3->executeForm(*form);

	delete bur;
	delete bur2;
	delete bur3;
	delete form;

	std::cout << std::endl << std::endl << "** PresidentialPardonForm Test **" << std::endl;
	std::cout << "--------------------------------" << std::endl << std::endl;

	bur = new Bureaucrat("Phillipe", 150);
	bur2 = new Bureaucrat("Colin", 25);
	bur3 = new Bureaucrat("Jean", 5);
	form = new PresidentialPardonForm("presidential");

	bur->executeForm(*form);

	bur->signForm(*form);

	bur->executeForm(*form);

	std::cout << "___________________________________" << std::endl << std::endl;


	std::cout << *form << std::endl;

	bur2->executeForm(*form);

	bur3->executeForm(*form);

	bur2->signForm(*form);

	bur2->executeForm(*form);

	std::cout << "___________________________________" << std::endl << std::endl;


	std::cout << *form << std::endl;

	bur3->executeForm(*form);

	delete bur;
	delete bur2;
	delete bur3;
	delete form;

	return 0;
}
