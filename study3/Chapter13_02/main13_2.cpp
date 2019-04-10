// class templates

#include "MyArray.h"
//#include "MyArray.cpp" // not recommended.... leave at header file

int main()
{
	MyArray<double> my_arr(10);

	for (int i = 0; i < my_arr.getLength(); i++)
		my_arr[i] = i + 65;

	my_arr.print();


	return 0;
}