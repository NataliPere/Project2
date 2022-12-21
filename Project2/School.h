#pragma once
#include <string>
#include <iostream>

class School
{
public:
	
	std::string direction() {}
	
	int NumSchool() {}

	int NumClasses() {}
};

class NumClass : public School {
public:
	
	std::string direction() {}

	int classNumber() {}

	
};

class Student : public NumClass {
public:

	std::string direction() {}

	int classNumber() {}

	std::string sernameStudent() {}


	friend std::ostream& operator<<(std::ostream& os, Student& s) {
		os << t.getHeight() << " " << t.getColor();
		return os;
	}
	
	
};