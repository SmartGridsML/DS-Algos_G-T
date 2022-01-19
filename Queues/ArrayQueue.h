#pragma once
/*
Similar to stack, however it uses FIFO principle
An element enters at back; removed from front - just like a shop queue
STL queue dynamically resizes itself as with vectors and stacks
#include <queue>
std::queue<T> myQ {};
enqueue(e) insert elemnet e at rear
dequeue() remove front element ( error if empty)
front() return but do not remove, reference to fron element ( error if empty)
*/

constexpr int SIZE = 100;

template <typename E> 
class ArrayQueue
{
private:
	E* Q;
	int front;
	int rear;

public: 
	//ctor
	ArrayQueue()
		: Q{ new E[] },   front(-1) , rear(-1) {}
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

template< typename E> bool  ArrayQueue<E>::ArrayQueue::isEmpty() const
{
	return Q.empty();
}

template< typename E> int  ArrayQueue<E>::ArrayQueue::size() const
{
	return Q.size();
}

template< typename E> const E& ArrayQueue<E>::ArrayQueue::front()
{
	return Q.front();
}

template< typename E> void  ArrayQueue<E>::ArrayQueue::enqueue(const E&)
{
	return Q.push_back();
}

template< typename E> void  ArrayQueue<E>::ArrayQueue::dequeue()
{
	return Q.erase();
}
