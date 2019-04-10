//std::exception
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException : public std::exception
{
public:
	const char * what() const noexcept override
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		/*string s;
		s.resize(-1);*/

		//throw std::runtime_error("Bad thing happened");
		throw CustomException();

	}
	catch (std::length_error & exception)
	{
		cerr << "Length error" << endl;
		cerr << exception.what() << endl;
	}
	catch (std::exception &exception) //polymorphism working
	{
		cout << typeid(exception).name() << endl;
		cerr << exception.what() << endl;
	}

	return 0;
}