//friend function and class

#include <iostream>

using namespace std;

//class B;
class A;

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a);
	//{
	//	cout << a.m_value << endl;
	//}

	//friend void doSomething(A& a, B& b);
};

class A
{
private:
	int m_value = 1;
	
	//friend class B;
	//friend void doSomething(A& a, B& b); // B is not declared yet, so use forward declaration!
	friend void B::doSomething(A& a);
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}

//void doSomething(A &a, B &b)
//{
//	cout << a.m_value << " " << b.m_value << endl;
//}

int main()
{
	A a;
	B b;
	//doSomething(a, b);
	b.doSomething(a);



	return 0;
}