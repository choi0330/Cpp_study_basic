// string // char access // convert to array
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	char buf[20];
	my_str.copy(buf, 5, 1);
	buf[5] = '\0';

	cout << buf << endl;

	const char *arr2 = my_str.data();
	cout << arr2 << endl;

	const char *arr = my_str.c_str();
	cout << arr[6] << endl;
	cout << arr << endl;
	cout << (int)arr[6] << endl;
	cout << static_cast<int>(arr[7]) << endl;

	cout << my_str.c_str() << endl;
	cout << my_str.c_str()[4] << endl;

	cout << my_str[0] << endl;
	cout << my_str[3] << endl;

	my_str[3] = 'Z';

	cout << my_str << endl;

	try
	{
		//my_str[100] = 'z'; // exception is not covered because of speed (performance)
		my_str.at(40) = 'dz'; // (stability)
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
	}
	//my_str[100] = 'd'; //don't do this

	return 0;
}