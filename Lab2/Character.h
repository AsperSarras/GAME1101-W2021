#pragma once
#include <string>
#include "Weapons.h"
#include <iostream>

using namespace std;

class Character
{
private:
	string m_name;
	int m_health;
public:
	Weapons m_weapons;
	
	Character()
	{
		m_name = "";
		m_health = 0;
	}
	Character(string name, int health);

	void setName(string name);
	virtual string getName() const;

	void setHealth(int hp);
	virtual int getHealth() const;

	void setWeapon(string wName, string desc, int dmg,int i);

	virtual void displayInfo() const=0;
};
