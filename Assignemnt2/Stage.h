#pragma once
#include <string>
using namespace std;

class Stage
{
private:
	string m_CurrentPos;
	string m_TopLeft = "Top Left", m_TopCenter ="Top Center", m_TopRight = "Top Right",
		m_MidLeft = "Middle Left", m_MidCenter = "Middle Center", m_MidRight = "Middle Right",
		m_BotLeft = "Bottom Left", m_BotCenter = "Bottom Center", m_BotRight = "Bottom Right";
public:
	Stage() = default;

	void setCurrentPos(string pos);
	string getCurrentPos();
	string getTopCenter();
	string getBotCenter();
	void Move(int i);
	virtual void Interact()=0;
};
