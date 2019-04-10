#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived :public Base
{
public:
	Derived()
	{
		Base::m_public = 123;
		Base::m_protected = 0;
		//Base::m_private = 124;
	}
};

class Grandchild : protected Derived
{
public:
	Grandchild()
	{
		Derived::m_public = 5;
		Derived::m_protected = 0;
	}
};

int main()
{
	Base base;

	base.m_public = 123;
	//base.m_protected = 234;
	//base.m_private = 345;

	Derived base2;

	base2.m_public;

	Grandchild base3;

	//base3.m_public;
	//base.m_protected = 23; // not accessible
	//base.m_pirvate = 143;

	return 0;
}