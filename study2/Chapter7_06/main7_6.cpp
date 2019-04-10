// inline functions // optimization

#include <iostream>

using namespace std;

inline int min(int x, int y) //when too many inlines, file gets big
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	cout << (5 > 6 ? 6 : 5) << endl;   // inline works like this
	cout << (3 > 2 ? 2 : 3) << endl;


	return 0;
}