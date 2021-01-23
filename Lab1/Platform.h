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
	int m_pSize;
	Games m_games[5];
	Platform()
	{
		m_name = "";
		m_manufacturer = "";
	}

	Platform(string name, string manufacturer)
	{
		m_name = name;
		m_manufacturer = manufacturer;
	}

	void setName(string name) {
		m_name = name;
	}
	string getName() {
		return m_name;
	}

	void setManufacturer(string manufacturer) {
		m_manufacturer = manufacturer;
	}
	string getManufacturer() {
		return m_manufacturer;
	}

	void setGames(string name, string p, string f, int i)
	{
		m_games[i].setName(name);
		m_games[i].setPublisher(p);
		m_games[i].setDeveloper(f);
	}

	void displayGames()
	{
		for (int i = 0; i < 5; ++i)
		{
			cout << i << "= Name:" << m_games[i].getName() << endl << "Developer: " << m_games[i].getDeveloper() << endl << "Publisher: " << m_games[i].getPublisher() << endl << endl;
		}
	}
};

#endif

