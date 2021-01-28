#include "Geometric.h"
//ctor
Geometric::Geometric(long b)
	:Progression(1 ,1), base(b) {}

long Geometric::nextValue() {
	cur *= base;
	return base;
}
