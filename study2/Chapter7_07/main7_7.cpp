// Function Overloading

#include <iostream>
#include <string>

using namespace std;

typedef int my_int;
//
//void print(int x) {}
//void print(my_int x) {} // not overloading

void getRandom(int &x) {}
void getRandom(double &x) {}

int add(int x, int y) 
//int add(double x, double y) //input parameters should be different
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

void print(const char *value) {}
void print(int value) {}

void print2(unsigned int value) {}
void print2(float value) {}

int main()
{
	//print2('a');             //ambiguous
	//print2(0);
	//print2(3.141592);
	
	print2((unsigned int)'a');             
	print2(0u);
	print2(3.141592f);






	//print(0);
	//print("a");







/*
	int x;
	getRandom(x);*/

	//int x = getRandomInt(x);
	//int x = getRandom(int());


	return 0;
}