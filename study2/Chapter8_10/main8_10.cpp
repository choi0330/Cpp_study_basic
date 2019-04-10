// Static member variable
#include <iostream>

using namespace std;

int generateID()
{
	static int s_id = 0;
	return ++s_id;
}

class Something
{
public:
	static constexpr int m_value = 1; // in this case, value cannot be changed // constexpr is decided when compiling
	//static int m_value;
};

//int Something::m_value = 1; // define in cpp

int main()
{
	cout << &Something::m_value << " " << Something::m_value << endl;

	Something st1, st2;
	//st1.m_value = 2;

	cout << &st1.m_value << " " << st1.m_value << endl;
	cout << &st2.m_value << " " << st2.m_value << endl;

	//Something::m_value = 100;

	cout << &Something::m_value << " " << Something::m_value << endl;



	/*cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;*/
	
	return 0;
}