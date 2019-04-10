//std::initializer_list

#include <iostream>
#include <cassert>
#include <initializer_list>
#include <algorithm>

using namespace std;

class IntArray
{
public:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	IntArray() // constructor 1
	{}

	IntArray (unsigned length) // constructor 2
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list) // constructor 3
		: IntArray(list.size())
	{
		int count = 0;
		for (auto & ele : list)
		{
			m_data[count] = ele;
			//m_data[count++] = ele; // C-style
			++count;
		}

		//for (unsigned count = 0; count < list.size(); ++count)
		//	m_data[count] = list[count]; // error since initializer_list doesn't have []
	}

	IntArray & operator = (const IntArray &source)
	{
		if (this == &source)
			return *this;
		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new int[m_length];

			for (int i = 0; i < m_length; i++)
				m_data[i] = source.m_data[i];
		}
		else m_data = nullptr;
	}

	friend ostream & operator << (ostream &out, const IntArray &arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

	~IntArray()
	{
		delete[] this->m_data;
	}
};

int main()
{
	//int my_arr1[5] = { 1,2,3,4,5 };
	//int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	//auto i1 = { 10, 20, 30 };

	IntArray int_array{ 1,2,3,4,5 ,1,32,4,32,15,7 };
	cout << int_array << endl;

	IntArray arr2;
	arr2 = int_array;
	//int *adress = (int*)arr2.m_data;

	cout << arr2 << endl;

}