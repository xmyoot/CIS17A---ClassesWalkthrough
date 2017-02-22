#pragma once

//don't place using namespace std in header file

#include <string>
class Student {
private:
	std::string _name;
public:
	Student(std::string name);
	~Student();

	std::string GetName();
};