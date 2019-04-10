// STL Algorithms
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	list<int> container;
	for (int i = 0; i < 10; ++i)
		container.push_back(i+5);

	auto itr = min_element(container.begin(), container.end());
	cout << *itr << endl;

	itr = max_element(container.begin(), container.end());
	cout << *itr << endl;

	cout << endl;

	itr = find(container.begin(), container.end(), 10); // operator < overloading needed
	container.emplace(itr, 154);
	replace(container.begin(), container.end(), 154, 15);

	for (auto & e : container) cout << e << " ";
	cout << endl;

	//sort(container.begin(), container.end());
	//li.sort();
	container.sort();

	//vector<int>::const_iterator it(container.begin());
	list<int>::const_iterator it;
	it = container.begin();
	while (it != container.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//reverse(container.begin(), container.end());
	//li.reverse();
	container.reverse();

	for (auto it = container.begin(); it != container.end(); ++it)
		cout << *it << " ";
	cout << endl;






	return 0;
}