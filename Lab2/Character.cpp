#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character(string name, int health)
{
	setName(name);
	setHealth(health);
}

void Character::setName(string name)
{
	m_name = name;
}

string Character::getName() const
{
	return m_name;
}

void Character::setHealth(int hp)
{
	m_health = hp;
}

int Character::getHealth() const
{
	return m_health;
}

void Character::setWeapon(string wName, string desc, int dmg,int i)
{
	m_weapons.setWName(wName);
	m_weapons.setDescription(desc);
	m_weapons.setDmg(dmg);
	m_weapons.setAbilities(i);
}

//void Character::displayInfo()
//{
//	cout << "Name: " << getName() << "\nHP: " << getHealth() << endl;
//	cout << m_weapons;
//}
