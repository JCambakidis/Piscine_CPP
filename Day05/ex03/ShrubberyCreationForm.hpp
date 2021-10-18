#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &instance);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		virtual ~ShrubberyCreationForm(void);
		virtual void execute(Bureaucrat const & executor) const;
	private:

};

#endif