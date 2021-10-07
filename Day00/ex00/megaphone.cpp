#include <iostream>
#include <ctype.h>

char	to_uppercase(char c)
{
	if (isalpha(c) && islower(c))
		c = c - 32;
	return c; 
}

int main(int argc, char const *argv[])
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		int j = -1;
		while (argv[i][++j])
			std::cout << to_uppercase(argv[i][j]);
	}
	std::cout << std::endl;
	return 0;
}