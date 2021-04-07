#include <iostream>
#include"StageStack.h"
#include"StageStack.cpp"
#include"Stage.h"
using namespace std;

int main()
{
	StageStack<Stage>StageStack;
	Stage CurrentStage;
	Stage stage1("Stage1");
	Stage stage2("Stage2");
	Stage stage3("Stage3");
	Stage stage4("Stage4");
	
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
					cout << "3=Open Door" << endl;
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

		}
		if ((CurrentStage.getCurrentStage() != "Stage1") && (CurrentStage.getCurrentPos() == "Bottom Center"))
		{
			cout << "3=Go Back" << endl;
			choices = 3;
		}
		cin >> answ;

		if(answ<0||answ>choices)
		{
			cout << "Wrong input";
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
				//Heal
				cout << "Heal" << endl;
			}
			else if (CurrentStage.getCurrentPos() == "Top Center")
			{
				if(CurrentStage.getCurrentStage()=="Stage1")
				{
					if(!stage1DoorOpened)
					{
						//Riddle
						cout << "Riddle" << endl;
						stage1DoorOpened = true;
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
			}
			
			else if (CurrentStage.getCurrentPos() == "Bottom Center")
			{
				if (CurrentStage.getCurrentStage() == "Stage2")
				{
					cout << "Go Back" << endl;
					StageStack.pop();
					CurrentStage = StageStack.top->value;
					CurrentStage.setCurrentPos("Top Center");
				}
			}
		}


		
		
	} while (!Goal);

	
	
	return 0;
}