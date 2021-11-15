#include "Span.hpp"

int main()
{
	Span *sp = new Span(6);


	try
	{
		sp->shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sp->addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sp->longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp->addNumber(15);
		sp->addNumber(8);
		sp->addNumber(12);
		sp->addNumber(25);
		sp->addNumber(-6);
		sp->addNumber(45);
		sp->addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << sp->longestSpan() << " : " << sp->shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	Span sp2 = Span(5);
	sp2.addNumber(5);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	
	return 0;
}
