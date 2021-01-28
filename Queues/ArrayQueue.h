#pragma once
/*
Similar to stack, uses FIFO principle
element enters at back; removed from front - just like a shop queue
STL queue dynamically resizes itself as with vectors and stacks
#include <queue>
std::queue<T> myQ {};
enqueue(e) insert elemnet e at rear
dequeue() remove front element ( error if empty)
front() return but do not remove, reference to fron element ( error if empty)



*/
#include <vector>

template <typename E> 
class ArrayQueue
{
private:
	std::vector<E> S;
public: 
	//ctor
	ArrayQueue()
		:S{ new E } {}
	//accessors
	int size() const;
	bool isEmpty() const;
	const E& front();	//returns reference to const to top of queue
	//more robust form
	//const E& front() const throw(QueueEmpty) then see commented out class below

	//mutators
	void enqueue(const E& e);
	void dequeue();
};

/*
class QueueEmpty: public RuntimeException
{
public:
	QueueEmpty(const std::string& err) : RuntimeException(err)
			{}
};
*/