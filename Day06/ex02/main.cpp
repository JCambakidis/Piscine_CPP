#include "Base.hpp"

int main()
{
	Base *b1 = generate();
	identity(b1);
	identity(*b1);
	
	std::cout << "------------------------------------------" << std::endl;
	Base *b2 = new A();
	identity(b2);
	identity(*b2);

	std::cout << "------------------------------------------" << std::endl;
	Base *b3 = new B();
	identity(b3);
	identity(*b3);

	std::cout << "------------------------------------------" << std::endl;
	Base *b4 = new C();
	identity(b4);
	identity(*b4);

	return 0;
}
