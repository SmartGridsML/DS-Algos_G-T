#include "Arithmetic.h"
//ctor
Arithmetic::Arithmetic(long i)
	: Progression(), incr{i}
{
}
long Arithmetic::nextValue()
{
	cur += incr;
	return cur;
}