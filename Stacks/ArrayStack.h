#pragma once

/*
* 5.1.4
STACK data structure:
Only last object inserted (TOP) can be removed at any time. 
Using fixed arrays
*/

constexpr int SIZE = 100;

template < class E >
class ArrayStack //: public RuntimeException
{
private:
	E* S ; // array of stack elements
	int capacity;
	int t;

public:
	//default ctor
	ArrayStack() = default;
	ArrayStack(int size = SIZE);
	//copy ctor
	ArrayStack(const ArrayStack& obj) { *this = obj; };

	//MEMBER FUNCTIONS
	int size() const;
	bool isEmpty() const;
	bool isFull() const;
	const E& top();
	void push(const E& e);
	void pop();
	
	~ArrayStack();
};

template < class E > ArrayStack<E>::ArrayStack(int size)
	: S(new E[size]), capacity(size), t(-1) {}

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
	if (!isEmpty())
		return S[t];
	//exit(EXIT_FAILURE);
}

template <class E>
void ArrayStack<E>::push(const E& e)
{
	if (size() < capacity)
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
