#pragma once
#include "Progression.h"
class Geometric :
    public Progression
{   
protected:
    long base;
    //member function
    virtual long nextValue();
public:
    //ctor
    Geometric(long b = 2);
};

