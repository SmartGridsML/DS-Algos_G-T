#pragma once

/*
STACK data structure:
Only last object inserted (TOP) can be removed at any time. 
*/
#include <vector>

template < class E >
class ArrayStack //: public RuntimeException
{
private:
	std::vector<E> S;
public:
	//default ctor
	ArrayStack() = default;

	//copy ctor
	ArrayStack(const ArrayStack& obj) { *this = obj; };

	//MEMBER FUNCTIONS
	int size() const { return S.size(); }
	bool isEmpty() const { return S.empty(); }
	const E& top() { if (!isEmpty()) return S.back(); }
	void push(const E& e) { S.push_back(e); }
	void pop() { S.pop_back(); };
	bool operator==(const ArrayStack& rhs)
	{
		return S == rhs;
	}
	//dtor
	~ArrayStack();
};