#include "Form.hpp"

Form::Form(void)
{
	
}

Form::Form(std::string name, int grade): _name(name), _signed(false)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_gradeSign = grade;
}

Form::Form(Form const &instance): _name(instance._name), _signed(instance._signed)
{
	_signed = instance._signed;
	if (instance._gradeSign < 1)
		throw GradeTooHighException();
	else if (instance._gradeSign > 150)
		throw GradeTooLowException();
	else
		_gradeSign = instance._gradeSign;
}

Form::~Form(void)
{
	
}

Form &	Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_signed = rhs._signed;
		if (rhs._gradeSign < 1)
			throw GradeTooHighException();
		else if (rhs._gradeSign > 150)
			throw GradeTooLowException();
		else
			_gradeSign = rhs._gradeSign;
	}
	return *this;
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeSign)
		throw GradeTooLowException();
	else
		_signed = true;
}

std::string	Form::getName() const
{
	return _name;
}

int	Form::getGradeSign() const
{
	return _gradeSign;
}

bool	Form::isSigned() const
{
	return _signed;
}

std::ostream &	operator<<(std::ostream &param, const Form &form)
{
	param << "The form " << form.getName() << " need grade " << form.getGradeSign() << " to be signed";
	if (form.isSigned())
		param << ", form are signed !" << std::endl;
	else
		param << ", form are not signed !" << std::endl;
	return param;
}

/**
*	Exceptions
*/

Form::GradeTooHighException::GradeTooHighException() throw(){}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &gthe) throw()
{
	*this = gthe;
}
Form::GradeTooHighException &Form::GradeTooHighException::GradeTooHighException::operator=(const GradeTooHighException &rhs) throw()
{
	(void) rhs;
	return *this;
}
Form::GradeTooHighException::~GradeTooHighException() throw(){}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High !\n";
}

Form::GradeTooLowException::GradeTooLowException() throw(){}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &gtle) throw()
{
	*this = gtle;
}
Form::GradeTooLowException &Form::GradeTooLowException::GradeTooLowException::operator=(const GradeTooLowException &rhs) throw()
{
	(void) rhs;
	return *this;
}
Form::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low !\n";
}