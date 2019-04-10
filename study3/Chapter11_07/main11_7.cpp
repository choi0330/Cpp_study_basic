// Inherited Functions overriding
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
public:
	Derived(int value)
		:Base(value)
	{}
	
	void print()
	{
		Base::print();
		cout << "I'm Derived" << endl;

		//print(); // no
	}

	friend ostream & operator << (ostream & out, const Derived & derived)
	{
		out << static_cast<Base>(derived);
		out << "This is derived output" << endl;
		return out;
	}
};

int main()
{
//	Base base(5);
//	//base.print();
//	cout << base;

	Derived derived(7);
	//derived.print();
	cout << derived;

	return 0;
}