#pragma once

#include "Position2D.h"
#include <string>

class Monster //Monster and Position2D is composition relationship
{
private:
	std::string m_name; // char * data, unsigned length ;
	Position2D m_location;

	//int m_x; // location
	//int m_y;

public:
	Monster(const std::string name_in, const Position2D & pos_in)
		:m_name(name_in), m_location(pos_in)
	{}

	void moveTo(const Position2D & pos_target)
	{
		m_location = pos_target; // '=' is overloaded in Position2D
		//m_location.set(pos_target);
	}

	friend std::ostream & operator << (std::ostream &out, const Monster & mons)
	{
		out << mons.m_name << mons.m_location;
		return out;
	}
};