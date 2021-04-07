#include "Stage.h"

void Stage::setCurrentPos(string pos)
{
	m_CurrentPos = pos;
}

string Stage::getCurrentPos()
{
	return m_CurrentPos;
}

string Stage::getTopCenter()
{
	return m_TopCenter;
}

string Stage::getBotCenter()
{
	return m_BotCenter;
}

void Stage::Move(int i)
{
	if (m_CurrentPos == m_BotCenter)
	{
		if (i == 1) { setCurrentPos(m_MidCenter); }
		else if (i == 2) { setCurrentPos(m_BotLeft); }
		else if (i == 3) { setCurrentPos(m_BotRight); }
	}
	else if(m_CurrentPos==m_BotLeft)
	{
		if (i == 1) { setCurrentPos(m_MidLeft); }
		else if (i == 2) { setCurrentPos(m_BotCenter); }
	}
	else if (m_CurrentPos==m_BotRight)
	{
		if (i == 1) { setCurrentPos(m_MidRight); }
		else if (i == 2) { setCurrentPos(m_BotCenter); }
	}
	else if (m_CurrentPos==m_MidCenter)
	{
		if (i == 1) { setCurrentPos(m_TopCenter); }
		else if (i == 2) { setCurrentPos(m_MidLeft); }
		else if (i == 3) { setCurrentPos(m_MidRight); }
		else if (i == 4) { setCurrentPos(m_BotCenter); }
	}
	else if (m_CurrentPos==m_MidLeft)
	{
		if (i == 1) { setCurrentPos(m_TopLeft); }
		else if (i == 2) { setCurrentPos(m_MidCenter); }
		else if (i == 3) { setCurrentPos(m_BotLeft); }
	}
	else if (m_CurrentPos==m_MidRight)
	{
		if (i == 1) { setCurrentPos(m_TopRight); }
		else if (i == 2) { setCurrentPos(m_MidCenter); }
		else if (i == 3) { setCurrentPos(m_BotRight); }
	}
	else if (m_CurrentPos == m_TopCenter)
	{
		if (i == 1) { setCurrentPos(m_MidCenter); }
		else if (i == 2) { setCurrentPos(m_TopLeft); }
		else if (i == 3) { setCurrentPos(m_TopRight); }
	}
	else if (m_CurrentPos==m_TopLeft)
	{
		if (i == 1) { setCurrentPos(m_MidLeft); }
		else if (i == 2) { setCurrentPos(m_TopCenter); }
	}
	else if (m_CurrentPos==m_TopRight)
	{
		if (i == 1) { setCurrentPos(m_MidRight); }
		else if (i == 2) { setCurrentPos(m_TopCenter); }
	}
}
