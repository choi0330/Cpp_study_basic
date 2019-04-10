// Inherited Functions hiding
#include <iostream>

using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value = 0)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm base " << endl;
		cout << m_i << endl;
	}

	friend ostream & operator << (ostream & out, const Base & base)
	{
		out << "This is base output" << endl;
		return out;
	}
};

class Derived :public Base
{
private:
	double m_d;
	//using Base::print; // do not add ()
	//void print() = delete;

public:
	Derived(int value)
		:Base(value)
	{}

	//void print()
	//{
	//	Base::print();
	//	cout << "I'm Derived" << endl;

	//	//print(); // no
	//}

	using Base::m_i;

	friend ostream & operator << (ostream & out, const Derived & derived)
	{
		out << static_cast<Base>(derived);
		out << "This is derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	base.print();

	Derived derived(7);

	derived.m_i = 10;
	derived.print();

	return 0;
}