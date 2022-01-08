//2.2 INHERITANCE AND POLYMORPHISM
#include "Person.h"
/* 
!!!! Important topic  !!!!!
Static Binding
When a class is derived from a base class - derived class becomes a subtype of the base class.
This means that we can use the derived class wherever the base class is acceptable. 
e.g. let's create an array of pointers to people
*/

Person* pArr[100];
pArr[0] = new Person("Zero", "pos0");
pArr[1] = new Student("Carol", "34-927", "Physics", "2014");

/*
If we attempt to invoked the print function , we might assume the function Student::print()
would be called. Surprisingly, Person::print is called in BOTH cases. 
Moreover, pArr[i] is not allowed access to the Student member functions.
The reason is called static binding ; when determining which member function to call C++'default action is to consider
an object's declared type not its actual type. 

Solution -> use dynamic binding. 
To specify that a member should use dynamic binding, keyword VIRTUAL is added to function's declaration.
*/

/*
class Person
{
public:
	virtual void print() 
	{....}
};

class Student : public Person
{
public:
	virtual void print()
	{....}
};
*/

//Virtual Destructors
//If a base class defines any virtual functions, it should define a virtual destructor even if it is empty

//2.2.2 POLYMORPHISM
/*
In the context of object -oriented design, it refers to the ability of a varibale to take different types.
Polymorphism is typically applied in C++ using pointer variables.
In particular, a variable, p declared to be a pointer to some class S imples that p can point to any object
belonging to any DERIVED class T, of S.

Consider what happens if both of these classes define a vrttual member function , a, and let us also consider
which of these functions is called when we invole p->a(). Since dynamic binding is being used, if p points to 
an object of type T then it invokes  the function T::a. In this case, T OVERRIDES S::a. Alternatively if p points
to an object of type A, will invoke S::a.

Polymorphism in this scenario is very useful as the caller of p->a() doesn't need to know what p has been binded to 
*/

/*
Two primary ways of using inheritance: specialization and extension. 
If a general function from the base classwould not work correctly for a derived class object we should override the funtion
to have the correct functionality for derived class. 
Extensions is adding new functions that are not present in base class. 
*/