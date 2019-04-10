// multiple return values

#include <iostream>
#include <tuple>

using namespace std;

//tuple<int,int> my_func()
auto my_func()
{
	//return tuple<int, int, int>(123, 456, 789);
	return tuple(123, 456, 789, 10);
}

int main()
{
	auto[a, b, c, d] = my_func();
	cout << a << " " << b << " " << c << " " << d << endl;

	//auto result = my_func();

	//cout << get<0>(result) << " " << get<1>(result) << get<2>(result) << " " << endl;

	cout << "Hello, World" << endl;

	return 0;
}