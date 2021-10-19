#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base(void);
	private:

};

Base::~Base(){}

class A : public Base
{
	public:
		A();
		virtual ~A();
};

A::A(){}
A::~A(){}

class B : public Base
{
	public:
		B();
		virtual ~B();
};

B::B(){}
B::~B(){}

class C : public Base
{
	public:
		C();
		virtual ~C();
};

C::C(){}
C::~C(){}

Base * generate(void)
{
	srand (time(NULL));
	int classIndex = rand() % 3 + 1;
	Base *res;

	switch (classIndex)
	{
		case 1:
			res = new A();
			break;
		case 2:
			res = new B();
			break;
		case 3:
			res = new C();
			break;
		default:
			res = new A();
			break;
	}
	return res;
}

void	identity(Base *p)
{
	A* a = dynamic_cast<A *>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	} 
	B* b = dynamic_cast<B *>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	} 
	C* c = dynamic_cast<C *>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "Error" << std::endl;
}

void	identity(Base & p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);	
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch(std::bad_cast &bc)
	{
		
	}

	try
	{
		B &b = dynamic_cast<B&>(p);	
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	}
	catch(std::bad_cast &bc)
	{
		
	}

	try
	{
		C &c = dynamic_cast<C&>(p);	
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch(std::bad_cast &bc)
	{
		
	}
}


#endif