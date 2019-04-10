// assert

#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const array<int, 5> &arr, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= arr.size() - 1);
	cout << arr[ix] << endl;
}

int main()
{
	const int x = 5;

	assert(x == 10);

	static_assert(x == 5, "x should be 5");







	//array<int, 5> arr{ 1,2,3,4,5 };

	//printValue(arr, 4);
	////cout << arr[5] << endl;





	//int number = 5;

	//cout << number << endl;

	//assert(number == 8); // only working for debug mode


	return 0;
}