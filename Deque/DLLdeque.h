#pragma once
#include <list>  //STL verison of doubly linked list
//5.3.3 Implementing deque with DLL
template< typename E> 
class DLLdeque
{
private:
	std::list<E> S{};
	int n{};
public:
	DLLdeque();
	int size() const;
	bool empty() const;
	const E& front();
	const E& back();
	void insertFront(const E& e);
	void insertBack(const E& e);
	void removeFront();
	void removeBack();
};

