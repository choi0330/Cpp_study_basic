// Defensive Programming
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// violated assumption

	string hello = "Hello, my name is Jack jack";

	cout << "Input from 0 to " << hello.size() - 1 << endl;

	while (1)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix < hello.size())
		{
			cout << hello[ix] << endl;
			break;
		}
		else cout << "Please try again" << endl;

	}




	// syntax error;   // grammar error
	// semantic erros; // meaning error

	/*int x;
	cin >> x;

	if (x >= 5)
		cout << "x is greater than 5" << endl;
*/
	return 0;
}