//string
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("aaaa");
	str.insert(2, "bb");
	cout << str << endl;




	/*string str3(" one");
	string str4("two");

	str3.append(" one and a half");
	str4 += str3 + " three";
	cout << str4 << endl;
	str4.push_back('Z');
	cout << str4 << endl;*/




	/*string str1("one");

	string str2;
	str2 = str1;
	str2 = "two";
	str2.assign("three").append(" ").append(str1).append(" two");

	cout << str1 << endl << str2 << endl;
	swap(str1, str2);
	cout << str1 << endl << str2 << endl;
	str1.swap(str2);
	cout << str1 << endl << str2 << endl;
*/

	return 0;
}