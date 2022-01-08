#pragma once
/*
Example of Inheritance - numeric progressions
*/

#include "Progression.h"
class Arithmetic : public Progression
{

protected:
    long incr{};
    virtual long nextValue();
public:
  //ctor 
    Arithmetic(long i = 1);

};

/*
When a pointer to a Progession object is pointing to an Arithmetic object, the Artihmetic functions nextValue will be invoked  

*/