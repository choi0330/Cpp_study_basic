// string stream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream os;

	os.str("Hi");
	
	os.str("");
	os.str(string()); // same as clear
	os.clear();
	cout << os.str() << endl;


	os << "Hello";

	cout << os.str() << endl;





	//int i = 12345;
	//double d = 67.89;

	////os << i << " " << d;
	//os << "12345 67.89";

	//int i2;
	//double d2;

	//os >> i2 >> d2;

	//cout << i2 << "|" << d2 << endl;

	//string str1;
	//string str2;

	//os >> str1 >> str2;

	//cout << str1 << "|" << str2 << endl;





	//stringstream os;

	//os << "Hello, World!"; // << : insertion operator, >> : extraction operator
	////os.str("Hello, world\n");
	//os << "Hello, World!2";

	//cout << os.str() << endl;

	//string str;

	//str = os.str();
	//cout << str << endl;



	return 0;
}