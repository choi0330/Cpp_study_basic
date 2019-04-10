// Derived class
#include <iostream>

using namespace std;

class Mother
{
protected:
	int m_i;

	Mother(const int & i_in = 0)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		: m_d(1.0), Mother(1024) // order doesn't matter
	{
		//m_i = 1024;
		cout << "Child constructor" << endl;
		/*this->m_i = 10;
		this->Mother::m_i = 1024;*/
	}
};

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

int main()
{
	C c;

	Child c1;

	return 0;
}