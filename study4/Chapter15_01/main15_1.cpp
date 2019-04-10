// Move semantics, smart pointers
#include "Resource.h"
#include "AutoPtr.h"
using namespace std;

// RAII : resource acquisition is initialization

void doSomething()
{
	try
	{
		//Resource *res = new Resource; // dull pointer
		AutoPtr<Resource> res = new Resource; // smart pointer

		// work with res
		if (true)
		{
			throw - 1; // exception
		}

		// replace it with smart pointer
		//if (true)
		//{
		//	delete res;
		//	return; // early return
		//  throw -1; // excception
		//}

		//delete res;
	}
	catch(...)
	{}
	return;
}

int main()
{
	//doSomething();
	{
		AutoPtr<Resource> res1(new Resource); // int i; int *ptr(&i); int *ptr2 = nullptr;
		AutoPtr<Resource> res2;
		
		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		//AutoPtr<Resource> res3(res1);
		res2 = res1; // move semantics needed

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	
	} // destructor called


	//doSomething(res1); // move into the function and deleted when it's over
	// value semantics (copy semantics)
	// reference semantics (pointer)
	// move semantics (move)


	// syntax vs. semantics //same syntax, different semantics
	int x = 1, y = 1;
	x + y;

	string str1("Hello"), str2("World");
	str1 + str2; // append

	return 0;
}
