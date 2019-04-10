// Study part 2... part 1 is gone
// parameters and arguments

#include <iostream>

using namespace std;

int foo(int x, int y)
{
	return x + y;
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7); // 6,7 : arguments ( actually parameters )
	foo(x, y + 1);

	return 0;
}