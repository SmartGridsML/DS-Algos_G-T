#include "ArrayQueue.h"

template< typename E> bool  ArrayQueue<E>::ArrayQueue::isEmpty() const
{
	return S.empty();
}

template< typename E> int  ArrayQueue<E>::ArrayQueue::size() const 
{
	return S.size();
}

template< typename E> const E& ArrayQueue<E>::ArrayQueue::front()
{
	return S.front();
}

template< typename E> void  ArrayQueue<E>::ArrayQueue::enqueue(const E&)
{
	return S.push_back();
}

template< typename E> void  ArrayQueue<E>::ArrayQueue::dequeue()
{
	return S.erase();
}

