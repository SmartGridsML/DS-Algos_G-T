#include "Progression.h"
//ctor
Progression::Progression(long c, long f) 
	: first{ f }, cur{ c }
{
}
Progression::~Progression()
{
}
//dtor
//Progression::~Progression() {}
//member functions
long Progression::firstValue() {
	cur = first;
	return cur;
}
long Progression::nextValue() {
	return ++cur;
}
void Progression::printP(int n) {
	std::cout << firstValue();
	for (int i = 2; i <= n; ++i) {
		std::cout << " " << nextValue();
	}
	std::cout << "\n";
}