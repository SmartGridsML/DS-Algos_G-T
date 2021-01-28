#pragma once
#include <string>
#include "Person.h"

//DERIVED class
//PUBLIC inheritance - Student "is a" Person
class Student : public Person {
private:
	std::string m_Major{};
	int m_GradYr{};
public:
	//ctor
	Student() = default;
	Student(std::string nm, std::string idNum, 
				std::string deg, int year);
	~Student();

	//member functions

	// override veridies the base class 
	//declares a class member of the same signature and is virtual
	void print() override;
	void changeMajor(const std::string& newMajor); //switch degree
};