// Exception handling
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int findFirstChar(const char * string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); ++index)
		if (string[index] == ch)
			return index;

	return -1; // no match
}

double divide(int x, int y, bool &success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}

	success = true;
	return static_cast<double>(x) / y;
}

int main()
{


	try
	{
		//something happened
		throw "Wrong"; // -1.2 : runtime error if there is no catch for double
	}

	catch (int x)
	{
		cout << "Catch integer" << endl;
	}

	catch (double x)
	{
		cout << "Catch double" << endl;
	}

	catch (const char * error_message)
	{
		cout << "Catch const char * " << error_message << endl;
	}

	catch (string error_message)
	{
		cout << error_message << endl;
	}







	//// try, catch, throw
	//double x;
	//cin >> x;

	//try
	//{
	//	if (x < 0.0) throw string("Negative input"); // "Negative input" - strict

	//	cout << sqrt(x) << endl;
	//}
	//catch (string error_message)  // const char * error_message - should match the type of thrown thing
	//{
	//	// do something to respond
	//	cout << error_message << endl;
	//}







	/*bool success;
	double result = divide(5, 3, success);

	if (!success)
		std::cerr << "An error occurred" << std::endl;
	else
		std::cout << "Result is " << result << std::endl;

	ifstream input_file("temp.txt");
	if (!input_file)
		cerr << "Cannot open file" << endl;*/

	return 0;
}