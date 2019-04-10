//std::unique_ptr

#include <iostream>
#include <memory>
#include "Resource.h"

using namespace std;

auto doSomething()
{
	/*auto res1 = make_unique<Resource>(5);
	return res1;*/

	//return unique_ptr<Resource>(new Resource(5));

	return make_unique<Resource>(5);
}

//void doSomething2(unique_ptr<Resource> &res)
void doSomething2(Resource * res) // not recommended
//auto doSomething2(unique_ptr<Resource> res)
{
	res->setAll(100);
	res->print();

	//return res;
}


int main()
{
	//ex1
	//{
	//	//Resource *res = new Resource(1000000); // memory leak

	//	unique_ptr<Resource> res(new Resource(10000000));
	//	
	//	// early return or throw

	//	// delete res;
	//}


	//ex2
	//{
	//	unique_ptr<int> upi(new int);
	//	
	//	/*auto *ptr = new Resource(5);
	//	unique_ptr<Resource> res1(ptr);*/
	//	//auto res1 = make_unique<Resource>(5);
	//	auto res1 = doSomething();

	//	res1->setAll(5);
	//	res1->print();

	//	unique_ptr<Resource> res2;

	//	cout << boolalpha;
	//	cout << static_cast<bool>(res1) << endl;
	//	cout << static_cast<bool>(res2) << endl;

	//	//res2 = res1; // unique_ptr cannot be copied// only move semantics can be used
	//	res2 = std::move(res1);
	//	
	//	cout << boolalpha;
	//	cout << static_cast<bool>(res1) << endl;
	//	cout << static_cast<bool>(res2) << endl;

	//	if (res1 != nullptr) res1->print();
	//	//else res2->print();
	//	else (*res2).print();
	//}


	//ex3
	{
		auto res1 = make_unique<Resource>(5);
		res1->setAll(1);
		res1->print();

		cout << boolalpha;
		cout << static_cast<bool>(res1) << endl;

		//res1 = doSomething2(std::move(res1)); // move semantics
		//doSomething2(res1); // unique
		doSomething2(res1.get()); // l-value

		Resource *res2 = res1.get();
		cout << ".get() test : " << endl;
		res2->print();

		cout << boolalpha;
		cout << static_cast<bool>(res1) << endl;

		res1->print();

		delete res2;
	}


	//{//never do this
	//	Resource *res = new Resource;
	//	unique_ptr<Resource> res1(res);
	//	unique_ptr<Resource> res2(res);

	//	delete res;
	//}


	return 0;
}