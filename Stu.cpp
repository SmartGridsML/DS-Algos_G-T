#include <iostream>
#include "Stu.h"

//ctor
Student::Student(std::string nm, std::string idNum,
					std::string deg, int year)
	: Person{ nm , idNum }, m_Major{ deg }, m_GradYr{ year }
	//member list initzer
{
	std::cout << "two -arg Student ctor" << "\n";
}
//dtor
Student::~Student()
{
}


void Student::print() {
	//call Base class print first
	Person::print();
	std::cout << "Major: " << m_Major << "\n";
	std::cout << "IDNum: " << m_GradYr << "\n";
}

/*void changeMajor(const std::string& newMajor) {
	m_Major = newMajor;
}*/

