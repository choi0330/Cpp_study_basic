//std::string constructors and type casting
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

template<typename T>
string ToString(T x)
{
	ostringstream osstream;
	osstream << x;
	return osstream.str();
}

template<typename T>
bool FromString(const string & str, T &x)
{
	istringstream isstream(str);
	return (isstream >> x) ? true : false;
}

int main()
{
	string my_str2(ToString(3.141592));
	//my_str2 = "hello";
	cout << my_str2 << endl;

	double d;

	if (FromString(my_str2, d))
		cout << d << endl;
	else
		cout << "Cannot covert string to double" << endl;









	/*string my_str(to_string(1004));
	my_str += to_string(241);
	cout << my_str << endl;

	int i = stoi(my_str);
	cout << i << endl;

	float f = stof(my_str);
	cout << f << endl;*/

	




	/*vector<char> vec;
	for (auto & e : "Today is a good day!")
		vec.push_back(e);
	
	for (auto & e : vec)
		cout << e;
	cout << endl;

	string str(vec.begin(),vec.end());
	cout << str << endl;

	string str2(vec.begin(), find(vec.begin(), vec.end(), 's'));
	cout << str2 << endl;
*/



	/*string my_string("my string");
	string second_string(my_string, 3, 3);
	cout << second_string << endl;

	const char * string2 = "my string";
	string string3(string2, 4);
	cout << string3 << endl;

	string string4(10, 'A');
	cout << string4 << endl;*/



	return 0;

}