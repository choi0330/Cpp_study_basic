//Lambda function // anonymous function
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

void goodbye(const string & s)
{
	cout << "Goodbye " << s << endl;
}

class Object
{
public:
	void hello(const string &s)
	{
		cout << "Hello " << s << endl;
	}
};

int main()
{
	// lambda-introducer
	// lambda-parameter-declaration
	// lambda-return-type-clause
	// compound-statement

	auto func = [](const int& i) -> void {cout << "Hello, World!" << endl; }; // GUI

	func(123);
	[](const int& i) -> void {cout << "Hello, World!" << endl; } (1234);

	{
		string name = "JackJack";
		[&]() {cout << name << endl; }(); // reference
		/*[&name]() {cout << name << endl; }();
		[=]() {cout << name << endl; }();
		[this]() {cout << name << endl; }();*/
	}

	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	//not for this
	auto func2 = [](int val) {cout << val << endl; }; // return type ->void
	for_each(v.begin(), v.end(), func2);

	//butfor this
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

	cout << []() -> int {return 1; }() << endl;



	function<void(int)> func3 = func2;
	func3(123);

	function<void()> func4 = bind(func3, 456); //(void)
	func4();

	// search placeholder
	{
		Object instance;
		auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);

		f(string("World"));
		f("World");

		auto f2 = std::bind(&goodbye, std::placeholders::_1);

		f2("World");

	}

	return 0;
}