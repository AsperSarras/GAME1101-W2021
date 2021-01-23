#pragma once
#ifndef __GAMES__
#define __GAMES__

#include <iostream>
#include<string>
#include "Achievements.h"

using namespace std;

class Games
{
private:
	string m_name;
	string m_publisher;
	string m_developer;
	int m_pAsize;
	Achievements* m_pAchievements;
public:
	bool empty = true;
	
	Games()
	{
		m_name = "";
		m_publisher = "";
		m_developer = "";
	}
	Games(string name, string publisher, string developer);


	void setName(string name); 
	string getName();


	void setPublisher(string publisher); 
	string getPublisher(); 

	void setDeveloper(string developer); 
	string getDeveloper();

	void setAsize(int size);

	void inputAchievement();
	

	void dislayAchievement();
};

#endif

