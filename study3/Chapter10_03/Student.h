#pragma once

#include <string>

class Student
{
private:
	std::string m_name;
	int m_intel; //intelligence;
	std::string m_address;
	std::vector<int> m_phone;
	std::string m_foods;
	std::string m_habits;
	//Todo: add more members like address, phone, favorite food, habits, ...
	
public:
	Student(const std::string & name_in = "No Name", const int & intel_in = 0, const std::string & ad = "No address",
		const std::vector<int> & num = { 0,0,0,0,0,0,0,0,0,0,0 }, const std::string food = "No food", const std::string habit = "No habit")
		:m_name(name_in), m_intel(intel_in), m_address(ad), m_phone(num), m_foods(food), m_habits(habit)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	void setIntel(const int & intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream & operator << (std::ostream & out, const Student & student)
	{
		out << student.m_name << " " << student.m_intel;
		return out;
	}
};
