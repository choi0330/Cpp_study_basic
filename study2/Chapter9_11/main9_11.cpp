// Deep copy, shallow copy
#include <iostream>
#include <cassert>

using namespace std;

std::string;

class Mystring
{
//private:

public:
	char *m_data = nullptr;
	int m_length = 0;
	std::string data;

public:
	Mystring(const char *source = "")
	{
		assert(source); // check if it's not empty

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length-1; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	Mystring(const Mystring &source)
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length; //if you do m_data = source.m_data, they share same address...

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else m_data = nullptr;
	}

	//Mystring & operator = (const Mystring & source) = delete; // copy not possible
	Mystring & operator = (const Mystring & source)
	{
		////shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;

		cout << "Assignment operator" << endl;

		if (this == &source) // prevent self-assignment
			return *this;
		
		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else m_data = nullptr;
	}

	char *getString() { return m_data; }
	int getLength() { return m_length; }

	~Mystring()
	{
		delete[] m_data;
	}
};

int main()
{
	Mystring hello("Hello");
	Mystring hi(hello);
	hi = hello;

	//cout << hello.m_data << endl;
	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;
	cout << (int*)hi.m_data << endl;
	cout << hi.getString() << endl;





	{
		Mystring copy = hello; // copy(hello) copy
		//copy = hello; // assignment
		cout << copy.m_data << endl;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl;

	return 0;
}