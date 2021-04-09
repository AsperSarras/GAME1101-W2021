#include "Stage.h"
#include<iostream>
using namespace std;

Stage::Stage(string stage, string answ)
{
	m_stage = stage;
	m_answ = answ;
}

void Stage::setCurrentPos(string pos)
{
	m_CurrentPos = pos;
}

string Stage::getCurrentPos()
{
	return m_CurrentPos;
}

string Stage::getCurrentStage()
{
	return m_stage;
}

string Stage::getAnsw()
{
	return m_answ;
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

void Stage::Interact()
{
	if (m_CurrentPos == m_BotCenter)
	{
		if (m_stage == "Stage1")
		{
			cout << "The Letter says: " << endl <<
				"Inspect the rooms, collect items and solve the door riddle in order to face" << endl <<
				"a mythological entity, if you manage to overcome the four rooms you will be able" << endl <<
				"to get back. You can rest back to health on the center of each stage." << endl <<
				"You have 130 Min. If you run out of time you will be destroyed. Go AMUSE THE GODS!" << endl <<
				"                                                                              Zeus" << endl;
		}
		else
		{
			cout << "The stairs to the past room are here...\n";
		}
	}
	else if (m_CurrentPos == m_BotLeft)
	{
		if (m_stage == "Stage1")
		{
			cout << "There is a map of greece on the wall..\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "There is a stone statue of a man.. real size even..\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "There is a book page that says: A Roman Demigod born as a Human\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "Nothing here..\n";
		}
	}
	else if (m_CurrentPos == m_BotRight)
	{
		if (m_stage == "Stage1")
		{
			cout << "There is a photo of a baby being washed on a pond\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "There is a stone statue of a man.. real size even..\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "Nothing here..\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "Nothing here..\n";
		}
	}
	else if (m_CurrentPos == m_MidCenter)
	{
		cout << "This is a good place to rest, I can heal but I will lose time.\n";
	}
	else if (m_CurrentPos == m_MidLeft)
	{
		if (m_stage == "Stage1")
		{
			cout << "Nothing here..\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "Nothing here...\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "Nothing here...\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "Nothing here..\n";
		}
	}
	else if (m_CurrentPos == m_MidRight)
	{
		if (m_stage == "Stage1")
		{
			cout << "Nothing here..\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "There is a Snake Statue, it Says: Never look the eyes..\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "There is a book named: The 12 Labours.\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "Nothing here..\n";
		}
	}
	else if (m_CurrentPos == m_TopCenter)
	{
		if (m_stage == "Stage1")
		{
			cout << "The doors says: Hero Name.\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "The doors says: Name of the Mythical Beast.\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "The doors says: Roman Hero Name.\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "The one that Signed the First floor Letter.\n";
		}
	}
	else if (m_CurrentPos == m_TopLeft)
	{
		if (m_stage == "Stage1")
		{
			cout << "There is a giant wood horse..\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "There is a stone statue of a man.. real size even..\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "Nothing here..\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "Nothing here..\n";
		}
	}
	else if (m_CurrentPos == m_TopRight)
	{
		if (m_stage == "Stage1")
		{
			cout << "There is a photo of a arrow piercing a heel...Interesting..\n";
		}
		else if (m_stage == "Stage2")
		{
			cout << "There is a stone statue of a man.. real size even..\n";
		}
		else if (m_stage == "Stage3")
		{
			cout << "Legends said he was human on even turns.. What?\n";
		}
		else if (m_stage == "Stage4")
		{
			cout << "Nothing here..\n";
		}
	}
}
