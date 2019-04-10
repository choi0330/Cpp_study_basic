//istream
#include <iostream>
#include <string>
#include <iomanip> // input/output manipulators

using namespace std;

int main()
{
	char buf[1024];
	//cin.ignore(2);

	//cout << (char)cin.peek() << endl;
	cin >> buf;
	cout << buf << endl;

	//cin.unget();
	cin.putback('A');

	cin >> buf;
	cout << buf << endl;



	/*string buf;

	getline(cin, buf);
	cout << cin.gcount() << " " << buf << endl;*/



//	char buf[1032];
//
//	/*cin.get(buf, 5);
//	cout << cin.gcount() << " " << buf << endl;
//	cin.get(buf, 10);
//	cout << cin.gcount() << " " << buf << endl;
//*/
//	cin.getline(buf, 5);
//	cout << cin.gcount() << " " << buf << endl;
//	cin.getline(buf, 10);
//	cout << cin.gcount() << " " << buf << endl;

	/*char ch;
	while (cin.get(ch))
		cout << ch;


	int i;
	float f;

	cin >> i >> f;
	cout << i << " " << f << endl;
*/


	/*char ch;

	while (cin >> ch)
		cout << ch;
*/

	/*char buf[10];
	cin >> setw(10) >> buf;
	cout << buf << endl; 
	cin >> setw(10) >> buf;
	cout << buf << endl;
	cin >> setw(10) >> buf;
	cout << buf << endl;

	cout << "Enter a number" << endl;

	int i;
	cin >> i;
	cout << i << endl;*/

	return 0;
}