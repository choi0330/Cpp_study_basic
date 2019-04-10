// Converting constructor, explicit, delete

#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	//Fraction(char) = delete;

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

void doSomething(const Fraction frac) // (const Fraction &frac) don't use copy constructor because of reference
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7); //initializer works 
	//Fraciton frac2('c'); // deleted
	Fraction frac2;

	doSomething(7); // with explicit, it doesnt work
	doSomething(frac2);
	doSomething(frac);
	doSomething(Fraction(5));

	return 0;
}