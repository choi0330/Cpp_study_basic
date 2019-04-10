// std::vector as a stack
#include <iostream>
#include <vector>

using namespace std;

void printStack(const vector<int> &stack)
{
	for (auto &e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	vector<int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(7);
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);








//	//int *v = new int[3]{ 1,2,3 };
//
//	vector<int> v{ 1,2,3 };
//
//	//v.resize(10);
//	v.resize(1024);
///*
//	for (auto &e : v)
//		cout << e << " ";*/
//	for (unsigned int i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;
//	//cout << v[2] << endl; // runtime error
//	//cout << v.at(2) << endl;
//	int *ptr = v.data();
//
//	cout << ptr[2] << endl; // vector doesn't return even after downsized
//
	return 0;
}