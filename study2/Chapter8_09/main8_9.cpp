// Class and const

#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 5;
	
	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}
	Something()
	{}

	//void setValue(int value) const { m_value = value; }// not allowed to change
	void setValue(int value) { m_value = value; }// not allowed to change
	int getValue() const
		//int getValue() // not working for const Something
	{
		return m_value; 
	}
};

void print(Something sth) //newly declared
//void print(const Something &sth)
{
	cout << &sth << endl;
	cout << sth.m_value << endl;
}

class Somethin
{
public:
	string m_value = "default";

	const string& getValue() const 
	{
		cout << "const version" << endl;
		return m_value;
	}
	string& getValue() 
	{
		cout << "non-const version" << endl;
		return m_value;
	}
};


int main()
{
	Somethin stn;
	stn.getValue() = "What's your name";
	cout << stn.m_value << endl;

	const Somethin stn2;
	stn2.getValue(); // = "hello" cannot change











	//Something st;
	//const Something smt(st);
	////smt.setValue(3);
	//cout << &smt << endl;
	//cout << smt.getValue() << endl; // access is not allowed
	//print(smt);

	return 0;
}