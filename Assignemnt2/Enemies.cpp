#include "Enemies.h"

string Enemies::getName()
{
	return m_name;
}

void Enemies::Die()
{
	if(m_name=="Aquiles")
	{
		cout << "My heel..." << endl;
	}
	else if(m_name=="Medusa")
	{
		cout << "Dying snake noises.. " << endl;
	}
	else if (m_name == "Hercules")
	{
		cout << "Mortality..." << endl;
	}
	else if (m_name == "Zeus")
	{
		cout << "You are boring as hell, not even worth killing... " << endl;
	}
}

void Enemies::Attack()
{
	if (m_name == "Aquiles")
	{
		cout << "HAH!" << endl;
	}
	else if (m_name == "Medusa")
	{
		cout << "Angry snake noises.. " << endl;
	}
	else if (m_name == "Hercules")
	{
		if (isMortal == false)
		{
			cout << "You cant win" << endl;
		}
		else if (isMortal==true)
		{
			cout << "FUU!" << endl;
		}
	}
	else if (m_name == "Zeus")
	{
		cout << "Amuse me!" << endl;
	}
}
