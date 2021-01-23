#include "Games.h"

Games::Games(string name, string publisher, string developer)
{
	m_name = name;
	m_publisher = publisher;
	m_developer = developer;
}

void Games::setName(string name)
{
	m_name = name;
}

string Games::getName()
{
		return m_name;
}

void Games::setPublisher(string publisher)
{
	m_publisher = publisher;
}

string Games::getPublisher()
{
	return m_publisher;
}

void Games::setDeveloper(string developer)
{
	m_developer = developer;
}

string Games::getDeveloper()
{
	return m_developer;
}

void Games::setAsize(int size)
{
	m_pAsize = size;
}

void Games::inputAchievement()
{

	m_pAchievements = new Achievements[m_pAsize];

	for (int i = 0; i < m_pAsize; ++i)
	{
		string title;
		string description;
		int score;

		cout << "Input a title for the achievement" << endl;
		getline(cin >> ws, title);
		m_pAchievements[i].setTitle(title);

		cout << "Input a description for the achievement" << endl;
		getline(cin >> ws, description);
		m_pAchievements[i].setDescription(description);

		cout << "Input a score value for the achievement" << endl;
		cin >> score;
		m_pAchievements[i].setScore(score);
		empty = false;
	}
}

void Games::dislayAchievement()
{
	if (empty == true)
	{
		cout << "No Achievements" << endl;
	}
	else if (empty == false) {
		for (int i = 0; i < m_pAsize; ++i)
		{
			cout << "Title: " << m_pAchievements[i].getTitle() << endl << "Description: " << m_pAchievements[i].getDescription() << endl << "Score: " << m_pAchievements[i].getScore() << endl << endl;

		}
	}
}

