#include <iostream>
#include <string>

using namespace std;

//void print(int x = 0) // default parameter

void print(int x = 10, int y = 20, int z = 30); // in header // default can be inserted only at one place. (header recommended)

void print(int x, int y, int z) // default parameter from the right side 
{
	cout << x << " " << y << " " << z << endl;
}

void printf(std::string str) {}
void printf(char ch = ' ') {}

void printx(int x) {}
void printx(int x, int y = 20) {}

int main()
{
	//printx(10); // ambiguous





	printf(); // overloading & default




	int x = 10;
	//print(x);
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300);


	return 0;
}