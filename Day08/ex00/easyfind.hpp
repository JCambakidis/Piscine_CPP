#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <list>

template <typename T>
void	easyfind(T &container, int n)
{
	typename T::const_iterator it;

	it = std::find(container.begin(), container.end(), n);

	if( it != container.end())
		std::cout << "Value exist !" << std::endl;
	else
		throw (std::string("Value doesn't exist !\n"));
}


#endif