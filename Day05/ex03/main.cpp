#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		Intern someIntern;
		Bureaucrat *bur = new Bureaucrat("Phillipe", 150);
		Bureaucrat *bur2 = new Bureaucrat("Colin", 145);
		Bureaucrat *bur3 = new Bureaucrat("Jean", 120);
		Form* f;
		f = someIntern.makeForm(argv[1], argv[2]);

		if (!f)
			return 0;

		std::cout << *f << std::endl;
		
		bur->executeForm(*f);

		bur->signForm(*f);

		bur->executeForm(*f);

		std::cout << "___________________________________" << std::endl << std::endl;


		std::cout << *f << std::endl;

		bur2->executeForm(*f);

		bur3->executeForm(*f);

		bur2->signForm(*f);

		bur2->executeForm(*f);

		std::cout << "___________________________________" << std::endl << std::endl;


		std::cout << *f << std::endl;

		bur3->executeForm(*f);

		delete bur;
		delete bur2;
		delete bur3;
		delete f;

	}
	else if (argc == 1)
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat *bur = new Bureaucrat("Phillipe", 150);
		Bureaucrat *bur2 = new Bureaucrat("Colin", 145);
		Bureaucrat *bur3 = new Bureaucrat("Jean", 120);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		if (!rrf)
			return 0;

		std::cout << *rrf << std::endl;
		
		bur->executeForm(*rrf);

		bur->signForm(*rrf);

		bur->executeForm(*rrf);

		std::cout << "___________________________________" << std::endl << std::endl;


		std::cout << *rrf << std::endl;

		bur2->executeForm(*rrf);

		bur3->executeForm(*rrf);

		bur2->signForm(*rrf);

		bur2->executeForm(*rrf);

		std::cout << "___________________________________" << std::endl << std::endl;


		std::cout << *rrf << std::endl;

		bur3->executeForm(*rrf);

		delete bur;
		delete bur2;
		delete bur3;
		delete rrf;
	}
	return 0;
}

