#pragma once
#include <string>
using namespace std;


class Stage
{
private:
	string m_stage;
	string m_CurrentPos;
	string m_answ;
	string m_TopLeft = "Top Left",
	m_TopCenter ="Top Center",
	m_TopRight = "Top Right",
		m_MidLeft = "Middle Left",
	m_MidCenter = "Middle Center",
	m_MidRight = "Middle Right",
		m_BotLeft = "Bottom Left",
	m_BotCenter = "Bottom Center",
	m_BotRight = "Bottom Right";
public:
	Stage(){}
	Stage(string stage,string answ);
	void setCurrentPos(string pos);
	string getCurrentPos();
	string getCurrentStage();
	string getAnsw();
	void Move(int i);
	void Interact();
};
