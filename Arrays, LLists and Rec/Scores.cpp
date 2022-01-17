#include "Scores.h"
#include "Array.h"
Scores::Scores(int maxEnt) : max(maxEnt), num (0)
{ // constructor
	 // save the max size
	entries = new GameEntry[max]; // allocate array storage
	 // initially no elements
}

void Scores::add(const GameEntry& e)
{
	int newScore = e.getScore();
	if (num == max)
	{
		if (newScore <= entries[max - 1].getScore())
			return;

	}
	else
		++num;
	int i = num - 2; //start wuth next to last
	while (i >= 0 && newScore > entries[i].getScore())
	{
		entries[i + 1] = entries[i];
		--i;
	}
	entries[i + 1] = e;
}

Scores::~Scores()
{
	delete[] entries;
}