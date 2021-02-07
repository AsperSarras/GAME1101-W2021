#pragma once
#include "Character.h"

class Paladin :public Character
{
public:
	Paladin(string name, int hp, string title, int eHp): Character(name,hp)
	{
		setTitle(title);
		setExtraHp(eHp);
	}

	void setTitle(string title) { m_title = title; }
	string getTitle() const { return m_title; }

	void setExtraHp(int eHp) { m_extraHp = eHp; }
	int getExtraHp() const { return m_extraHp; }

virtual string getName() const
	{
	return getTitle() + " " + Character::getName();
	}
virtual int getHealth() const
	{
	return getExtraHp() + Character::getHealth();
	}

virtual void displayInfo() const
	{
	cout << "Name: " << getName() << "\nHP: " << getHealth() <<
		"\nPassive Ability: Increase the Defense of nearly allies by 3." <<
		endl << m_weapons << endl;
	}
private:
	string m_title;
	int m_extraHp;
};
