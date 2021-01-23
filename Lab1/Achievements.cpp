#include "Achievements.h"

Achievements::Achievements(string title, string description, int score)
{
	m_title = title;
	m_description = description;
	m_score = score;
}

void Achievements::setTitle(string title)
{
	m_title = title;
}

string Achievements::getTitle()
{
	return m_title;
}

void Achievements::setDescription(string description)
{
	m_description = description;
}

string Achievements::getDescription()
{
	return m_description;
}

void Achievements::setScore(int score)
{
	m_score = score;
}

int Achievements::getScore()
{
	return m_score;
}