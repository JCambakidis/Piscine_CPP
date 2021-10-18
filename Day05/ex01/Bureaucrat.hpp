#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
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
		std::string getName() const;
		int	getGrade() const;

		void setName(std::string name);
		void incrGrade();
		void decrGrade();

		void signForm(Form &form);

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &instance);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

	private:
		std::string _name;
		int			_grade;

};

std::ostream &operator<<(std::ostream &param, const Bureaucrat &bur);

#endif