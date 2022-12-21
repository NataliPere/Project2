#include "School.h"
#include <string>
#include <iostream>

int main() {
	class School
	{
	public:

		std::string direction() {
			return dir;
		}

		int NumSchool() {
			return SchoolNumber;
		}

		int NumClasses() {
			return numclasses;
		}

	private:
		std::string dir = "math";
		int SchoolNumber = 100;
		int numclasses = 5;

	};

	class NumClass : public School {
	public:

		std::string direction() {
			return dir;
		}

		int classNumber() {
			return num;
		}

	private:
		std::string dir = "math";
		int num = 7;

	};

	class Student : public NumClass {
	public:

		std::string direction() {
			return dir;
		}

		int classNumber() {
			return num;
		}

		std::string sernameStudent() {
			return sername;
		}

	private:
		std::string dir = "math";
		int num = 7;
		std::string sername = "Ivanov";

	};

	
	}


}