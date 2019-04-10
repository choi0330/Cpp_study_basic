#pragma once

#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
		:m_value(value)
	{
	}

	void print()
	{
		std::cout << m_value << '\n';
	}

	~Storage()
	{}
};

template<>
void Storage<double>::print()
{
	std::cout << "Double type ";
	std::cout << std::scientific << m_value << '\n';

}
