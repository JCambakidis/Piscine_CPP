#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance)
{
	if (instance._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (instance._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = instance._grade;
	_name = instance._name;
}

Bureaucrat::~Bureaucrat(void)
{
	
}

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::setName(std::string name)
{
	_name = name;
}

void	Bureaucrat::incrGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_grade = rhs._grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &param, const Bureaucrat &bur)
{
	param << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return param;
}

/**
*	Exceptions
*/

Bureaucrat::GradeTooHighException::GradeTooHighException() throw(){}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &gthe) throw()
{
	*this = gthe;
}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::GradeTooHighException::operator=(const GradeTooHighException &rhs) throw()
{
	(void) rhs;
	return *this;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High !\n";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw(){}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &gtle) throw()
{
	*this = gtle;
}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::GradeTooLowException::operator=(const GradeTooLowException &rhs) throw()
{
	(void) rhs;
	return *this;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low !\n";
}