#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include <iostream>

using namespace std;

int main() {
	Teacher james = Teacher("james");
	Course cis17 = Course("CIS17A", "Programming C++: Objects", james);
	Student bob = Student("bob");
	Student jane = Student("jane");
	
	cis17.EnrollStudent(bob, 0);
	cis17.EnrollStudent(jane, 1);

	cout << cis17.getClassInfo() << endl;

	getchar();
	return 0;
}