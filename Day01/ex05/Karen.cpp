#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>  
#include "Karen.hpp"

/*
*	Private functions
*/

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/*
*	Public functions
*/

void Karen::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*_functions_tab[i])();
			return ;
		}
	}
}

/*
*	Constructor functions
*/


Karen::Karen(/* args */)
{
	_functions_tab[0] = &Karen::debug;
	_functions_tab[1] = &Karen::info;
	_functions_tab[2] = &Karen::warning;
	_functions_tab[3] = &Karen::error;
}

Karen::~Karen()
{
}