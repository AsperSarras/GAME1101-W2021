#pragma once
#ifndef __PLATFORM__
#define __PLATFORM__

#include <iostream>
#include<string>
#include"Games.h"

using namespace std;

class Platform
{
private:
	string m_name;
	string m_manufacturer;

public:
	Games m_games[5];
	int m_pSize;
	
	Platform()
	{
		m_name = "";
		m_manufacturer = "";
	}

	Platform(string name, string manufacturer);


	void setName(string name); 
	string getName();

	void setManufacturer(string manufacturer);
	string getManufacturer();

	void setGames(string name, string p, string f, int i);
	void displayGames();

};

#endif

