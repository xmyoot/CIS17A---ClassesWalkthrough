#include "Course.h"
#include <string>
using namespace std;


Course::Course(std::string name, std::string description, Teacher teacher) : _name(name), _description(description), _teacher(teacher)
{
}


Course::~Course()
{
}

bool Course::EnrollStudent(Student newStudent, int position)
{
	if (position <= 9 && _students[position].GetName() == "Null") {
		_students[position] = newStudent;
		return true;
	}
	return false;
}

std::string Course::getClassInfo()
{
	string info = "Course Information for " + _name + "\n";
	info += _description;
	info += "------------------------------------";
	info += "\n";
	for (auto student : _students) {
		info += student.GetName() + "\n";

	}
	return info;
}
