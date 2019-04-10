// stream states // input validation
#include <iostream>
#include <cctype>
#include <string>
#include <bitset>
using namespace std;

void printCharacterClassification(const int & i)
{
	cout << boolalpha;
	cout << "isalnum ? " << bool(isalnum(i)) << endl;
	cout << "isblank ? " << bool(isblank(i)) << endl;
	cout << "isdigit ? " << bool(isdigit(i)) << endl;
	cout << "islower ? " << bool(islower(i)) << endl;
	cout << "isupper ? " << bool(isupper(i)) << endl;

}

void printStates(const ios& stream)
{
	cout << boolalpha;
	cout << "good() = " << stream.good() << endl;
	cout << "eof() = " << stream.eof() << endl;
	cout << "fail() = " << stream.fail() << endl;
	cout << "bad() = " << stream.bad() << endl;
}

bool isAllDigit(const string & str)
{
	bool ok_flag = true;

	for (auto e : str)
		if (!std::isdigit(e))
		{
			ok_flag = false;
			break;
		}

	return ok_flag;
}

void classifyCharacters(const string & str)
{
	for (auto e : str)
	{
		cout << e << endl;
		cout << boolalpha;
		cout << "isdigit " << bool(isdigit(e)) << endl;
		cout << "isblank " << bool(isblank(e)) << endl;
		cout << "isalpha " << bool(isalpha(e)) << endl;
	}
}


int main()
{
	//while (true)
	//{
	//	char i;
	//	cin >> i;

	//	printStates(cin);

	//	//cout << boolalpha;
	//	//cout << bitset<8>(cin.rdstate()) << endl;
	//	//cout << bitset<8>(istream::goodbit) << endl;
	//	//cout << bitset<8>(istream::failbit) << endl;
	//	//cout << !bool((cin.rdstate() & istream::failbit) != 0) << endl; // bit mask


	//	printCharacterClassification(i);

	//	cin.clear();
	//	cin.ignore(1024, '\n');
	//}

	//cout << boolalpha;
	//cout << isAllDigit("1234") << endl;
	//cout << isAllDigit("a1234") << endl;	
	classifyCharacters("1234");
	classifyCharacters("a 1234");

	//regular expression // much better with this

	return 0;
}