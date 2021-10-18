#include "Intern.hpp"

Intern::Intern(void)
{
	_requests[0] = "shrubbery creation";
	_requests[1] = "presidential pardon";
	_requests[2] = "robotomy request";

	_functions[0] = &Intern::_createShrubberyForm;
	_functions[1] = &Intern::_createPresidentialForm;
	_functions[2] = &Intern::_createRobotomyForm;
}

Intern::Intern(Intern const &instance)
{
	*this = instance;
}

Intern::~Intern(void)
{
	
}

Intern &	Intern::operator=(Intern const &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

Form*	Intern::makeForm(std::string form_Name, std::string form_Target)
{
	try
	{
		return _findForm(form_Name, form_Target);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}
	return NULL;
}

Form*	Intern::_findForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == _requests[i])
			return (this->*_functions[i])(target);
	}
	throw NoFormFoundException();
	return NULL;
}

Form* Intern::_createShrubberyForm(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::_createRobotomyForm(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return form;
}

Form* Intern::_createPresidentialForm(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return form;
}

Intern::NoFormFoundException::NoFormFoundException() throw(){}
Intern::NoFormFoundException::NoFormFoundException(const NoFormFoundException &gthe) throw()
{
	*this = gthe;
}
Intern::NoFormFoundException &Intern::NoFormFoundException::NoFormFoundException::operator=(const NoFormFoundException &rhs) throw()
{
	(void) rhs;
	return *this;
}
Intern::NoFormFoundException::~NoFormFoundException() throw(){}

const char* Intern::NoFormFoundException::what() const throw()
{
	return "No Form Found !\n";
}