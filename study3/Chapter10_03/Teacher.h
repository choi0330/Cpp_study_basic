#pragma once

#include <string>

class Teacher
{
private:
	std::string m_name;
	std::string m_address;
	double m_salary;
	int m_age;
	std::string m_evaluation;
	//Todo : more members like home address, salary, age, evaluation, etc..

public:
	Teacher(const std::string & name_in = "No Name", const std::string & ad = "No Address", const double & sal = 0,
			const int & age = 0 , const std::string eval = "No evaluation")
		:m_name(name_in), m_address(ad), m_salary(sal), m_age(age), m_evaluation(eval)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	std::string getName()
	{
		return m_name;
	}

	friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
	{
		out << teacher.m_name;
		return out;
	}
};