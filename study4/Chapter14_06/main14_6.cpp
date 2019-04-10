// risk and disadvantage of exception dealing

#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
	~A()
	{
		//throw "error"; // not allowed
	}
};

int main()
{
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}






	//try
	//{
	//	int * i = new int[10000000]; // memory leak
	//	unique_ptr<int> up_i(i); // smart pointer

	//	// do something with i
	//	throw "error";

	//	delete[] i; // ignored
	//}
	//catch (...)
	//{
	//	cout << "Catch" << endl;
	//}

	return 0;
}