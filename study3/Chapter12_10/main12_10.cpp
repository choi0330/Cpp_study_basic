// Dynamic casting
#include <iostream>
#include <string>
using namespace std;

class Base
{
public: 
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1024;
	
	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived2" << endl;
	}
};

int main()
{
	Derived d1;
	Derived2 d2;
	Base *base = &d1;
	d1.m_j = 2048;
	//base->m_j; // not possible

	//auto *base_to_d1 = dynamic_cast<Derived2*>(base); // useful but not recommended
	auto *base_to_d1_2 = static_cast<Derived2*>(base); // always cast

	if (base_to_d1_2 != nullptr)
		//cout << base_to_d1->m_name << endl;
		base_to_d1_2->print();
	else
		cout << "Failed" << endl;



	/*cout << base_to_d1->m_j << endl;
	base_to_d1->m_j = 245;

	cout << d1.m_j << endl;*/

	return 0;

}