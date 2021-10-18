#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Default", "Default", 1, 1)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, target, 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &instance)
{
	setTarget(instance.getTarget());
	setGradeSign(instance.getGradeSign());
	setGradeExec(instance.getGradeExec());
	setIsSigned(instance.isSigned());
	setName(instance.getName());
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		setTarget(rhs.getTarget());
		setGradeSign(rhs.getGradeSign());
		setGradeExec(rhs.getGradeExec());
		setIsSigned(rhs.isSigned());
		setName(rhs.getName());
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Beebkerox." << std::endl;
}