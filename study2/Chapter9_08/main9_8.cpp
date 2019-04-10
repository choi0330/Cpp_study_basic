#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

void printInt(int value)
{
	cout << value << endl;
}

class Dollar
{
private:
	int m_dol;

public:
	Dollar(const int& input)
		:m_dol(input)
	{}

	operator Cents()
	{
		return Cents(m_dol * 100);
	}

	//operator int()
	//{
	//	return m_dol;
	//}
};

int main()
{
	Dollar dollar(10);
	Cents cents2 = dollar;

	printInt(cents2);
	printInt(Cents(dollar));
	printInt(static_cast<Cents>(dollar));
	//printInt(dollar);








	//Cents cents(7);

	//printInt(cents); // automatic type cast
	///*int value = (int)cents;
	//value = int(cents);
	//value = static_cast<int>(cents);

	//printInt(cents);
	//printInt(value);
	//printInt(int(cents));*/
}