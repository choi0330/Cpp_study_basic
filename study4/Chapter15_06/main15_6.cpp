//std::shared_ptr
#include <iostream>
#include "Resource.h"

using namespace std;

void doSomething(unique_ptr<Resource> res)
{}

int main()
{
	//doSomething(unique_ptr<Resource>(new Resource(1000000)); //not safe...
	//doSomething(make_unique<Resource>(1000000)); // much better
	/*Resource *res = new Resource(3); 
	res->setAll(1);*/
	{
		//shared_ptr<Resource> ptr1(res); // doesn't know it shares with ptr2 if it uses 'res'

		auto ptr1 = make_shared<Resource>(3); //much safer , delete problem is solved
		ptr1->setAll(1);

		ptr1->print();

		{
			//shared_ptr<Resource> ptr2(ptr1); // the number of sharing is internally counted
			//shared_ptr<Resource> ptr2(ptr1);
			auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print();

			cout << "Going out of the block" << endl;
		} // ptr2 is not deleted since it shares with ptr1

		ptr1->print();

		cout << "Going out of the outer block" << endl;
	}// destruct here
}