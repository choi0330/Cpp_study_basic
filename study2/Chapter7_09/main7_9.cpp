// Function pointer******
#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

int func2(int x)
{
	return 5;
}

bool isEven(const int &number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int &number)
{
	if (number % 2 != 0) return true;
	else return false;
}

//typedef bool(*check_fcn_t)(const int &);
//using check_fcn_t = bool(*)(const int&);

//void printNumbers(const array<int, 10> &my_arr,
//	check_fcn_t check_fcn = isEven)
void printNumbers(const array<int, 10> &my_arr,
	std::function<bool(const int&)> check_fcn)
{
	for (auto element : my_arr)
	{
		if (check_fcn(element) == true) cout << element;
		//if (!print_even && element % 2 == 1) cout << element;
	}
	cout << endl;
}

int main()
{
	std::array<int, 10> my_arr{ 0,1,2,3,4,5,6,7,8,9 };

	std::function<bool(const int&)> fcnptr = isEven;

	printNumbers(my_arr, fcnptr);

	fcnptr = isOdd;

	printNumbers(my_arr, fcnptr);







	//printNumbers(my_arr);
	//printNumbers(my_arr, isOdd);


	/*for (auto element : my_arr)
	{
		if (element & 2 == 0) cout << element;
	}
	cout << endl;*/






	//int(*fcnptr)(int) = func2;

	//cout << fcnptr(1) << endl;

	////fcnptr = goo; // return type and parameter should match






	//int(*fcnptr)() = func;

	//cout << fcnptr << endl;
	//cout << fcnptr() << endl;
	//cout << &fcnptr << endl;

	//cout << func << endl; //function is also pointer
	//cout << func() << endl;
	//cout << &func << endl;

	//fcnptr = goo;

	//cout << fcnptr << endl;
	//cout << fcnptr() << endl;
	//cout << &fcnptr << endl;

	return 0;
}