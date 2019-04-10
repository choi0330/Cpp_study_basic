// Member Initializer List
#include <iostream>

using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		: m_b(m_b_in)
	{}
};

class Something
{
private:
	int		m_i = 100;
	double	m_d = 100.0;
	char	m_c = 'F';
	int		m_arr[5] = { 100, 200, 300, 400, 500 };
	B		m_b{ 1024 };
	
public:
	Something()
		: m_i(1)
		, m_d(3.14)
		, m_c{ 'a' }
		, m_arr{6,7,8,9,10 }
		, m_b(m_i -1)//initializer list // uniform initialization // no type change
	{
		m_i += 1;
		m_d *= 3.14;
		m_c += 1;
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto &e : m_arr)
			cout << e << " ";
		
	}
};

int main()
{
	Something som;

	som.print();

	return 0;
}