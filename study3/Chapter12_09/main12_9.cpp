//Object slicing // reference_wrapper

#include <iostream>
#include <vector>
#include <functional>	

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
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm Derived" << endl;
	}

};

void doSomething(Base &b)
{
	b.print();
}

int main()
{
	Base b;
	Derived d;

	vector<reference_wrapper<Base>> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d); // no more slicing at push back
	
	for (auto & ele : my_vec)
			ele.get().print();

	//std::vector<Base*> my_vec;
	//my_vec.push_back(&b);
	//my_vec.push_back(&d); // no slicing at push back
	//
	//for (auto & ele : my_vec)
	//	ele->print();







	/*Derived d;
	Base &b = d;
	Base c;
	c = d;

	b.print();
	c.print();
	doSomething(d);*/

	return 0;
}