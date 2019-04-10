// [] subscript operator
#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class InList
{
private:
	vector<int> vec_list = { 1,2,3,4,5,6,7,8,9 };

public:

	// no need for these
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int *getList()
	{
		return m_list;
	}*/


	int & operator [](const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return vec_list[index];
	}

	const int & operator [](const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return vec_list[index];
	}

	/*int & operator [](const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

	const int & operator [](const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}*/
};

int main()
{
	InList *list = new InList;

	//list[3] = InList;
	(*list)[3] = 10; // ok
	cout << (*list)[3] << endl;

	delete list;



	//InList my_list;

	//my_list[6] = 10;
	//cout << my_list[6] << endl;


	//// solve the problem with const
	//my_list[4] = 5; // not working
	//cout << my_list[4] << endl; // working

	//my_list.setItem(3, 1);
	//cout << my_list.getItem(3) << endl;
	//my_list.getList()[3] = 10;
	//cout << my_list.getList()[3] << endl;
}