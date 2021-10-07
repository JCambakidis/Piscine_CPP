#include <iostream>
#include <iomanip>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string    Memory: " << &string << std::endl;
	std::cout << "stringREF Memory: " << &stringREF << std::endl;
	std::cout << "stringPTR Memory: " << &stringPTR << std::endl;
	std::cout << "__________________________________" << std::endl << std::endl;
	std::cout << "string    Content: " << string << std::endl;
	std::cout << "stringREF Content: " << stringREF << std::endl;
	std::cout << "stringPTR Content: " << *stringPTR << std::endl;

	return 0;
}
