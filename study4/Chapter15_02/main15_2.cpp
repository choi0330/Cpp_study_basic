// R-value references
#include <iostream>
using namespace std;

void doSomething(int &lref) // cannot use move semantics since it's l-value
{
	cout << "L-value ref" << endl;
	lref = 2;
}

void doSomething(int &&rref) // can use move semantics since it's r-value
{
	cout << "R-value ref" << endl;
}

int getResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value references

	int &lr1 = x;			// Modifiable l-values
	//int &lr2 = cx;		// Non-modifiable l-values
	//int &lr3 = 5;			// R-values // no memory

	lr1 = 2;
	//cout << "lr1 : " << lr1 << " x : " << x << endl;

	const int &lr4 = x;		// Modifiable l-values
	const int &lr5 = cx;	// Non-modifiable l-values
	const int &lr6 = 5;		// R-values
	x = 6;
	cout << x << " " << lr4 << endl;



	// R-value references

	//int &&rr1 = x;			// Modifiable l-values
	//int &&rr2 = cx;		// Non-modifiable l-values
	int &&rr3 = 5;			// R-values // no memory
	int &&rrr = getResult();

	//cout << rr3 << endl;
	//rr3 = 10; // consider it as move semantics 
	//cout << rr3 << endl;

	//const int &&rr4 = x;		// Modifiable l-values
	//const int &&rr5 = cx;	// Non-modifiable l-values
	const int &&rr6 = 5;		// R-values


	// L/R-value reference parameters
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());
	doSomething(rr3);
	doSomething(rrr);
	//doSomething(rr6);
	cout << rr3 << " " << rrr << endl;

	return 0;
}