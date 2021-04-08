#include "Characters.h"

Characters::Characters(int hp, int atk, int def)
{
	m_health = hp;
	m_Attack = atk;
	m_Defense = def;
}

void Characters::setHealth(int hp)
{
	m_health = hp;
}

int Characters::getHealth()
{
	return m_health;
}

void Characters::setAttack(int atk)
{
	m_Attack = atk;
}

int Characters::getAttack()
{
	return m_Attack;
}

void Characters::setDefense(int def)
{
	m_Defense = def;
}

int Characters::getDefense()
{
	return m_Defense;
}