#include "LinkedListStack.h"
LinkedStack::LinkedStack()
	: S{}, num{ 0 } {}

int LinkedStack::size() const {
	return num;
}

bool LinkedStack::isEmpty() const
{
	return S.empty();
}
const Elem LinkedStack::top()
{
	return S.front();
}
void LinkedStack::push(const Elem& e) 
{
	//insert elements to beginning
	S.push_front(e);
}
void LinkedStack::pop() 
{
	//removes first element;
	S.pop_front();
}