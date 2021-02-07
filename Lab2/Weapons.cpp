#include "Weapons.h"
#include <iostream>

Weapons::Weapons(string name, string description, int dmg)
{
	m_wName = name;
	m_description = description;
	m_dmg = dmg;
}

void Weapons::setWName(string name)
{
	m_wName = name;
}

string Weapons::getWNAme()
{
	return m_wName;
}

void Weapons::setDescription(string description)
{
	m_description = description;
}

string Weapons::getDescription()
{
	return m_description;
}

void Weapons::setDmg(int dmg)
{
	m_dmg = dmg;
}

int Weapons::getDmg()
{
	return m_dmg;
}

void Weapons::setAbilities(int i)
{
	m_abilitiesArr[0] = "Gains 2 def.";
	m_abilitiesArr[1] = "Lose 4 def.";
	m_abilitiesArr[2] = "Gain 2 attack speed.";

	m_ability = m_abilitiesArr[i];
}

string Weapons::getAbilities()
{
	return m_ability;
}

ostream& operator<<(ostream& out, Weapons a)
{
	out <<"Weapon: "<< a.getWNAme() << ".\nDescription: " << a.getDescription() <<
		"\nDamage: " << a.getDmg()<<".\nAbility: "<< a.getAbilities();
	return out;
}
