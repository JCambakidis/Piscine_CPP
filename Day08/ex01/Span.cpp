#include "Span.hpp"

Span::Span():_N(0){}

Span::Span(unsigned int n): _N(n){}

Span::~Span(){}

void Span::addNumber(int n)
{
	if (_lst.size() < _N)
		_lst.push_back(n);
	else
		throw Span::ListFullException();
}

int Span::shortestSpan() const
{
	std::list<int> tmp = _lst;
	tmp.sort();
	if (_lst.size() == 0)
		throw Span::NoNumberException();
	if (_lst.size() == 1)
		throw Span::OneValueException();

	std::list<int>::const_iterator it = tmp.begin();
	it++;
	size_t	shorttmp = *it;
	size_t	shortest;
	it++;
	shorttmp = *it - shorttmp;
	shortest = shorttmp;

	for (size_t i = 0; i < tmp.size(); i++)
	{
		shorttmp = *it;
		it++;
		shorttmp = *it - shorttmp;
		if (shorttmp < shortest)
			shortest = shorttmp;
	}
	
	return shortest;
}

int Span::longestSpan() const
{
	std::list<int> tmp = _lst;
	tmp.sort();
	
	if (_lst.size() == 0)
		throw Span::NoNumberException();
	if (_lst.size() == 1)
		throw Span::OneValueException();
	std::list<int>::const_iterator it_begin = tmp.begin();
	std::list<int>::const_iterator it_end = tmp.begin();
	for (size_t i = 0; i < tmp.size() - 1; i++)
		it_end++;
	return *it_end - *it_begin;
}

/*
** Exceptions
*/

Span::OneValueException::OneValueException() throw() {}
Span::OneValueException::~OneValueException() throw() {}
const char* Span::OneValueException::what() const throw()
{
	return "No value to find: Only one value in list!\n";
}

Span::NoNumberException::NoNumberException() throw() {}
Span::NoNumberException::~NoNumberException() throw() {}
const char* Span::NoNumberException::what() const throw()
{
	return "No value to find: No value in list !\n";
}

Span::ListFullException::ListFullException() throw() {}
Span::ListFullException::~ListFullException() throw() {}
const char* Span::ListFullException::what() const throw()
{
	return "List full !\n";
}