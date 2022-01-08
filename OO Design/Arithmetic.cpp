#include "Arithmetic.h"
//ctor
//Base class ctor is invoked to init the object in addition to custom init of inc variable
Arithmetic::Arithmetic(long i)
	: Progression(), incr{i}
{
}
long Arithmetic::nextValue()
{
	cur += incr;
	return cur;
}

