// Call by address

#include <iostream>

using namespace std;

typedef int* pint;

//void foo(const int * ptr) // cannot change the value
//void foo(int *const ptr) // cannot change the address
void foo(pint ptr)
{
	*ptr = 10;
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

void getSinCos(double degrees, double *sin_out, double *cos_out)
{
	*sin_out = 1.9;
	*cos_out = 2.0;
}

void print(const int *const ptr, int *arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}
	//arr[0] = 4; 

	//*ptr = 1; 
	//int x = 1;
	//ptr = &x;
}

int main()
{
	/*double degrees = 30;
	double sin, cos;

	getSinCos(degrees, &sin, &cos);

	cout << sin << " " << cos << endl;
*/



	int value = 5;

	cout << value << " " << &value << endl;

	pint ptr = &value;

	cout << &ptr << endl;
	foo(ptr);
	foo(&value);
}