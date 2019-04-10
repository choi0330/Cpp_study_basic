// ==, !=, > , >= overloading

#include <iostream>
#include <vector>
#include <random>
using namespace std;

class Cents
{
private:
	int m_cents;
	
public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int &getCents() { return m_cents; }

	friend bool operator == (const Cents&c1, const Cents &c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents&c1, const Cents &c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend bool operator < (const Cents&c1, const Cents &c2) // only smaller works for sort function
	{
		return c1.m_cents < c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents & cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; i++)
		arr[i].getCents() = i;

	std::random_device rng;
	std::mt19937 urng(rng());
	std::shuffle(begin(arr), end(arr),urng);

	for (auto &e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto &e : arr)
		cout << e << " ";
	cout << endl;




	/*Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
		cout << "Equal" << endl;
	else
		cout << "Different" << endl;

	cout << std::boolalpha << (cents1 != cents2);*/

	return 0;
}