#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Default_shrubbery", "Default", 1, 1)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target.append("_shrubbery"), target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &instance)
{
	setTarget(instance.getTarget());
	setGradeSign(instance.getGradeSign());
	setGradeExec(instance.getGradeExec());
	setIsSigned(instance.isSigned());
	setName(instance.getName());
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	file;
	
	Form::execute(executor);

	file.open(getTarget() + "_shrubbery");
	if (file.fail())
		std::cerr << "Error opening file" << std::endl;

	file << "          1          " << std::endl;
    file << "         / \\         " << std::endl;
    file << "        /   \\        " << std::endl;
    file << "       /     \\       " << std::endl;
    file << "      2       3      " << std::endl;
    file << "     / \\     / \\     " << std::endl;
    file << "    4   5   6   7    " << std::endl;
    file << "   /   / \\     / \\   " << std::endl;
    file << "  8   9   1   2   3  " << std::endl;
    file << "     /               " << std::endl;
    file << "    4                " << std::endl;
    file.close();
}