#include "ArrayStack.h"

//ctor
template < class E > ArrayStack<E>::ArrayStack( int size)
	: S(new E[size]) , capacity(size) , top(-1) {}

//copy ctor
/*template < typename E > ArrayStack<E>::ArrayStack(const ArrayStack& obj)
{
	*this = obj;
}*/

template < class E > int ArrayStack<E>::ArrayStack::size() const
{
	return t + 1;
}

template < class E > bool ArrayStack<E>::isEmpty() const
{
	return t == -1;
	//return this->S.empty();
}

template<class E>
bool ArrayStack<E>::isFull() const
{
	return t == capacity - 1;
}

template <class E > const E& ArrayStack<E>::top()
{
	if (!isEmpty)
		return S[t];
	//exit(EXIT_FAILURE);
}

template <class E>
void ArrayStack<E>::push(const E& e)
{
	if(size() < capacity)	
		S[++t] = e;
	//S.push_back(e);
	//S.push_back(e);
}

template <class E>
void ArrayStack<E>::pop() 
{
	if (!isEmpty())
		--t;
}

template <typename E > ArrayStack<E> :: ~ArrayStack()
{
	delete[] S;
}
