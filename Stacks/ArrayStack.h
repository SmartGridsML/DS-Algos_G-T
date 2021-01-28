#pragma once

/*
Only last object inserted (TOP) can be removed at any time. 

*/
#include <vector>

template < class E >
class ArrayStack //: public RuntimeException
{
private:
	std::vector<E> S;
public:
	//ctor
	//ArrayStack() = default;
	//ArrayStack();
	//copy ctor
	//ArrayStack(const ArrayStack& obj);
	int size() const { return S.size(); }
	bool isEmpty() const { return S.empty(); }
	const E& top();
	void push(const E& e) { S.push_back(e); }
	void pop();
	bool operator==(const ArrayStack& rhs)
	{
		return S == rhs;
	}
	//dtor
	~ArrayStack();
};