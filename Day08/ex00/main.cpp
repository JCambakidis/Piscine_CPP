#include "easyfind.hpp"

int main(int ac, char** av)
{
	if (ac == 2)
	{
		std::list<int> lst;

		lst.push_back(1);
		lst.push_back(4);
		lst.push_back(8);
		lst.push_back(45);

		try
		{
			easyfind<std::list<int> >(lst, atoi(av[1]));
		}
		catch(std::string str)
		{
			std::cerr << str << '\n';
		}
	}
	return 0;
}
