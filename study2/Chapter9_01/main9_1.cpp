// Arithmetic operator overloading
#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0 ) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int &getCents() { return m_cents; }

	//friend Cents operator + (const Cents &c1, const Cents &c2); // function outside

	// =, [], (), -> : member function only

	friend int operator + (const Cents &c1, const Cents &c2) // not member function
	{
		return Cents(c1.getCents() + c2.getCents()).getCents();
	}

	//Cents operator + (const Cents &c2) // member function
	//{
	//	return Cents(this->m_cents + c2.m_cents);
	//}
};

//void add(const Cents &c1, const Cents &c2, Cents &c_out)
//{
//	c_out.getCents() = c1.getCents() + c2.getCents();
//}

//Cents add(const Cents &c1, const Cents &c2)

//Cents operator + (const Cents &c1, const Cents &c2) // function outside
//{
//	return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
	// ?: , :: , sizeof, . , .* , ^: not possible to overload
	// operator priority is not changed at all

	Cents cents1(5);
	Cents cents2(6);

	//cout << (cents1 + cents2 + Cents(7) + Cents(6)).getCents() << endl;
	cout << cents1 + cents2 + Cents(7) + Cents(6) << endl;

	//Cents sum;
	//Cents sum = add(cents1, cents2);

	//add(cents1, cents2, sum);

	//cout << sum.getCents() << " " << add(cents1, cents2).getCents() << endl;

	// we want this form
	// int i = 6, j = 8; cout << i+j << endl;

	return 0;
}