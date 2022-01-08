#pragma once
#include <string>
#include "Person.h"

//DERIVED class

class Student : public Person {   //PUBLIC inheritance used here - Student "is a" Person
private:
	std::string m_Major{};	//major subject
	int m_GradYr{};			//graduation year
public:
	//ctor
	Student() = default;
	//ctor
	Student(std::string nm, std::string idNum, std::string deg, int year)
		: Person{ nm , idNum }, m_Major{ deg }, m_GradYr{ year }
	{
		std::cout << "two -arg Student ctor" << "\n";
	}
	//~Student();

	//Member Functions

	// overrides the base class 
	//declares a class member of the same signature and is virtual
	void print() override;		//print Student's information
	void changeMajor(const std::string& newMajor); //switch degree subject
};
