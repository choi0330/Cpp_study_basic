// Standard Template Libraries(STL) // containers
#include <iostream>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include "jeque.h"

using namespace std;

void sequence_containers()
{
	//vector
	/*{
		vector<int> vec;
		for (int i = 0; i < 10; i++)
			vec.push_back(i);

		for (auto & e : vec)
			cout << e << " ";
		cout << endl;
	}*/

	//deque
	{
		deque<int> deq;
		for (int i = 0; i < 10; i++)
		{
			deq.push_back(i);
			deq.push_front(i);
		}

		for (auto & e : deq)
			cout << e << " ";
		cout << endl;
	}

}

void associative_containers()
{
	//set
	//{
	//	set<string> str_set;

	//	str_set.insert("Hello");
	//	str_set.insert("World");
	//	str_set.insert("Hello"); // same element is ignored

	//	cout << str_set.size() << endl;

	//	for (auto & e : str_set)
	//		cout << e << " ";
	//	cout << endl;
	//}

	// multiset : duplication is allowed
	/*{
		multiset<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl;

		for (auto & e : str_set)
			cout << e << " ";
		cout << endl;
	}*/

	// map : key/value (json)
	//{
	//	std::map<char, int> map;
	//	map['c'] = 50; // rearranged
	//	map['a'] = 10;
	//	map['b'] = 20;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;

	//	cout << map['a'] << endl;

	//	for (auto & e : map)
	//		cout << e.first << " " << e.second << " "; // key & value
	//	cout << endl;
	//}

	// multimap : duplicated keys
	{
		multimap<char, int> map;
		map.insert(std::pair('a', 10)); // befor c++ 14, pair<char, int>('a', 10)
		map.insert(std::pair('b', 20));
		map.insert(std::pair('a', 30));
		map.insert(std::pair('c', 50));

		cout << map.count('a') << endl;

		for (auto & e : map)
			cout << e.first << " " << e.second << " ";
		cout << endl;
	}
}

void container_adapters()
{
	//stack
	//{
	//	cout << "stack" << endl;

	//	stack<int> stack;	// can use user-defined type
	//	stack.push(1);		// push adds a copy
	//	stack.emplace(2);	// emplace constructs a new object
	//	stack.emplace(3);
	//	cout << stack.top() << endl;
	//	stack.pop();
	//	cout << stack.top() << endl;
	//	stack.pop();		// remove the outermost value
	//	cout << stack.top() << endl;
	//}

	////queue
	//{
	//	cout << "Queue" << endl;

	//	queue<int> queue;
	//	queue.push(1);
	//	queue.push(2);
	//	queue.push(3);
	//	queue.push(4);
	//	queue.push(5);

	//	cout << queue.front() << " " << queue.back() << endl;
	//	queue.pop(); //first come first out
	//	cout << queue.front() << " " << queue.back() << endl;
	//}

	// Priority queue
	{
		cout << "Priority queue" << endl;

		priority_queue<int> queue; // overloading is needed for sorting ( < )
		
		for (const int n : {1, 8, 6, 3, 7, 2, 10, 11, 5, 9, 4})
			queue.push(n);
		
		for (int i = 0; i < 11; ++i)
		{
			cout << queue.top() << endl;
			queue.pop();
		}
	}
}

int main()
{
	//sequence_containers();
	//associative_containers();
	container_adapters();





	/*jeque jeq1;
	for (int i = 0; i < 10; i++)
	{
		jeq1.push_back(i);
		jeq1.push_front(i);
	}
	jeq1.print();*/



	return 0;
}