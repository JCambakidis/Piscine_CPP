#include "Form.hpp"

Form::Form(void)
{
	
}

Form::Form(std::string name, std::string target, int gradeSign, int gradeExec): _name(name), _target(target), _signed(false)
{
	if (gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150)
		throw GradeTooLowException();
	else
		_gradeSign = gradeSign;

	if (gradeExec < 1)
		throw GradeTooHighException();
	else if (gradeExec > 150)
		throw GradeTooLowException();
	else
		_gradeExec = gradeExec;
}

Form::Form(Form const &instance): _name(instance._name), _target(instance._target), _signed(instance._signed)
{
	_signed = instance._signed;
	if (instance._gradeSign < 1)
		throw GradeTooHighException();
	else if (instance._gradeSign > 150)
		throw GradeTooLowException();
	else
		_gradeSign = instance._gradeSign;

	if (instance._gradeExec < 1)
		throw GradeTooHighException();
	else if (instance._gradeExec > 150)
		throw GradeTooLowException();
	else
		_gradeExec = instance._gradeExec;
}

Form::~Form(void)
{
	
}

Form &	Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_target = rhs._target;
		_signed = rhs._signed;
		if (rhs._gradeSign < 1)
			throw GradeTooHighException();
		else if (rhs._gradeSign > 150)
			throw GradeTooLowException();
		else
			_gradeSign = rhs._gradeSign;
		if (rhs._gradeExec < 1)
			throw GradeTooHighException();
		else if (rhs._gradeExec > 150)
			throw GradeTooLowException();
		else
			_gradeExec = rhs._gradeExec;
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

int	Form::getGradeExec() const
{
	return _gradeExec;
}

std::string Form::getTarget() const
{
	return _target;
}

void		Form::setTarget(std::string target)
{
	_target = target;
}

bool	Form::isSigned() const
{
	return _signed;
}

void	Form::setName(std::string name)
{
	_name = name;
}

void	Form::setGradeSign(int grade)
{
	_gradeSign = grade;
}

void	Form::setGradeExec(int grade)
{
	_gradeExec = grade;
}

void	Form::setIsSigned(bool isSigned)
{
	_signed = isSigned;
}

void	Form::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " try to execute " << getName() << std::endl;
	if (executor.getGrade() > getGradeExec())
		throw GradeTooLowException();
	if (!_signed)
		throw FormNotSignedException();
}

std::ostream &	operator<<(std::ostream &param, const Form &form)
{
	param << "The form " << form.getName() << " need grade " << form.getGradeSign() << " to be signed and " << form.getGradeExec() << " to be executed";
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

Form::FormNotSignedException::FormNotSignedException() throw(){}
Form::FormNotSignedException::FormNotSignedException(const FormNotSignedException &gtle) throw()
{
	*this = gtle;
}
Form::FormNotSignedException &Form::FormNotSignedException::FormNotSignedException::operator=(const FormNotSignedException &rhs) throw()
{
	(void) rhs;
	return *this;
}
Form::FormNotSignedException::~FormNotSignedException() throw(){}

const char* Form::FormNotSignedException::what() const throw()
{
	return "File not signed !\n";
}