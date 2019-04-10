#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << -12345 << endl;
	cout.fill('*');
	cout << setw(10) << -12345 << endl;
	cout << setw(10) << left << -12345 << endl;
	cout << setw(10) << right << -12345 << endl;
	cout << setw(10) << internal << -12345 << endl;

	////cout << fixed;
	////cout << scientific << uppercase;
	//cout << showpoint;
	//cout << setprecision(3) << 123.456789 << endl;
	//cout << setprecision(4) << 123.456789 << endl;
	//cout << setprecision(5) << 123.456789 << endl;
	//cout << setprecision(6) << 123.456789 << endl;
	//cout << setprecision(7) << 123.456789 << endl;

	/*cout << boolalpha;
	cout << true << " " << false << endl;*/

	///*cout.setf(ios::showpos);
	//cout.unsetf(ios::dec);*/
	////cout.setf(ios::hex, ios::basefield);
	//cout.setf(ios::uppercase);
	//cout << hex;
	//cout << 108 << endl;

	//cout.unsetf(ios::showpos);
	//cout << dec;
	//cout << 103 << endl;

	return 0;
}