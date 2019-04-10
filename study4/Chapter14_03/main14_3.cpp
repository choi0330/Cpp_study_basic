// exception class and inheritance
#include <iostream>
using namespace std;

class Exception
{
public:
	virtual void report()
	{
		cerr << "Exception report" << endl;
	}
};

class ArrayException : public Exception
{
public:
	void report() override
	{
		cerr << "Array exception" << endl;
	}
};

class Myarray
{
private:
	int m_data[5];

public:
	int & operator [] (const int &index)
	{
		if (index < 0 || index >= 5) /*throw - 1;*/
			/*throw Exception();*/
			throw ArrayException();

		return m_data[index];
	}
};

void doSomething()
{
	Myarray my_arr;

	try
	{
		my_arr[100];
	}
	catch (const int & x)
	{
		cerr << "Exception " << x << endl;
	}

	//catch (ArrayException & ae)
	//{
	//	cout << "doSomething ()" << endl;
	//	ae.report();
	//	throw ae; // rethrow
	//}

	catch (Exception & e) //object slicing
	{
		cout << typeid(e).name() << endl;
		cout << "doSomething ()" << endl;
		e.report();
		//throw e; //object slicing
		throw; //throw what you got originally
	}

	
}

int main()
{
	try 
	{
		doSomething();
	}
	catch (ArrayException & e)
	{
		cout << "main()" << endl;
		e.report();
	}
	catch (Exception & e) //object slicing
	{
		cout << "main()" << endl;
		e.report();
	}
	return 0;
}