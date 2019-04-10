//regular expressions
#include <iostream>
#include <regex>
using namespace std;

int main()
{
	//regex re("\\d"); // \\d+ , \\d*
	//regex re("[ab]");
	//regex re("[[:digit:]]{3}");
	//regex re("[A-Z]{1,5}");
	regex re("([0-9]{1})([-]?)([0-9]{1,4})");

	string str;

	while (true)
	{
		getline(cin, str);

		if (regex_match(str, re))
			cout << "Match" << endl;
		else
			cout << "No match" << endl;
		
		// print matches
		{
			auto begin = sregex_iterator(str.begin(), str.end(), re);
			auto end = sregex_iterator();
			for (auto itr = begin; itr != end; ++itr)
			{
				smatch match = *itr;
				cout << match.str() << " ";
			}
			cout << endl;
		}

	}
}