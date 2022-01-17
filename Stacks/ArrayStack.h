#pragma once

/*
* 5.1.4
STACK data structure:
Only last object inserted (TOP) can be removed at any time. 
Using fixed arrays
*/

constexpr int SIZE = 100;

template < class E >
class ArrayStack //: public RuntimeException
{
private:
	E* S ; // array of stack elements
	int capacity;
	int t;

public:
	//default ctor
	ArrayStack() = default;
	ArrayStack(int size = SIZE);
	//copy ctor
	ArrayStack(const ArrayStack& obj) { *this = obj; };

	//MEMBER FUNCTIONS
	int size() const;
	bool isEmpty() const;
	bool isFull() const;
	const E& top();
	void push(const E& e);
	void pop();
	//checks if stacks are equal
	/*bool operator==(const ArrayStack& rhs)
	{
		return S == rhs;
	}*/
	//dtor
	~ArrayStack();
};