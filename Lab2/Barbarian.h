#pragma once
#include "Character.h"

class Barbarian :public Character
{
public:
	Barbarian(string name, int hp, string title, int eHp) : Character(name, hp)
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
			"\nPassive Ability: Attack is doubled when health is lower than 20%."<<
			endl<< m_weapons << endl;
	}
private:
	string m_title;
	int m_extraHp;
};
