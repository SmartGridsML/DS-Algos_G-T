#pragma once
#include <iostream>
class Progression {

protected:

	long first{};
	long cur{};
public:

	//default ctor
	Progression() = default;

	//ctor
	Progression(long c, long f)
		: first{ f }, cur{ c }
	{}
	//dtor
	virtual ~Progression();
	//member functions
	virtual long firstValue();
	virtual long nextValue();
	virtual void printP(int n);

};

