
#include "Vector.h"
#include <iostream>
int Vector::size() const
{
	return n;
}

bool Vector::isEmpty() const 
{
	return n == 0;
}

Element Vector::operator[](int i)
{
	
	return A[i];
}

Element Vector::at(int i) //throw (IndexOutofBounds)
{
	try
	{
		if (i >= n)
			throw "i out of range";
	}
	catch (char* ex)
	{
		std::cout << ex;
	}
	return A[i];
}
