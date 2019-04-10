//std::string // std::wstring
#include <iostream>
#include <cstddef>
#include <string>
#include <locale>

using namespace std;

int main(void)
{
	// c-style string example
	{
		char *strHello = new char[7];
		strcpy_s(strHello, sizeof(char) * 7, "Hello!");
		cout << strHello << endl;
	}

	// basic_string<>, string, wstring
	{
		string string;
		wstring wstring;

		wchar_t wc; // wide-character/unicode


	}
}