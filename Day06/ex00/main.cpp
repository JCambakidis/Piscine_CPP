#include <iostream>
#include "Convertion.hpp"
#include "checker.h"

int main(int argc, char const *argv[])
{
	Convertion *conv = new Convertion();

	if (argc == 2)
	{
		double		n = atof(argv[1]);
		checkChar(*conv, n);
		checkInt(*conv, n);
		checkFloat(*conv, n, getPrecision(argv[1]));
		checkDouble(*conv, n, getPrecision(argv[1]));
	}
	return 0;
}
