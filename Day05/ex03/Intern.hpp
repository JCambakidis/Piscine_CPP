#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

	class NoFormFoundException : public std::exception
	{
		public:
			NoFormFoundException() throw();
			NoFormFoundException(const NoFormFoundException&) throw();
			NoFormFoundException &operator=(const NoFormFoundException&) throw();
			virtual ~NoFormFoundException() throw();
			virtual const char* what() const throw();
	};

	public:
		Intern(void);
		Intern(Intern const &instance);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
		Form* makeForm(std::string form_Name, std::string form_Target);

		typedef Form* (Intern::*InternF) (std::string target);

	private:
		std::string			_requests[3];
		InternF 			_functions[3];
		Form* 	_createShrubberyForm(std::string target);
		Form* 	_createRobotomyForm(std::string target);
		Form* 	_createPresidentialForm(std::string target);
		Form*	_findForm(std::string name, std::string target);

};

#endif