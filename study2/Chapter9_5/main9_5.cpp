// ++, -- overloading
#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;
	
public:
	Digit(int digit=0)
		:m_digit(digit)
	{}

	//prefix
	Digit & operator ++()
	{
		++m_digit;
		if(m_digit>9)
			m_digit = 0;
		return *this;
	}

	//postfix // just memorize to put dummy int
	Digit operator ++ (int)
	{
		Digit temp(m_digit);
		++(*this);

		return temp;
	}

	//prefix
	Digit & operator --()
	{
		--m_digit;
		if (m_digit < 0)
			m_digit = 9;
		return *this;
	}

	//postfix // just memorize to put dummy int
	Digit operator -- (int)
	{
		Digit temp(m_digit);
		--(*this);

		return temp;
	}

	friend ostream & operator << (ostream &out, const Digit &digit)
	{
		out << digit.m_digit;
		return out;
	}
};

int main()
{
	Digit d(9);

	for (int i = 0; i < 12; ++i)
		cout << ++d << endl;
	for (int i = 0; i < 12; ++i)
		cout << --d << endl;
	


	return 0;
}