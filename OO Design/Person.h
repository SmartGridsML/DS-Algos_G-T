#pragma once
//2.2 Inheritance

/*
Inheritance allows the design of generic classes to be specialised into more particular classes thus saving time rewriting code

Example: Design a set of classes to represent people at a university. We might have a generic class: Person which defines elements to all people
We can then furhter define specialised classes such as Student or Instructor and so on.

A generic class is known as a BASE/PARENT class. Any class that extends a base class may INHERIT from it and need only define those specialised for that class.
Such a class is called a DERIVED/CHILD class

*/



//Aim: to design a set of classes to represent people at  university
#include <string>

//BASE class
/*Member functions of inherited classes still
do not have access to base private members.*/
/*
Member functions of student (derived)
do not have access to private members of Person (base) class.
--> special access priviliges for derived classes can be provided
by declaring members to be "protected".
*/
class Person {
protected:
	std::string name{};
	std::string idNum{};
public:
	//ctor
	Person() = default;
	Person(std::string nm, std::string id);
	//use dynamic binding with virtual keyword
	virtual void print();
	//dtor
	//when defining any virtual functions,  recommended 
	//that a virtual destructor be defined as well
	virtual ~Person();
};