//Virtual base classes // The diamond problem

#include <iostream>
using namespace std;

class PoweredDevice
{
public:
	int m_i;

	PoweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << '\n';
	}
};

//class Scanner : public PoweredDevice
class Scanner : virtual public PoweredDevice
{
public:
	Scanner(int scanner, int power)
		:PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << '\n';
	}
};

//class Printer : public PoweredDevice
class Printer : virtual public PoweredDevice
{
public:
	Printer(int printer, int power)
		:PoweredDevice(power)
	{
		cout << "Printer: " << printer << '\n';
	}
};

//class Copier : public Scanner, public Printer
class Copier : virtual public Scanner, virtual public Printer
{
public:
	Copier(int scanner, int printer, int power)
		: Scanner(scanner, power), Printer(printer, power), PoweredDevice(power)
	{}
};

int main()
{
	Copier cop(1, 2, 3); // without virtual base class, base class's constructor is called twice


	cout << &cop.Scanner::PoweredDevice::m_i << endl; // different address for m_i
	cout << &cop.Printer::PoweredDevice::m_i << endl;


	return 0;
}