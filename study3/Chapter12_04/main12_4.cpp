// virtual destructor
#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base" << endl;
	 }
};

class Derived : public Base
{
public:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived() override
	{
		cout << "~Derived" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);


	// memory leak prevention -> virtual
	Derived *derived = new Derived(5);
	Base *base = derived;
	//cout << sizeof(derived->m_array) << endl;
	delete base;

	return 0;
}