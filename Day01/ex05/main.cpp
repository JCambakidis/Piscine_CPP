#include "Karen.hpp"

int main()
{
	Karen *my_Karen = new Karen;
	int	index;

	std::string test[6] = {"WARNING", "INFO", "", "6asd4ga5sd456fsfds4fva", "DEBUG", "ERROR"};
	for (size_t i = 0; i < 40; i++)
	{
		index = std::rand() % 6;
		std::cout << index << std::endl;
		my_Karen->complain(test[index]);
	}
	
	return 0;
}
