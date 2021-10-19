#include "Convertion.hpp"

Convertion::Convertion(void)
{
	
}

Convertion::Convertion(Convertion const &instance)
{
	*this = instance;
}

Convertion::~Convertion(void)
{
	
}

Convertion &	Convertion::operator=(Convertion const &rhs)
{
	static_cast <void> (&rhs);
	return *this;
}

char	Convertion::to_char(double d)
{
	char res;

	if (std::isnan(d))
		throw ImpossibleException();
	res = static_cast<char>(d);
	if (!std::isprint(res))
		throw NonDisplayableException();
	return res;
}

int	Convertion::to_int(double d)
{
	if (std::isnan(d) || std::isinf(d))
		throw ImpossibleException();
	if (d > static_cast <double> (INT_MAX) || d < static_cast <double> (INT_MIN))
		throw ImpossibleException();
	return static_cast <int> (d);
}

float	Convertion::to_float(double d)
{
	if (std::isinf(d))
		throw ImpossibleException();
	return static_cast <float> (d);
}

double	Convertion::to_double(double d)
{
	if (std::isinf(d))
		throw ImpossibleException();
	return d;
}

Convertion::NonDisplayableException::NonDisplayableException() throw(){}

Convertion::NonDisplayableException::~NonDisplayableException() throw(){}

const char* Convertion::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}

Convertion::ImpossibleException::ImpossibleException() throw(){}

Convertion::ImpossibleException::~ImpossibleException() throw(){}

const char* Convertion::ImpossibleException::what() const throw()
{
	return "impossible";
}