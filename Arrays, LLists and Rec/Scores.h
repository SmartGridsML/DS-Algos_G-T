#pragma once
#include "Array.h"
#include <stdexcept>


class Scores 
{
private:
	int max;
	int num;
	GameEntry* entries; //highest scores stored in array entried
public:
	Scores(int max = 10);
	~Scores();
	void add(const GameEntry& e);
	GameEntry remove(int i);
};