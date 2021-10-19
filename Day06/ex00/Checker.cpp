#include "Convertion.hpp"

void	checkChar(Convertion convert, double d)
{
	try
	{
		std::cout << "char: ";
		char res = convert.to_char(d);
		std::cout << "'" << res << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	checkInt(Convertion convert, double d)
{
	try
	{
		std::cout << "int: ";
		std::cout << convert.to_int(d) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	checkFloat(Convertion convert, double d, int precision)
{
	try
	{
		std::cout << "float: ";
		std::cout << std::setprecision(precision) << std::fixed  << convert.to_float(d) << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	checkDouble(Convertion convert, double d, int precision)
{
	try
	{
		std::cout << "double: ";
		std::cout << std::setprecision(precision) << std::fixed << convert.to_double(d) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}