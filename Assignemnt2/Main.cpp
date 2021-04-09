#include <iostream>

#include <fstream>
#include "Enemies.h"
#include "PlayerChara.h"
#include"StageStack.h"
#include"StageStack.cpp"
#include"Stage.h"
using namespace std;

void Fight(PlayerChara &pl,Enemies &en);

int main()
{
	//Characters
	PlayerChara Player(100, 1, 1);
	Enemies Aquiles("Aquiles", 100, 51, 13);
	Enemies Medusa("Medusa", 200, 999, 10);
	Enemies Hercules("Hercules", 300, 98, 999);
	Enemies Zeus("Zeus", 999, 999, 999);
	//Stage Related
	StageStack<Stage>StageStack;
	Stage CurrentStage;
	Stage stage1("Stage1",Aquiles.getName());
	Stage stage2("Stage2",Medusa.getName());
	Stage stage3("Stage3",Hercules.getName());
	Stage stage4("Stage4",Zeus.getName());
	//Stage 1 Set Up
	StageStack.push(stage1);
	CurrentStage = StageStack.top->value;
	CurrentStage.setCurrentPos("Bottom Center");
	//Files Related
	fstream opening;
	fstream deadEnding;
	fstream timeEnding;
	fstream winEnding;

	//Others
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
	string input;
	int time=0;
	int timeLimit = 130;
	
	// Opening
	opening.open("opening.txt", ios::in);
	if (opening.fail())
	{
		cout << "File open error!\n";
		return 1;
	}

	getline(opening, input);
	while(!opening.fail())
	{
		cout << input<<endl;
		getline(opening, input);
	}

	//opening.close();
	system("PAUSE");
	system("CLS");
	
	//Game Loop
	do
	{
		if(time>=timeLimit)
		{
			cout << "Times up.." << endl;
			Goal = true;
		}
		int answ;
		cout << "Time: " << time <<" Min."<< endl;
		cout << "What to do..?\n";
		cout << "0=Inspect Zone(1 Min)" << endl <<
			"1=Move Around(1 Min)" << endl <<
			"2=Check Location(0 Min)" << endl;
		choices = 2;
		if(CurrentStage.getCurrentPos()== "Middle Center")
		{
			cout << "3=Rest(5 Min)" << endl;
			choices = 3;
		}
		if(CurrentStage.getCurrentPos() == "Top Center")
		{
			if(CurrentStage.getCurrentStage()==stage1.getCurrentStage())
			{
				if (!stage1DoorOpened)
				{
					cout << "3=Try Door(5 Min) (Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage1DoorOpened&&!stage1BossDefeated)
				{
					cout << "3=Fight Boss(5 Min)" << endl;
					choices = 3;
				}
				else if (stage1BossDefeated)
				{
					cout << "3=Next Stage(1 Min)" << endl;
					choices = 3;
				}
			}
			else if (CurrentStage.getCurrentStage() == stage2.getCurrentStage())
			{
				if (!stage2DoorOpened)
				{
					cout << "3=Try Door (5 Min)(Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage2DoorOpened && !stage2BossDefeated)
				{
					cout << "3=Fight Boss (5 Min)" << endl;
					choices = 3;
				}
				else if (stage2BossDefeated)
				{
					cout << "3=Next Stage (1 Min)" << endl;
					choices = 3;
				}
			}
			else if (CurrentStage.getCurrentStage() == stage3.getCurrentStage())
			{
				if (!stage3DoorOpened)
				{
					cout << "3=Try Door (5 Min)(Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage3DoorOpened && !stage3BossDefeated)
				{
					cout << "3=Fight Boss (5 Min)" << endl;
					choices = 3;
				}
				else if (stage3BossDefeated)
				{
					cout << "3=Next Stage (1 Min)" << endl;
					choices = 3;
				}
			}
			else if (CurrentStage.getCurrentStage() == stage4.getCurrentStage())
			{
				if (!stage4DoorOpened)
				{
					cout << "3=Try Door (5 Min)(Inspect to read the Question)" << endl;
					choices = 3;
				}
				else if (stage4DoorOpened && !stage4BossDefeated)
				{
					cout << "3=Fight Boss (5 Min)" << endl;
					choices = 3;
				}
				else if (stage4BossDefeated)
				{
					cout << "3=Next Stage (1 Min)" << endl;
					choices = 3;
				}
			}
		}
		if ((CurrentStage.getCurrentStage() != "Stage1") && (CurrentStage.getCurrentPos() == "Bottom Center"))
		{
			cout << "3=Go Back (1 Min)" << endl;
			choices = 3;
		}
		cin >> answ;

		if(answ<0||answ>choices)
		{
			cout << "Wrong input"<<endl;
		}

		else if(answ==0)
		{
			time++;
			CurrentStage.Interact();
			if(CurrentStage.getCurrentStage()=="Stage1")
			{
				if(CurrentStage.getCurrentPos()== "Top Right")
				{
					if(Player.knowsWeakPoint==false)
					{
						cout << "Might add this ancestral move to my arsenal!" << endl;
						cout << "Learned Heel strike!" << endl;
						Player.knowsWeakPoint = true;
					}
				}
				if(CurrentStage.getCurrentPos()== "Middle Right")
				{
					if(Player.getDefense()==1)
					{
						cout << "...Oh is that a shield?!" << endl;
						cout << "Got a Shield!" << endl;
						Player.setDefense(Player.getDefense() + 25);
					}
				}
				if (CurrentStage.getCurrentPos() == "Middle Left")
				{
					if (Player.getAttack() == 1)
					{
						cout << "...Oh is that a sword?!" << endl;
						cout << "Got a Sword!" << endl;
						Player.setAttack(Player.getAttack() + 29);
					}
				}
			}
			if(CurrentStage.getCurrentStage()=="Stage2")
			{
				if(CurrentStage.getCurrentPos()== "Middle Left")
				{
					if(Player.hasMirror==false)
					{
						cout << "Looking better it seems there is a little mirror on the floor" << endl;
						cout << "Got Mirror!" << endl;
						Player.hasMirror = true;
					}
				}
			}
			if(CurrentStage.getCurrentStage()=="Stage3")
			{
				if (CurrentStage.getCurrentPos() == "Top Left")
				{
					if (Player.getDefense() == 26)	
					{
						cout << "That there looks like a chain mail.." << endl;
						cout << "Got a Chain mail!" << endl;
						Player.setDefense(Player.getDefense() + 24);
					}
				}
				if (CurrentStage.getCurrentPos() == "Bottom Right")
				{
					if (Player.getAttack() == 30)
					{
						cout << "Wait! is that a Legendary sword?!" << endl;
						cout << "Got the Legendary Sword!" << endl;
						Player.setAttack(Player.getAttack() + 20);
						Player.hasLegendarySword = true;
					}
				}
			}
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
				time++;
				CurrentStage.Move(answ);
			}
		}
		else if (answ == 2)
		{
			cout << "Im Currently on "<<CurrentStage.getCurrentPos() << " at the "<< 
			CurrentStage.getCurrentStage() << endl;
		}
		else if (answ==3)
		{
			if(CurrentStage.getCurrentPos()== "Middle Center")
			{
				time += 5;
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
						cout << "What is the Hero name..?" << endl;
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
						time += 5;
					}
					else if(stage1DoorOpened&&!stage1BossDefeated)
					{
						//Fight
						Fight(Player, Aquiles);
						if(Player.Alive==true)
						{
							stage1BossDefeated = true;
							time += 5;
						}
						else if (Player.Alive == false)
						{
							Goal = true;
						}
					}
					else if(stage1DoorOpened && stage1BossDefeated)
					{
						time++;
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
						cout << "What is the Mythical beast name..?" << endl;
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
						time += 5;
					}
					else if (stage2DoorOpened && !stage2BossDefeated)
					{
						//Fight
						Fight(Player, Medusa);
						if (Player.Alive == true)
						{
							stage2BossDefeated = true;
							time += 5;
						}
						else if (Player.Alive == false)
						{
							Goal = true;
						}
					}
					else if (stage2DoorOpened && stage2BossDefeated)
					{
						time++;
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
						cout << "What is the Roman Hero name..?" << endl;
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
						time += 5;
					}
					else if (stage3DoorOpened && !stage3BossDefeated)
					{
						//Fight
						Fight(Player, Hercules);
						if (Player.Alive == true)
						{
							stage3BossDefeated = true;
							time += 5;
						}
						else if (Player.Alive == false)
						{
							Goal = true;
						}
					}
					else if (stage3DoorOpened && stage3BossDefeated)
					{
						time++;
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
						cout << "Who Signed the letter from the first floor..?" << endl;
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
						time += 5;
					}
					else if (stage4DoorOpened && !stage4BossDefeated)
					{
						//Fight
						Fight(Player, Zeus);
						if (Player.Alive == true)
						{
							stage4BossDefeated = true;
							time += 5;
						}
						else if (Player.Alive == false)
						{
							Goal = true;
						}
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
		system("PAUSE");
		system("CLS");
	} while (!Goal);

	if(Player.Alive==false)
	{
		deadEnding.open("DeadEnding.txt", ios::in);
		if (deadEnding.fail())
		{
			cout << "File open error!\n";
			return 1;
		}

		getline(deadEnding, input);
		while (!deadEnding.fail())
		{
			cout << input << endl;
			getline(deadEnding, input);
		}

		deadEnding.close();
	}
	else if(time>=timeLimit)
	{
		timeEnding.open("TimeEnding.txt", ios::in);
		if (timeEnding.fail())
		{
			cout << "File open error!\n";
			return 1;
		}

		getline(timeEnding, input);
		while (!timeEnding.fail())
		{
			cout << input << endl;
			getline(timeEnding, input);
		}

		timeEnding.close();
	}
	else
	{
		winEnding.open("WinEnding.txt", ios::in);
		if (winEnding.fail())
		{
			cout << "File open error!\n";
			return 1;
		}

		getline(winEnding, input);
		while (!winEnding.fail())
		{
			cout << input << endl;
			getline(winEnding, input);
		}

		winEnding.close();
	}
	
	return 0;
}

void Fight(PlayerChara &pl,Enemies &en)
{
	bool yourTurn = true;
	bool turnAction = false;
	bool end = false;
	int answ;
	int choices=2;
	int zeusCount = 0;
	int booringCount = 0;
	int flinched = 0;
	int petrified = 0;
	int damage;
	int turn = 0;

	cout << "The mighty " << en.getName() << " appears in your way.." << endl;

	do
	{
		if (yourTurn==true)
		{
			do
			{
				cout <<"Turn: " << turn << endl;
				pl.isDefending = false;
				pl.isUsingMirror = false;
				turnAction = false;
				cout << "What to do..." << endl;
				cout << "0=Do Nothing.\n1=Attack.\n2=Defend." << endl;
				if (pl.knowsWeakPoint == true)
				{
					cout << "3=Hit the heel." << endl;
					choices = 3;
				}
				if (pl.hasMirror == true)
				{
					cout << "4=Use Mirror.." << endl;
					choices = 4;
				}
				cin >> answ;
				if (answ<0 || answ>choices)
				{
					cout << "Wrong input" << endl;
				}
				else
				{
					turnAction = true;
				}
			} while (turnAction == false);
			//Calculation
			if (answ==0)
			{
				pl.DoNothing();
				if(en.getName()=="Zeus")
				{
					booringCount++;
				}
			}
			else if(answ==1)
			{
				pl.Attack();

				if(en.getName()=="Zeus")
				{
					cout << "It did nothing..." << endl;
				}
				else if (en.getName() == "Hercules")
				{
					if (pl.hasLegendarySword == true)
					{
						if ((en.isMortal == false) && (en.isFlinched == false))
						{
							cout << "It did nothing..." << endl;
						}
						else
						{
							damage = pl.getAttack();
							if (damage < 0)
							{
								damage = 1;
							}
							en.setHealth(en.getHealth() - damage);
							if(flinched==0)
							{
								flinched = 1;
							}
							en.isFlinched = true;
							cout << "You made " << damage << " Damage, Hercules got flinched!" << endl;
						}
					}
					else
					{
						cout << "It did nothing..." << endl;
					}
				}
				else
				{
					damage = pl.getAttack() - en.getDefense();
					if (damage < 0)
					{
						damage = 1;
					}
					en.setHealth(en.getHealth() - damage);
					cout << "You made " << damage << " Damage." << endl;
				}
			}
			else if(answ==2)
			{
				pl.Defend();
				pl.isDefending = true;
			}
			else if(answ==3)
			{
				pl.Attack();
				if(en.getName()=="Medusa")
				{
					cout << "But snakes dont have heels daa.." << endl;
				}
				else
				{
					cout << "and manage to hit the heel!" << endl;
				}
				if(en.getName()=="Aquiles")
				{
					damage = pl.getAttack() - en.getDefense();
					damage = damage * 2;
					en.setHealth(en.getHealth() - damage);
					cout << "You made " << damage << " Damage. It seems it was super effective" << endl;
				}
				else if(en.getName()=="Medusa")
				{
					damage = 0;
					cout << "You made " << damage << " Damage. Not your smartest idea.." << endl;
				}
				else if (en.getName() == "Zeus")
				{
					cout << "It did nothing..." << endl;
				}
				else if (en.getName() == "Hercules")
				{
					if (en.isMortal == false)
					{
						cout << "It did nothing..." << endl;
					}
					else if (en.isMortal == true)
					{
						damage = pl.getAttack() - en.getDefense();
						damage = damage / 2;
						en.setHealth(en.getHealth() - damage);
						cout << "You made " << damage << " Damage. Seems it was not that effective.." << endl;
					}
				}
			}
			else if(answ==4)
			{
				pl.UseMirror();
				pl.isUsingMirror = true;
			}
		}
		cout << "Your health=" << pl.getHealth() << endl << en.getName() << " health=" << en.getHealth() << endl;;
		if(en.getHealth()<=0)
		{
			en.Die();
		}
		yourTurn = false;
		if (en.Alive == true)
		{
			if (yourTurn == false)
			{
				cout << en.getName() << " is preparing an attack!" << endl;
				if (en.getName() == "Zeus")
				{
					if (zeusCount == 3)
					{
						cout << "You were fun for a time.." << endl;
						pl.setHealth(0);
					}
					else if (booringCount==3)
					{
						en.Die();
						end = true;
					}
					else
					{
						en.Attack();
						pl.setHealth(1);
						zeusCount++;
					}
				}
				else if(en.getName()=="Medusa")
				{
					if(en.isPetrified==true)
					{
						cout << "She is still petrified!" << endl;
					}
					else if (pl.isUsingMirror == true)
					{
						en.Attack();
						cout << "She got petrified herself!" << endl;
						en.isPetrified = true;
						petrified = 5;
					}
					else
					{
						en.Attack();
						cout << "You got petrified like a statue.. damn.." << endl;
						pl.setHealth(0);
					}
					
				}
				else if((en.getName()=="Hercules")&&(en.isFlinched==true))
				{
					cout << "He is flinched! this is my chance!" << endl;
				}
				else if(pl.isDefending)
				{
					en.Attack();
					damage = en.getAttack() - pl.getDefense();
					damage = damage / 2;
					pl.setHealth(pl.getHealth() - damage);
					cout << "You got " << damage << " Damage." << endl;
				}
				else
				{
					en.Attack();
					damage = en.getAttack() - pl.getDefense();
					pl.setHealth(pl.getHealth() - damage);
					cout << "You got " << damage << " Damage." << endl;
				}
			}
		}
		cout << "Your health=" << pl.getHealth() << endl << en.getName() << " health=" << en.getHealth() << endl;
		
		if(pl.getHealth()<=0)
		{
			pl.Die();
		}
		if (en.getName() != "Zeus")
		{
			if (en.Alive == false)
			{
				cout << "You manage to defeat it!" << endl;
				end = true;
			}
		}
		if(pl.Alive==false)
		{
			cout << "You died.." << endl;
			end = true;
		}
		if(en.isFlinched==true)
		{
			flinched--;
			if(flinched==0)
			{
				en.isFlinched = false;
				cout << en.getName() << " is no longer flinched!" << endl;
			}
		}
		if (en.isPetrified == true)
		{
			petrified--;
			if (petrified == 0)
			{
				en.isPetrified = false;
				cout << en.getName() << " is no longer Petrified!" << endl;
			}
		}
		turn++;
		if (en.getName() == "Hercules")
		{
			if (turn % 2 == 0)
			{
				en.isMortal = true;
			}
			else
			{
				en.isMortal = false;
			}
		}
		yourTurn = true;
		system("PAUSE");
		system("CLS");
	} while (end == false);
}
