//call by reference
#include <iostream>
#include <cmath> //sin(), cos()
#include <vector>

using namespace std;

//void printElement(int(&arr)[4])
void printElement(vector<int>& arr)
{
	for (int i = 0; i < 4; ++i)
		cout << arr[i] << " ";
}

typedef int* pint; // use it when it's confusing

void foo(int *&ptr)
{
	cout << "in func " << *ptr << " " << ptr << " " << &ptr << endl;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out) // 1 input & 2 outputs
{
	static const double pi = 3.141592 / 180; // not true but faster calculation
	const double radians = degrees * pi;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void addOne(int &y)
{
	cout << y << " " << &y << endl;

	y = y + 1;
}

int main()
{





	/*int arr[]{ 1,2,3,4 };
	printElement(arr);*/
	vector<int> arr{ 1,2,3,4 };
	printElement(arr);




	//int x = 5;
	//int *ptr = &x;

	//foo(ptr);

	//cout << *ptr << " " << ptr << " " << &ptr << endl;





	//foo(6); // NOT POssible because '6' doesn't have any address




	/*double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;*/




	/*int x = 5;

	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " " << &x << endl;*/

	return 0;
}
