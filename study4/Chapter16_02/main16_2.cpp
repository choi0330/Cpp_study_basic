//Iterators
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>

using namespace std;

int main()
{
	map<int, char> container;
	for (int i = 0; i < 10; ++i)
		container.insert(make_pair(i, char(i + 65)));

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		cout << itr->first << " " << itr->second << endl;







	/*set<int> container;
	for (int i = 0; i < 10; i++)
		container.insert(i/2);

	for (auto itr = container.begin(); itr != container.end(); ++itr)
		cout << *itr << " ";
	cout << endl;*/









	//vector<int> container;
	//for (int i = 0; i < 10; i++)
	//	container.push_back(i);

	////vector<int>::iterator;
	//vector<int>::const_iterator itr; // pointer
	//itr = container.begin();
	//while (itr != container.end())
	//{
	//	cout << *itr << " "; // overloaded

	//	++itr; // overloaded
	//}
	//cout << endl;

	//for (auto & e : container)
	//	cout << e << " ";
	//cout << endl;

	//for (auto itr = container.begin(); itr != container.end(); itr++)
	//	cout << *itr << " ";
	//cout << endl;

	return 0;
}