//Virtual tables
#include <iostream>
using namespace std;

class Base
{
public:
	//Function pointer *__vptr;
	virtual void func1() {}; // virtual changes the size
	void func2() {};
};

class Der : public Base
{
public:
	//Function pointer *__vptr;
	void func1() {};
	void func3() {};
};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;

	return 0;
}