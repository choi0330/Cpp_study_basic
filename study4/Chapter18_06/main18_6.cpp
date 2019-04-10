//basic fstream
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

using namespace std;

int main()
{
	// writing
	//if (true)
	//{
	//	ofstream ofs("my_first_file.txt", ios::app); // ios::app, ios::binary
	//	// ofs.open("my_first_file.dat"); // ASCII format

	//	if (!ofs)
	//	{
	//		cerr << "Couldn't open file" << endl;
	//		exit(1);
	//	}

	//	ofs << "Hi." << endl;
	//	ofs << "My name is ...." << endl;

	//	const unsigned num_data = 10;
	//	ofs.write((char*)&num_data, sizeof(num_data));

	//	for (int i = 0; i < num_data; ++i)
	//		ofs.write((char*)&i, sizeof(i));
	//}

	// reading
	if (true)
	{
		//ifstream ifs("my_first_file.dat", ios::binary);
		ifstream ifs("my_first_file_wrong.dat", ios::binary);

		if (!ifs)
		{
			cerr << "Cannot open the file" << endl;
			exit(1);
		}

		while (ifs)
		{
			string str;
			getline(ifs, str);
			cout << str << endl;
		}

		unsigned num_data = 0;
		ifs.read((char*)&num_data, sizeof(num_data));

		for (unsigned i = 0; i < num_data; ++i)
		{
			int num;
			ifs.read((char*)&num, sizeof(num));

			cout << num << endl;
		}
	}

	return 0;
}