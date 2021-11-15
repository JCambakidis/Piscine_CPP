#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <algorithm>
#include <list>

class Span
{
	class ListFullException : public std::exception
	{
		public:
			ListFullException() throw();
			virtual ~ListFullException() throw();
			virtual const char* what() const throw();
	};

	class NoNumberException : public std::exception
	{
		public:
			NoNumberException() throw();
			virtual ~NoNumberException() throw();
			virtual const char* what() const throw();
	};

	class OneValueException : public std::exception
	{
		public:
			OneValueException() throw();
			virtual ~OneValueException() throw();
			virtual const char* what() const throw();
	};

	private:
		std::list<int> _lst;
		unsigned int _N;
	public:
		Span();
		Span(unsigned int n);
		~Span();
		void addNumber(int n);
		int shortestSpan() const;
		int longestSpan() const;
};

#endif