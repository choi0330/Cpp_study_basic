//Virtual Functions / Polymorphism

#include <iostream>

using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	virtual void print() override { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void print() override { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	A &ref = d;
	ref.print();




	/*A a;
	a.print();

	B b;
	b.print();

	C c;
	c.print();

	D d;
	d.print();*/

	return 0;
}