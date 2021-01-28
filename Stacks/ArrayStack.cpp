#include "ArrayStack.h"

//ctor
//template < class E > ArrayStack<E>::ArrayStack()
//{}

//copy ctor
//template < typename E > ArrayStack<E>::ArrayStack(const ArrayStack& obj)
//{
//	*this = obj;
//}

/*template < class E > int ArrayStack<E>::ArrayStack::size() const
{
	return S.size();
}*/

/*template < class E > bool ArrayStack<E>::isEmpty() const
{
	//return S.empty();
	return this->S.empty();
}*/

template <class E > const E& ArrayStack<E>::top()
{
	//if (!isEmpty)
		//return S.back();
	return this->S.back();
}
/*template <class E> void ArrayStack<E>::push(const E& e)
{
	//if(size() < capacity)	
		//S[++t] = e;
	//S.push_back(e);
	//S.push_back(e);
}*/
template <class E>void ArrayStack<E>::pop() 
{
	//if (!isEmpty())
		//S.pop_back();
	this->S.pop_back();
}

//template <typename E > ArrayStack<E> :: ~ArrayStack()
//{}
