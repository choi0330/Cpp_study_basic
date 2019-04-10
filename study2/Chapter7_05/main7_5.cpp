// Returning values /// values, reference, address, structure, tuple

#include <iostream>
#include <array>
#include <tuple>


using namespace std;



int *getValue(int x)
{
	int value = x * 2;
	return &value;
}

int* allocateMemory(int size)
{
	return new int[size];
}

int& getnumber(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1,2,3,4 };
	return my_s;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;







	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl; //a
	//cout << std::get<1>(my_tp) << endl; //d





	//S my_s = getStruct(); //C style
	//my_s.a;







	//std::array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) *= 10;

	//cout << my_array[30] << endl;
	////cout << my_array[0] << endl;






	//int &value = getnumber(5); // value is referencing something will be gone

	//cout << value << endl;
	//cout << value << endl;






	//int *array = allocateMemory(1024);

	//delete[] array; // ambiguous because 'new int' was used in the function




	//int *value = getValue(4);

	//cout << *value << endl;
	//cout << *value << endl; // value is gone



	//int value = *getValue(3); //de-referencing the value which will be gone

	//cout << value << endl;



	return 0;
}