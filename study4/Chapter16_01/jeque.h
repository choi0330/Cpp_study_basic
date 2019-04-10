#pragma once

#include <iostream>
#include <vector>

class jeque
{
private:
	std::vector<int> m_vec;
	int m_length = 0;
public:
	jeque(const int & length = 0)
		:m_vec(length)
	{
		m_length = length;
	}
	void push_back(const int & ele)
	{
		m_length += 1;
		m_vec.resize(m_length);
		m_vec[m_length-1] = ele;
	}

	void push_front(const int & ele)
	{
		m_length += 1;
		m_vec.resize(m_length);
		for (int i = m_length -1; i > 0; i--)
		{	
			m_vec[i] = m_vec[i - 1];
		}
		m_vec[0] = ele;
	}

	void print()
	{
		for(auto & e : m_vec)
			std::cout << e << " ";
		std::cout << std::endl;
	}
};