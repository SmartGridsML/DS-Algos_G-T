#include <iostream>
#include "Stu.h"



void Student::print() {
	//call Base class print first
	Person::print();
	std::cout << "Major: " << m_Major << "\n";
	std::cout << "IDNum: " << m_GradYr << "\n";
}

void changeMajor(const std::string& newMajor) {
	m_Major = newMajor;
}

