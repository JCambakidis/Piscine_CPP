#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
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

	class FormNotSignedException : public std::exception
	{
		public:
			FormNotSignedException() throw();
			FormNotSignedException(const FormNotSignedException&) throw();
			FormNotSignedException &operator=(const FormNotSignedException&) throw();
			virtual ~FormNotSignedException() throw();
			virtual const char* what() const throw();
	};

	public:
		Form(void);
		Form(std::string name, std::string target, int gradeSign, int gradeExec);
		Form(Form const &instance);
		Form &operator=(Form const &rhs);
		virtual ~Form(void);
		void beSigned(Bureaucrat &bur);

		virtual void execute(Bureaucrat const & executor) const = 0;

		std::string getName() const;
		std::string getTarget() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		bool		isSigned() const;

		void		setTarget(std::string target);
		void		setName(std::string name);
		void		setGradeSign(int grade);
		void		setGradeExec(int grade);
		void		setIsSigned(bool isSigned);

	private:
		std::string _name;
		std::string _target;
		int			_gradeSign;
		int			_gradeExec;
		bool		_signed;

};

std::ostream &operator<<(std::ostream &param, const Form &form);

#endif