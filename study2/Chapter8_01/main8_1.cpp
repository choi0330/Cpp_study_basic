//Object Oriented Programming // Class

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object
// Friend : name, address, age, height, weight, ...

//struct Friend
class Friend
{
public : // access specifier (public, private, protected)
	string m_name;
	string m_address;
	int m_age;
	double height;
	double weight;
	
	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << height << " " << weight << endl;
	}
};

//void print(Friend &fr)
//{
//	cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
//}

void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl; // Too much work....
}

int main()
{
	Friend jj{ "Jack jack", "Uptown", 2, 12, 23 }; // instantiation, instance
	
	cout << &jj << endl;
	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2); // when you have just 2 friends

	//my_friends[0].print(); // info about your first friend
	//my_friends[2].print(); // ...

	for (auto &e : my_friends)
		e.print();



	//print(jj);

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);

	/*jj.name = "jack jack";
	jj.address = "Uptown";
	...*/






	//string name;
	//string address;
	//int age;
	//double height;
	//double weight;

	//print(name, address, age, height, weight);




	//vector<string> name_vec; // also a lot of work
	//vector<string> address_vec;
	//vector<int> age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;

	//print(name_vec[0], address_vec[0], age_vec[0], height_vec[0], weight_vec[0]);


	return 0;
}