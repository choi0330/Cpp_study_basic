//Association

#include <iostream>
#include "Lecture.h"

int main()
{
	using namespace std;

	Student *std1 = new Student("Hokwang", 0);
	Student *std2 = new Student("Simone", 1);
	Student *std3 = new Student("Wilson", 2);
	Teacher *teacher1 = new Teacher("Prof. FCP");
	Teacher *teacher2 = new Teacher("Prof. Andrea");

	//Student std1("Hokwang", 0);
	//Student std2("Simone", 1);
	//Student std3("Wilson", 2);
	//Teacher teacher1("Prof. FCP");
	//Teacher teacher2("Prof. Andrea");

	Lecture lec1("Intro to Robotics");
	lec1.assignTeacher(teacher1);
	lec1.registerStudents(std1);
	lec1.registerStudents(std2);
	lec1.registerStudents(std3);

	Lecture lec2("Machine Learning");
	lec2.assignTeacher(teacher2);
	lec2.registerStudents(std1);
	lec2.registerStudents(std2);

	//Todo : implement Aggregation Relationship

	//test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		//event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}
	// Composition Relationship

	// Todo : class Hobbyclub
	// Todo : delete momory (if necessary)
	delete std1, std2, std3, teacher1, teacher2;
}