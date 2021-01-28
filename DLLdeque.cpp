#include "DLLdeque.h"

template<typename E> DLLdeque<E>::DLLdeque() 
	: S{}, n{} 
{
}

template<typename E> int DLLdeque<E>::size() const
{
	return S.size();
}

template<typename E> bool DLLdeque<E>::empty() const
{
	return S.empty();
}

template<typename E> const E& DLLdeque<E>::front()
{
	return S.front();
}

template<typename E> const E& DLLdeque<E>::back()
{
	return S.back();
}

template<typename E> void DLLdeque<E>::insertFront(const E& e)
{
	S.push_front(e);
}

template<typename E> void DLLdeque<E>::insertBack(const E& e)
{
	S.push_back(e);
}

template<typename E> void DLLdeque<E>::removeFront()
{
	S.pop_front();
}

template<typename E> void DLLdeque<E>::removeBack()
{
	S.push_back();
}