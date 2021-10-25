#include "Array.hpp"

int main()
{
	Array<int> a(5);
	Array<char> b(10);

	for (size_t i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << "test : " << a[i] << std::endl;
	}

	for (size_t i = 0; i < b.size(); i++)
	{
		b[i] = 'a';
	}
	
	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;

	std::cout << "---" << std::endl;

	Array<int> intR;

	Array<int> intRR(5);
	intR = intRR;
	for (size_t i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
	for (size_t i = 0; i < intRR.size(); i++)
	{
		std::cout << intRR[i] << " ";
	}
	std::cout << std::endl;

	Array<float> floatR(25);
	for (size_t i = 0; i < floatR.size(); i++)
	{
		floatR[i] = i + 0.5f;
		std::cout << floatR[i] << "f ";
	}
	std::cout << std::endl;

	Array<double> doubleR(25);
	for (size_t i = 0; i < doubleR.size(); i++)
	{
		std::cout << doubleR[i] << " ";
	}
	std::cout << std::endl;

	Array<std::string> stringR(5);
	for (size_t i = 0; i < stringR.size(); i++)
	{
		stringR[i] = std::to_string(i);
		std::cout << stringR[i] << "s ";
	}
	std::cout << std::endl;

	Array<std::string> stringRR = stringR;
	for (size_t i = 0; i < 5; i++)
		stringRR[i] = "42";
	for (size_t i = 0; i < stringR.size(); i++)
		std::cout << stringR[i] << "s <> " << stringRR[i] << std::endl;

	std::cout << "---" << std::endl;
	
	return 0;
}
