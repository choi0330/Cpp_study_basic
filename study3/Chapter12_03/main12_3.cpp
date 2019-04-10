//override, final, covariant return type

#include <iostream>

using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; } // type is casted
	A* geTthis() {
		cout << "A::getThis()" << " ";
		return this;
	}
};

class B : public A
{
public:
	//void print(double x) { cout << "B" << endl; }
	//virtual void print(int x) override { cout << "B" << endl; } // type should be consistent with the overriden function
	//virtual void print(int x) final { cout << "B" << endl; } // no more overriding
	void print() { cout << "B" << endl; }
	B* geTthis() { 
		cout << "B::getThis()" << " ";
		return this; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
	C* geTthis() { 
		cout << "C::getThis()" << " ";
		return this; }
};

int main()
{
	A a;
	B b;
	C c;

	A &def = c;

	//def.print();
	b.geTthis()->print();
	def.geTthis()->print();
	c.geTthis()->print();

	cout << typeid(b.geTthis()).name() << endl;
	cout << typeid(def.geTthis()).name() << endl;
	cout << typeid(c.geTthis()).name() << endl;
	
	return 0;
}