#ifndef INTER_H
# define INTER_H

#include <iostream>

template <typename T>
void	inter(T *array, int length, void (*f) (T const &))
{
	if (array)
	{
		for (int i = 0; i < length; i++)
		{
			f(array[i]);
		}
	}
	
}

#endif