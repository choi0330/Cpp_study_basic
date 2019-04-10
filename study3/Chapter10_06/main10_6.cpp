#include "IntArray.h"
#include <vector>
#include <array>

using namespace std;

int main()
{
	IntArray my_arr{ 1,3,5,7,9 };
	my_arr.resize(10);
	cout << my_arr << endl;
	my_arr.resize(4);
	cout << my_arr << endl;
	my_arr.insertBefore(10, 1);
	cout << my_arr << endl;
	my_arr.remove(2);
	cout << my_arr << endl;
	my_arr.push_back(13);
	cout << my_arr << endl;

	vector<int> int_vec;
	array<int, 10> int_arr;

	return 0;
}