#ifndef CONVERTION_HPP
# define CONVERTION_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <string>

class Convertion
{

	class ImpossibleException : public std::exception
	{
		public:
			ImpossibleException(/* args */) throw();
			virtual ~ImpossibleException() throw();
			virtual const char* what() const throw();
	};

	class NonDisplayableException : public std::exception
	{
		public:
			NonDisplayableException(/* args */) throw();
			virtual ~NonDisplayableException() throw();
			virtual const char* what() const throw();
	};

	public:
		Convertion(void);
		Convertion(Convertion const &instance);
		Convertion &operator=(Convertion const &rhs);
		~Convertion(void);

		char	to_char(double d);
		int		to_int(double d);
		float	to_float(double d);
		double	to_double(double d);

	private:

};

#endif