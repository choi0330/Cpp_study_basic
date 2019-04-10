// Non-type Parameters

#include "MyArray.h"

int main()
{
	// std::vector<double> my_arr; my_arr.resize(100);
	// MyArray<double> my_arr(100);                        these two are dynamic allocation. so length can be decided at run time

	//int i = 100
	//MyArray<double, i> my_arr; //not possible
	MyArray<double, 100> my_arr; // can be applied to different dimensions.. ex) 2D, 3D ..
	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i + 65;

	my_arr.print();



	return 0;
}