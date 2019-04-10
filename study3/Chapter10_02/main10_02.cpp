//Composition
#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0,0));
	Monster mon2("Parsival", Position2D(0, 0));
	{
		//event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}

	mon1.moveTo(Position2D(2, 3));
	cout << mon1 << endl;

	return 0;
}