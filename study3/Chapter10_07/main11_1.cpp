// Inheritance
#include <iostream>
using namespace std;

class Mother //generalized class
{
private:
//protected:
	int m_i;

public:
	Mother()
		:m_i(0)
	{}

	Mother(const int & i_in)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother // derived class
{
private:
	double m_d;

public:
	Child ()
	{}

	Child(const int & i_in, const double & d_in)
		: Mother(i_in), m_d(d_in)
	{
		//Mother::setValue(i_in);
	}

	void setValue(const int & i_in, const double & d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

class Daughter : public Mother
{

};

class Son : public Mother
{

};

int main()
{
	Mother mother(5);
	mother.setValue(1024);
	cout << mother.getValue() << endl;

	Child child(5, 23.7);
	Child child2;
	//child.Mother::setValue(1023);
	//child.setValue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}