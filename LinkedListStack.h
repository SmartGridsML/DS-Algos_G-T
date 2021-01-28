#pragma once


#include <forward_list>
#include <string>

/*
5.1.5
Implementation of stack ADT using singly linked list 
instead of using template class - specific type to strings
*/
typedef std::string Elem;

class LinkedStack {
private:
	int num;
	std::forward_list<Elem> S;
public:
	//ctor default
	LinkedStack();
	//LinkedStack();
	int size() const; //getsize
	bool isEmpty() const;
	const Elem top();
	void push(const Elem& e);
	void pop();
};