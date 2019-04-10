//Function templates
#include <iostream>
#include "Cents.h"

using namespace std;

template <typename T> //typename or class 
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1, 2) << endl;				// int type instantiation
	cout << getMax('A', 'C') << endl;
	cout << getMax(1.2, 3.14) << endl;
	cout << getMax(1.2f, 3.14f) << endl;
	cout << getMax(Cents(5), Cents(10)) << endl;

	return 0;
}