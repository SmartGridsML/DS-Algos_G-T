#pragma once
#include <string>

class GameEntry
{
	private: 
		std::string name;
		int score;

	public:
		GameEntry() = default;
		GameEntry(const std::string&, int);
		std::string getName() const;
		int getScore() const;
		

};

