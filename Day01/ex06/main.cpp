#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen *karen = new Karen;

	if (argc != 2)
		return 0;
	karen->complain((std::string)argv[1]);
	return 0;
}