// derived class initialization

#include <iostream>

using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int & i_in = 0)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
};

class Child : public Mother
{
private:
	double m_d;
	int m_temp;

public:
	Child()
		: m_d(1.2), Mother(5)
	{
		cout << "Child constructor" << endl;
	}
};

class A
{
public:
	A(int a)
	{
		cout << "A : " << a << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		:A(a)
	{
		cout << "B : " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		:B(a,b)
	{
		cout << "C : " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}
};

int main()
{
	C c(1024, 3.14, 'a');

	/*Child c1;
	
	cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;
*/
	return 0;
}