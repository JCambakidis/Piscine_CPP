#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException() throw();
			GradeTooHighException(const GradeTooHighException&) throw();
			GradeTooHighException &operator=(const GradeTooHighException&) throw();
			virtual ~GradeTooHighException() throw();
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException() throw();
			GradeTooLowException(const GradeTooLowException&) throw();
			GradeTooLowException &operator=(const GradeTooLowException&) throw();
			virtual ~GradeTooLowException() throw();
			virtual const char* what() const throw();
	};

	public:
		Form(void);
		Form(std::string name, int grade);
		Form(Form const &instance);
		Form &operator=(Form const &rhs);
		~Form(void);
		void beSigned(Bureaucrat &bur);

		std::string getName() const;
		int			getGradeSign() const;
		bool		isSigned() const;

	private:
		std::string _name;
		int			_gradeSign;
		bool		_signed;

};

std::ostream &operator<<(std::ostream &param, const Form &form);

#endif