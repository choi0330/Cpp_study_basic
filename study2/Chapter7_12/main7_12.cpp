// Recursive Function Call
#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if(count > 0)
		countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else
	{
		const int sum_minus_one = sumTo(sumto - 1); // for debugging
		return sum_minus_one + sumto;

	}
}

int fibonacci(int ix)
{
	if (ix <= 1)
		return 0;
	else if (ix == 2)
		return 1;
	else
		return fibonacci(ix - 2) + fibonacci(ix - 1);
}

int main()
{
	//countDown(5);
	//cout << sumTo(1) << endl;
	for(int i = 1; i < 10; ++i)
		cout <<	fibonacci(i) << " ";
	cout << endl;

	return 0;
}