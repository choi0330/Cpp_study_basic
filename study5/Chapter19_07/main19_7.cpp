// Perfect Forwarding // std::forward
#include <iostream>
#include <vector>
#include <cstdio>
#include <utility> // std::forward

using namespace std;

class CustomVector
{
public:
	unsigned n_data = 0;
	int *ptr = nullptr;

	CustomVector(const unsigned & _n_data, const int & _init = 0)
	{
		cout << "Constructor" << endl;
		init(_n_data, _init);
	}

	CustomVector(CustomVector & l_input)
	{
		cout << "Copy constuctor" << endl;

		init(l_input.n_data);

		for (unsigned i = 0; i < n_data; ++i)
			ptr[i] = l_input.ptr[i];
	}

	CustomVector(CustomVector && r_input)
	{
		cout << "Move constuctor" << endl;

		n_data = r_input.n_data;
		ptr = r_input.ptr;

		r_input.n_data = 0;
		r_input.ptr = nullptr;
	}

	~CustomVector()
	{
		delete[] ptr;
	}

	void init(const unsigned& _n_data, const int & _init = 0)
	{
		n_data = _n_data;
		ptr = new int[n_data];
		for (unsigned i = 0; i < n_data; ++i)
			ptr[i] = _init;
	}
};

void doSomething(CustomVector & vec)
{
	cout << "Pass by L-reference" << endl;
	CustomVector new_vec(vec);
}

void doSomething(CustomVector && vec)
{
	cout << "Pass by R-reference" << endl;
	CustomVector new_vec(std::move(vec));  // call the move constructor
}

template<typename T>
void doSomethingTemplate(T&& vec)
{
	//doSomething(vec);
	doSomething(std::forward<T>(vec));
}








struct Mystruct
{
};

void func(Mystruct& s)
{
	cout << "Pass by L-ref" << endl;
}

void func(Mystruct&& s)
{
	cout << "Pass by R-ref" << endl;
}

template<typename T>
void func_wrapper(T&& t) //perfect forwarding
{
	func(std::forward<T>(t));
}










int main()
{
	CustomVector my_vec(10, 1024);

	//CustomVector temp(std::move(my_vec)); // call the move constructor passing R-value reference

	//cout << my_vec.n_data << endl;

	//doSomething(my_vec);
	//doSomething(CustomVector(10, 8));

	doSomethingTemplate(my_vec);
	doSomethingTemplate(CustomVector(10, 8));
	//my_vec alive;






	//Mystruct s;

	//func_wrapper(s);
	//func_wrapper(Mystruct());

	////func(s);
	////func(Mystruct());


	return 0;
}