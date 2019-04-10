// static member function
#include <iostream>

using namespace std;

class Something
{
	class _init
	{
	public:
		_init()
		{
			s_value = 1234;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:

	Something()
		//:s_value(103), m_value(520) // static variable cannot be initialized here // use inner class
	{}
	static int getValue()
	{
		//return this->s_value; // this cannot be used in the static function
		//return m_value; // all kinds of data with this pointer cannot be accessed
		return s_value;
	}

	int temp()
	{
		return this->s_value + this->m_value; // it can only work for the instance. because it belongs to the instances.
		// you can omit 'this'
	}
};

int Something::s_value = 1024;
Something::_init Something::s_initializer; // procedure: Something::s_value get the address first(permanent) -> _init class
											// change the value of s_value with the constructor in the permanent address

int main()
{
	cout << Something::getValue() << endl;

	Something s1 ,s2;
	cout << s1.getValue() << endl;
	//cout << st1.s_value << endl;
	
	//int (Something::*fptr1)() = s1.temp; // not working because function is not generated all the time for an instance
	//int (Something::*fptr1)() = &(s1.temp); // only one address for a function

	int (Something::*fptr1)() = &Something::temp; // member function's pointer
	
	cout << (s2.*fptr1)() << endl;

	int (*fptr2)() = &Something::getValue; // static function is independent of instances

	cout << fptr2() << endl;

	//cout << (*fptr1)() << endl; // not working, it can only work for the instance

	return 0;
}