#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("Default", "Default", 1, 1)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, target, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &instance)
{
	setTarget(instance.getTarget());
	setGradeSign(instance.getGradeSign());
	setGradeExec(instance.getGradeExec());
	setIsSigned(instance.isSigned());
	setName(instance.getName());
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	if (rand() & 1)
		std::cout << getName() << " has been robotised !!" << std::endl;
	else
		std::cout << getName() << ": Robotisation fail !!" << std::endl;

}