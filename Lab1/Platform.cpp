#include "Platform.h"

Platform::Platform(string name, string manufacturer)
{
	m_name = name;
	m_manufacturer = manufacturer;
}

void Platform::setName(string name)
{
	m_name = name;
}

string Platform::getName()
{
	return m_name;
}

void Platform::setManufacturer(string manufacturer)
{
	m_manufacturer = manufacturer;
}

string Platform::getManufacturer()
{
		return m_manufacturer;
}

void Platform::setGames(string name, string p, string f, int i)
{
	m_games[i].setName(name);
	m_games[i].setPublisher(p);
	m_games[i].setDeveloper(f);
}

void Platform::displayGames()
{
	for (int i = 0; i < 5; ++i)
	{
		cout << i << "= Name:" << m_games[i].getName() << endl << "Developer: " << m_games[i].getDeveloper() << endl << "Publisher: " << m_games[i].getPublisher() << endl << endl;
	}
}
