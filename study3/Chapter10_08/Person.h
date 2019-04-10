#pragma once

#include <iostream>
#include <string>

class Person
{
private:
	std::string m_name;

public:
	//Person()
	//	: m_name("No name")
	//{}

	Person(const std::string & name_in = "No name")
		:m_name(name_in)
	{
		std::cout << "Person constructor" << std::endl;
	}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << "is doing nothing" << std::endl;
	}

	virtual ~Person()
	{
		std::cout << "Person destructor" << std::endl;
		delete[] &m_name;
	}

};