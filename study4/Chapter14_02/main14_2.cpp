// Exceptions and stack unwinding

#include <iostream>
using namespace std;

// void last() throw(...) exception specifier


void last() throw() // no throwing but not force
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;

	throw 'a'; // int , double , or whatever

	cout << "End last" << endl;
}

void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;
}

void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}

	catch (double)
	{
		cerr << "Second caught double exception" << endl;
	}

	cout << "End second" << endl;
}

void first()
{
	cout << "first" << endl;

	try
	{
		second();
	}
	catch (double)
	{
		cerr << "first caught int exception" << endl;
	}
	catch (...) // catch-all handlers
	{
		cerr << "first caught ellipses exception" << endl;
	}

	cout << "End first" << endl;
}

int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}

	catch (int)
	{
		cerr << "main caught int excpetion" << endl; // print out without going through the buffer
	}
	catch (...)
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "end main" << endl;

	return 0;
}