// this pointer and Chaining Member Functions
#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		//this->setID(id);
		//(*this).setID(this, id);
		//this->m_id;
		setID(id);

		cout << this << endl;
	}

	//void setID(Simple* stu, const int& id) { m_id = id; }
	void setID(const int& id) { m_id = id; }
	int getID() { return m_id; }
};

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		:m_value(init_value)
	{}

	//void add(int value) { m_value += value; }
	//void sub(int value) { m_value -= value; }
	//void mult(int value) { m_value *= value; }
	//void print() { cout << m_value << endl; }
	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }
	Calc& print() { cout << m_value << endl; return *this; }
	//void getval() { cout << m_value << endl; }
};

int main()
{
	Calc cal(10);
	//cal.add(10);
	//cal.sub(1);
	//cal.mult(2);
	//cal.print();
	cout << &cal << endl;
	Calc &temp1 = cal.add(10);
	cout << &temp1 << endl;
	temp1.print();
	Calc &temp2 = temp1.sub(1);
	cout << &temp2 << endl;
	temp2.print();
	Calc &temp3 = temp2.mult(2);
	cout << &temp3 << endl;
	temp3.print();
	cal.add(10).sub(1).mult(2).print();
	cal.print();
	




	//Simple s1(1), s2(2);
	////s1.setID(&s1, 4);
	////s2.setID(&s2, 5);
	//s1.setID(4);
	//s2.setID(5);


	//cout << s1.getID() << " " << s2.getID() << endl;
	//cout << &s1 << " " << &s2 << endl;
	////Simple::setID(&s2, 4) == s2.setID(4);

	return 0;
}