//Encapsulation, Access specifiers, Access Functions
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
	//public: 
	int m_month2;
	int m_day;
	int m_year;

public:
	//Date()
	//{
	//	m_month;
	//	m_day;
	//	m_year;
	//}
	void SetDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month2 = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int &month_input)
	{
		m_month2 = month_input;
	}

	// setDay, setMonth ... // setters

	const int& getDay()  // getters
	{
		return m_day;
	}

	void copyFrom(const Date& original)
	{
		m_month2 = original.m_month2;
		m_day = original.m_day;
		m_year = original.m_year;
	}

	void print()
	{
		cout << m_day << "." << m_month2 << "." << m_year << endl;
 	}

};



int main()
{
	Date today; // {8,5,3}
	/*today.m_month = 8
	today.m_day = 19;
	today.m_year =2015;
	*/

	today.SetDate(10, 23, 2018);
	today.setMonth(11);
	today.print();

	//cout << today.getDay() << endl;

	Date copy;
	//copy.SetDate(today.getmonth(), today.getDay(), today.getyear());
	//copy.SetDate(today);
	copy.copyFrom(today);
	copy.print();
	//copy.m_day = 123; // not a good idear since you might change 


	return 0;
}