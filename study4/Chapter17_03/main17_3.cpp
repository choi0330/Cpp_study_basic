//std::string length and capacity
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str2("");
	cout << boolalpha;
	cout << my_str2.empty() << endl;

	string my_str("0123456789");
	my_str.reserve(1000);
	cout << boolalpha;
	cout << my_str.empty() << endl;
	cout << my_str << endl;
	cout << my_str.size() << endl;
	cout << my_str.length() << endl;
	cout << my_str.capacity() << endl; // bigger than size to prevent reallocation
	cout << my_str.max_size() << endl;

	return 0;
}
