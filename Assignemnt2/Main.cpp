#include <iostream>


#include "Enemies.h"
#include "PlayerChara.h"
#include"StageStack.h"
#include"StageStack.cpp"
#include"Stage.h"
using namespace std;

int main()
{
	PlayerChara Player(100, 1, 1);
	Enemies Aquiles("Aquiles", 100, 20, 10);//TODO BALANCE
	Enemies Medusa("Medusa", 200, 999, 20);
	Enemies Hercules("Hercules", 300, 30, 999);
	Enemies Zeus("Zeus", 999, 999, 999);
	
	StageStack<Stage>StageStack;
	Stage CurrentStage;
	Stage stage1("Stage1",Aquiles.getName());
	Stage stage2("Stage2",Medusa.getName());
	Stage stage3("Stage3",Hercules.getName());
	Stage stage4("Stage4",Zeus.getName());
	
	StageStack.push(stage1);

	bool stage1BossDefeated = false;
	bool stage1DoorOpened = false;
	bool stage2BossDefeated = false;
	bool stage2DoorOpened = false;
	bool stage3BossDefeated = false;
	bool stage3DoorOpened = false;
	bool stage4BossDefeated = false;
	bool stage4DoorOpened = false;
	bool Goal = false;
	int choices;
	int booringCount = 0;

	CurrentStage = StageStack.top->value;
	CurrentStage.setCurrentPos("Bottom Center");

	do
	{
		int answ;
		cout << "What to do..?\n";
		cout << "0=Inspect Zone" << endl <<
			"1=Move Around" << endl <<
			"2=Check Location" << endl;
		choices = 2;
		if(CurrentStage.getCurrentPos()== "Middle Center")
		{
			cout << "3=Rest" << endl;
			choices = 3;
		}
		if(CurrentStage.getCurrentPos() == "Top Center")
		{
			if(CurrentStage.getCurrentStage()==stage1.getCurrentStage())
			{
				if (!stage1DoorOpened)
				{
					cout << "3=Try Door (Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage1DoorOpened&&!stage1BossDefeated)
				{
					cout << "3=Fight Boss" << endl;
					choices = 3;
				}
				else if (stage1BossDefeated)
				{
					cout << "3=Next Stage" << endl;
					choices = 3;
				}
			}
			else if (CurrentStage.getCurrentStage() == stage2.getCurrentStage())
			{
				if (!stage2DoorOpened)
				{
					cout << "3=Try Door (Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage2DoorOpened && !stage2BossDefeated)
				{
					cout << "3=Fight Boss" << endl;
					choices = 3;
				}
				else if (stage2BossDefeated)
				{
					cout << "3=Next Stage" << endl;
					choices = 3;
				}
			}
			else if (CurrentStage.getCurrentStage() == stage3.getCurrentStage())
			{
				if (!stage3DoorOpened)
				{
					cout << "3=Try Door (Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage3DoorOpened && !stage3BossDefeated)
				{
					cout << "3=Fight Boss" << endl;
					choices = 3;
				}
				else if (stage3BossDefeated)
				{
					cout << "3=Next Stage" << endl;
					choices = 3;
				}
			}
			else if (CurrentStage.getCurrentStage() == stage4.getCurrentStage())
			{
				if (!stage4DoorOpened)
				{
					cout << "3=Try Door (Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage4DoorOpened && !stage4BossDefeated)
				{
					cout << "3=Fight Boss" << endl;
					choices = 3;
				}
				else if (stage4BossDefeated)
				{
					cout << "3=Next Stage" << endl;
					choices = 3;
				}
			}
		}
		if ((CurrentStage.getCurrentStage() != "Stage1") && (CurrentStage.getCurrentPos() == "Bottom Center"))
		{
			cout << "3=Go Back" << endl;
			choices = 3;
		}
		cin >> answ;

		if(answ<0||answ>choices)
		{
			cout << "Wrong input"<<endl;
		}

		else if(answ==0)
		{
			CurrentStage.Interact();
		}
		else if(answ==1)
		{
			if(CurrentStage.getCurrentPos()== "Bottom Center")
			{
				cout << "1=Move Up.\n" <<
					"2=Move Left.\n" <<
					"3=Move Right" << endl;
				choices = 3;
			}
			else if(CurrentStage.getCurrentPos() == "Bottom Left")
			{
				cout << "1=Move Up.\n" <<
					"2=Move Right." << endl;
				choices = 2;
			}
			else if (CurrentStage.getCurrentPos() == "Bottom Right")
			{
				cout << "1=Move Up.\n" <<
					"2=Move Left." << endl;
				choices = 2;
			}
			else if (CurrentStage.getCurrentPos() == "Middle Center")
			{
				cout << "1=Move Up.\n" <<
					"2=Move Left.\n"<<
					"3=Move Right.\n"<<
					"4=Move Down." << endl;
				choices = 4;
			}
			else if (CurrentStage.getCurrentPos() == "Middle Left")
			{
				cout << "1=Move Up.\n" <<
					"2=Move Right.\n" <<
					"3=Move Down." << endl;
				choices = 3;
			}
			else if (CurrentStage.getCurrentPos() == "Middle Right")
			{
				cout << "1=Move Up.\n" <<
					"2=Move Left.\n" <<
					"3=Move Down." << endl;
				choices = 3;
			}
			else if (CurrentStage.getCurrentPos() == "Top Center")
			{
				cout << "1=Move Down.\n" <<
					"2=Move Left.\n" <<
					"3=Move Right" << endl;
				choices = 3;
			}
			else if (CurrentStage.getCurrentPos() == "Top Left")
			{
				cout << "1=Move Down.\n" <<
					"2=Move Right" << endl;
				choices = 2;
			}
			else if (CurrentStage.getCurrentPos() == "Top Right")
			{
				cout << "1=Move Down.\n" <<
					"2=Move Left" << endl;
				choices = 2;
			}

			cin >> answ;
			if (answ<1 || answ>choices)
			{
				cout << "Wrong input";
			}
			else
			{
				CurrentStage.Move(answ);
			}
		}
		else if (answ == 2)
		{
			cout << CurrentStage.getCurrentPos() << endl;
			cout << CurrentStage.getCurrentStage() << endl;
		}
		else if (answ==3)
		{
			if(CurrentStage.getCurrentPos()== "Middle Center")
			{
				Player.setHealth(100);
				cout << "I feel in top condition!" << endl;
			}
			else if (CurrentStage.getCurrentPos() == "Top Center")
			{
				string questionAnsw;
				if(CurrentStage.getCurrentStage()=="Stage1")
				{
					if(!stage1DoorOpened)
					{
						//Riddle
						cout << "Riddle" << endl;
						cin >> questionAnsw;
						if(questionAnsw==CurrentStage.getAnsw())
						{
							cout << "The Door Opened!" << endl;
							stage1DoorOpened = true;
						}
						else
						{
							cout << "Nothing Happened" << endl;
						}
					}
					else if(stage1DoorOpened&&!stage1BossDefeated)
					{
						//Fight
						cout << "Fight" << endl;
						stage1BossDefeated = true;
					}
					else if(stage1DoorOpened && stage1BossDefeated)
					{
						StageStack.push(stage2);
						CurrentStage = StageStack.top->value;
						CurrentStage.setCurrentPos("Bottom Center");
					}
				}
				else if (CurrentStage.getCurrentStage() == "Stage2")
				{
					if (!stage2DoorOpened)
					{
						//Riddle
						cout << "Riddle" << endl;
						cin >> questionAnsw;
						if (questionAnsw == CurrentStage.getAnsw())
						{
							cout << "The Door Opened!" << endl;
							stage2DoorOpened = true;
						}
						else
						{
							cout << "Nothing Happened" << endl;
						}
					}
					else if (stage2DoorOpened && !stage2BossDefeated)
					{
						//Fight
						cout << "Fight" << endl;
						stage2BossDefeated = true;
					}
					else if (stage2DoorOpened && stage2BossDefeated)
					{
						StageStack.push(stage3);
						CurrentStage = StageStack.top->value;
						CurrentStage.setCurrentPos("Bottom Center");
					}
				}
				else if (CurrentStage.getCurrentStage() == "Stage3")
				{
					if (!stage3DoorOpened)
					{
						//Riddle
						cout << "Riddle" << endl;
						cin >> questionAnsw;
						if (questionAnsw == CurrentStage.getAnsw())
						{
							cout << "The Door Opened!" << endl;
							stage3DoorOpened = true;
						}
						else
						{
							cout << "Nothing Happened" << endl;
						}
					}
					else if (stage3DoorOpened && !stage3BossDefeated)
					{
						//Fight
						cout << "Fight" << endl;
						stage3BossDefeated = true;
					}
					else if (stage3DoorOpened && stage3BossDefeated)
					{
						StageStack.push(stage4);
						CurrentStage = StageStack.top->value;
						CurrentStage.setCurrentPos("Bottom Center");
					}
				}
				else if (CurrentStage.getCurrentStage() == "Stage4")
				{
					if (!stage4DoorOpened)
					{
						//Riddle
						cout << "Riddle" << endl;
						cin >> questionAnsw;
						if (questionAnsw == CurrentStage.getAnsw())
						{
							cout << "The Door Opened!" << endl;
							stage4DoorOpened = true;
						}
						else
						{
							cout << "Nothing Happened" << endl;
						}
					}
					else if (stage4DoorOpened && !stage4BossDefeated)
					{
						//Fight
						cout << "Fight" << endl;
						stage4BossDefeated = true;
					}
					else if (stage4DoorOpened && stage4BossDefeated)
					{
						Goal = true;
					}
				}
			}	
			else if (CurrentStage.getCurrentPos() == "Bottom Center")
			{
				if (CurrentStage.getCurrentStage() != stage1.getCurrentStage())
				{
					cout << "Go Back" << endl;
					StageStack.pop();
					CurrentStage = StageStack.top->value;
					CurrentStage.setCurrentPos("Top Center");
				}
			}
		}
	} while (!Goal);

	cout << "Win";
	
	return 0;
}