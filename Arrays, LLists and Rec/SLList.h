#pragma once
#include "ListNode.h"
/*
A linked list in its simplest form is a collection of nodes
that together from a linear ordering

Each node stores a pointer, next, to the next node of the list.
First and last nodes are called headf and tail respectively.
It can be reseized by adding/removing nodes. 
*/

//Implementation

template <typename T>
class SLList
{
private:
	Listnode<T>* head;		//pointer to head of list
	Listnode<T>* tail;
	SLList* next;
	T info;
public:
	SLList() = default;
	//ctor to set values of info and next 
	SLList(T data, SLList* ptr = nullptr) 
		: info{data} , next{ptr} {}
	//
	~SLList() { while (!isEmpty()) removeFront(); }
	bool isEmpty() const;
	const T& getFront() const;
	void addFront(const T& e);
	void removeFront();
	void addTail(const T& e);
	const T& end() const;

};

