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
	Achievements(string title, string description, int score)
	{
		m_title = title;
		m_description = description;
		m_score = score;
	}

	void setTitle(string title) {
		m_title = title;
	}
	string getTitle() {
		return m_title;
	}

	void setDescription(string description) {
		m_description = description;
	}
	string getDescription() {
		return m_description;
	}

	void setScore(int score) {
		m_score = score;
	}
	int getScore() {
		return m_score;
	}
};

#endif
