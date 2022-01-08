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
    //Geometric(long b = 2);
    //ctor
    Geometric(long b = 2)
        :Progression(1, 1), base(b) {}

    /*long nextValue() {
        cur *= base;
        return base;
    }*/
};

