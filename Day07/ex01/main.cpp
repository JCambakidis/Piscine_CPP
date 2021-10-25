#include "inter.hpp"

template<typename T>
void showValue(T val)
{
	std::cout << "Value : " <<val << std::endl;
}

int main()
{
	int array1[5] = {0,1,2,3,4};
	std::string array2[3] = {"coucou", "oui", "moi"};

	inter(array1, 5, showValue);
	inter(array2, 3, showValue);
	
	return 0;
}
