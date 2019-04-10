#include <iostream>

using namespace std;

class Base
{
public:
	int m_value;
protected:
	int m_protected;
private:
	int m_private;

public:
	Base(int i_in)
		:m_value(i_in)
	{}
};

class Derived :public Base
{
public:
	Derived(int value)
		:Base(value)
	{
	}

	void setValue(int value)
	{
		Base::m_value = value;
		// do some work with the variables defined in Derived
	}

};

int main()