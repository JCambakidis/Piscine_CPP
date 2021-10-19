#include <cstdint>
#include <cassert>
#include <iostream>

struct Data
{
	std::string s1;
	std::string s2;
	int			n;	
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *data = new Data;

	data->s1 = "Hello toi, ";
	data->s2 = "comment tu vas ? ";
	data->n	= 42;

	std::cout << data << std::endl;

	uintptr_t ser = serialize(data);

	std::cout << ser << std::endl;

	Data *dem = deserialize(ser);

	std::cout << dem << std::endl;

	std::cout << dem->s1 << dem->s2 << dem->n << std::endl;

	return 0;
}
