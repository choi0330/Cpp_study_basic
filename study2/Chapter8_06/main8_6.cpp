// Destructor
#include <iostream>
#include <vector>

using namespace std;

class Simple
{
private:
	int m_id;
	
public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

class IntArray
{
private:
	//int *m_arr = nullptr;
	vector<int> m_arr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		//m_arr = new int[m_length];
		m_arr.resize(m_length);

		cout << "Constructor " << endl;
	}

	//~IntArray()
	//{
	//	
	//	//if(m_arr != nullptr) delete[] m_arr;
	//}

	int size() { return m_length; }
	void setval(const int& index, const int& val_in)
	{
		m_arr[index] = val_in;
	}
};

int main()
{
	//static int j = 0;
	while (true)
	{
	
		IntArray my_int_arr(10000);
		//my_int_arr.setval(j,i);
		//delete[] my_int_arr.m_arr; // not accessible
	}








	//Simple s1(0);
	//Simple *s2 = new Simple(1);
	//Simple s3(2);

	//delete s2;  // call the destructor


	return 0;

}
