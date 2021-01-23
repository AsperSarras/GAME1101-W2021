#pragma once
#ifndef __ACHIEVEMENTS__
#define __ACHIEVEMENTS__


#include <iostream>
#include<string>

using namespace std;

class Achievements
{
private:
	string m_title;
	string m_description;
	int m_score;
public:
	Achievements()
	{
		m_title = "";
		m_description = "";
		m_score = 0;
	}
	Achievements(string title, string description, int score);


	void setTitle(string title);
	string getTitle();

	void setDescription(string description); 
	string getDescription();

	void setScore(int score);
	int getScore();
};

#endif
