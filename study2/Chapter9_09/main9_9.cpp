#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

	//Fraction(const Fraction &fraction) // copy not allowed anymore
	//	:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	//{
	//	cout << "Copy constructor" << endl;
	//}

public:
	Fraction(int num = 0, int den = 1)
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor" << endl;
	}

	friend std::ostream & operator << (ostream &out, const Fraction & fraction)
	{
		out << fraction.m_numerator << " / " << fraction.m_denominator;

		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;

	return temp;
}


int main()
{
	Fraction test = doSomething(); // return value optimization

	cout << &test << endl;
	cout << test << endl;






	//Fraction result(3, 4);

	//Fraction copy(result);

	//cout << result << endl << copy << endl;

	//Fraction copy2(Fraction(4, 6)); // copy constructor not used

	//cout << copy2 << endl;

	return 0;
}