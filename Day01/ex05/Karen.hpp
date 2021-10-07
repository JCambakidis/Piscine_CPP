#ifndef KAREN_H
# define KAREN_H

#include <iostream>

class Karen
{
private:
	void (Karen::*_functions_tab[4])(void);
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	void complain( std::string level );
	Karen(/* args */);
	~Karen();
};

#endif