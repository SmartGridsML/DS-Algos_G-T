#include "Person.h"
#include <iostream>

//ctor
Person::Person(std::string nm, std::string id)
	: name{ nm }  , idNum{id}
{
	std::cout << "1 arg Person ctor called" << "\n";
}

void Person::print()
{
	std::cout << name << "\n";
	std::cout << idNum << "\n";

}

Person::~Person() {};