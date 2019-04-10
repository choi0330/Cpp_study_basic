#pragma once

// container class
#include <iostream>
#include <initializer_list>
using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int *m_data = nullptr;

public:
	IntArray()
	{}

	IntArray(const int & length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> & list)
		:IntArray(list.size())
	{
		int count = 0;
		for (auto & ele : list)
		{
			m_data[count++] = ele;
		}
	}

	void reset()
	{
		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = 0;
		}
		
	}

	void resize(const int & length)
	{
		int *temp = new int[length];
		for (int i = 0; i < length; i++)
		{
			temp[i] = m_data[i];
			if (m_length < length && m_length - 1 < i)
			{
				temp[i] = 0;
			}
		}
		delete[] m_data;
		m_length = length;
		m_data = temp;
	}

	// restart from here
	void insertBefore(const int & value, const int & index)
	{
		int *temp = new int[m_length];
		for (int i = 0; i < m_length; i++)
		{
			temp[i] = m_data[i];
		}

		resize(m_length + 1);
		for (int i = 0; i < m_length + 1; i++)
		{
			if (i < index) m_data[i] = temp[i];
			else if (i == index) m_data[i] = value;
			else m_data[i] = temp[i - 1];
		}
		delete[] temp;

	}

	void remove(const int &index)
	{
		int *temp = new int[m_length];

		for (int i = 0; i < m_length; i++)
		{
			temp[i] = m_data[i];
		}

		resize(m_length - 1);

		for (int i = 0; i < m_length; i++)
		{
			if (i < index)
				m_data[i] = temp[i];
			else
				m_data[i] = temp[i + 1];
		}
		delete[] temp;
	}

	void push_back(const int & value)
	{
		resize(m_length + 1);
		m_data[m_length - 1] = value;
	}

	IntArray & operator = (const IntArray & source)
	{
		if (this == &source)
			return *this;
		delete[] m_data;

		if (source.m_data != nullptr)
		{
			m_length = source.m_length;
			m_data = new int[m_length];
			for (int i = 0; i < source.m_length; i++)
			{
				m_data[i] = source.m_data[i];
			}
		}
		else m_data = nullptr;
	}

	friend ostream & operator << (ostream &out, const IntArray &arr)
	{
		for (int i = 0; i < arr.m_length; i++)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

	~IntArray()
	{
		delete[] this->m_data;
	}
};