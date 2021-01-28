#pragma once
#include <iostream>
class Progression {
protected:
	long first{};
	long cur{};
public:
	//ctor
	Progression() = default;
	Progression(long c, long f);
	//dtor
	virtual ~Progression();
	//member functions
	virtual long firstValue();
	virtual long nextValue();
	virtual void printP(int n);

};

