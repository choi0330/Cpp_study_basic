// class template specialization
#include <iostream>
#include <array>
#include "Storage8.h"
#include <bitset>

using namespace std;

template<typename T>
class A
{
public:
	A(const T &input)
	{}

	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}
};

template<>
class A<char> // almost like a new class
{
public:
	A(const char &input)
	{}
	void doSomething()
	{
		cout << "Char type specialization" << endl;
	}
};

int main()
{
	//bitwise operator practice
	/*int i = 1;
	
	for (int j = 0; j < 10; j++)
	{
		int i = 1;
		int mask = 1 << j;
		i ^= mask;
		i |= mask;
		i &= mask;
		cout << bitset<32>(i) << endl;
	}*/

	




	// Define a Storage8 for integers
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int i = 0; i < 8; ++i)
		cout << intStorage.get(i) << ' ';
	cout << endl;
	cout << "Sizef of Storage8<int> : " << sizeof(Storage8<int>) << endl;
	
	// Define a Storage8 for bool
	Storage8<bool> boolStorage;
	for (int i = 0; i < 8; ++i)
		boolStorage.set(i, i & 3);

	for (int i = 0; i < 8; ++i)
		cout << (boolStorage.get(i) ? "True" : "False") << ' ';
	cout << endl;

	cout << "Size of Storage8<bool> : " << sizeof(Storage8<bool>) << endl;







	/*A<int> a_int(5);
	A<double> a_double(3.14);
	A<char> a_char('A');

	a_int.doSomething();
	a_double.doSomething();
	a_char.doSomething();*/

}