// anonymous
#include <iostream>

using namespace std;

class A
{
public:
	int m_value;
	
	A(const int& input)
		:m_value(input)
	{
		cout << "constructor" << endl;
	}

	~A()
	{
		cout << "destructor" << endl;
	}
	void print()
	{
		cout << "Hello" << endl;
	}

	void printm()
	{
		cout << m_value << endl;
	}

	void printDouble()
	{
		cout << 2*m_value << endl;
	}
};

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }

};

Cents add(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());

}

int main()
{
	cout << add(Cents(8), Cents(5)).getCents() << endl;
	cout << int(6) + int(8) << endl;







	//A a(1);
	////a.printm();
	//a.printDouble();
	//A(3).printDouble();


	//A().print();
	//A().print(); different address/// construct and destruct right after the function

	return 0;
}