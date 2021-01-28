#pragma once
/*
Example of INheritance - numeric progressions
*/

#include "Progression.h"
class Arithmetic :
    public Progression
{

protected:
    long incr{};
    //member function
    virtual long nextValue();
public:
  //ctor 
    Arithmetic(long i = 1);

};

