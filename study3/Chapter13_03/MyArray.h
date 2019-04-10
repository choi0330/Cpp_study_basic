#pragma once
#include <assert.h>
#include <iostream>

template <typename T, unsigned int T_SIZE> // T_SIZE should be known at the compile time
class MyArray
{
private:
	//int m_length;
	T *m_data;

public:
	//MyArray()
	//{
	//	//m_length = 0;
	//	m_data = nullptr;
	//}

	//MyArray(int length)
	MyArray()
	{
		m_data = new T[T_SIZE];
		//m_length = length;
	}

	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		//m_length = 0;
	}

	T &operator [](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}

};

//template<typename T>
//void MyArray<T>::print()
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << " ";
//	std::cout << std::endl;
//}
