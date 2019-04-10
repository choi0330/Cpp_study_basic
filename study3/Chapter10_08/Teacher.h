#pragma once

#include "Person.h"

class Teacher : public Person
{
private:
	//std::string m_name;

public:
	Teacher(const std::string & name_in = "No Name")
		:Person(name_in)
	{
		std::cout << "Teacher constructor" << std::endl;
		//this->getName();
	}

	void teach()
	{
		std::cout << getName() << " is teaching" << std::endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
	{
		out << teacher.getName();
		return out;
	}
};
