// cin, cout over loading
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	/*void print()
	{
		cout <<"("<< m_x << ", " << m_y << ", " << m_z << ")";
	}*/
	friend ostream& operator << (ostream &out, const Point &p)
	{
		out <<"(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
		return out;
	}

	friend std::istream& operator >> (std::istream &in, Point &p)
	{
		in >> p.m_x >> p.m_y >> p.m_z;

		return in;
	}
};

int main()
{
	ofstream of("out.txt");
	ifstream ifs("in.txt", ifstream::in);

	// this is how ifstream works
	char c = ifs.get();

	while (ifs.good()) {
		std::cout << c;
		c = ifs.get();
	}

	//Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 0.3);
	Point p3, p4, p5;

	cin >> p3 >> p4;
	//p1.print();
	//cout << " ";
	//p2.print();
	//cout << endl;

	//we want something like
	//cout << p1 << " " << p2 << endl;

	//cout << p1 << " " << p2 << endl;
	//of << p1 << " " << p2 << endl;

	cout << p3 << " " << p4 << endl;
	cout << p5 << endl;

	ifs.close();
	of.close();

	return 0;
}