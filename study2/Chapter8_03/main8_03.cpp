// Constructors
#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;

public:
	//Fraction() 
	//{
	//	m_numerator = 1;
	//	m_denominator = 1;
	//}// always hidden
	//Fraction() // constructor 
	Fraction(const int& num_in = 1, const int& den_in = 1) // default value
	{
		m_numerator = num_in;
		m_denominator = den_in;
		cout << "Fraction() constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}

};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

private:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	//First fir; // private










	//Fraction frac;
	//frac.print();


	////Fraction frac{ 0,1 }; // int i{0};
	//Fraction one_thirds(1.1,3);
	////Fraction one_thirds{ 1.1 ,3 }; // uniform initialization // no type change
	//one_thirds.print();


	////frac.m_numerator = 10;  //stay private
	////frac.m_denominator = 1;

	////frac.print();


}