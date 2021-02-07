#include <iostream>
#include <string>

#include "Barbarian.h"
#include "Character.h"
#include "Paladin.h"
#include "Warrior.h"

using namespace std;

int main()
{
	const int maxChar = 10;
	int choice = 0;
	Character* createdArr[maxChar];
	int charIndex = 0;
	bool end = false;

	Character* charArr[3] =
	{
	new Paladin("Uther",50,"Sir",30),
	new Barbarian("Dave",50,"The Barbarian",10),
	new Warrior ("Lee",50,"Mercenary",-10)
	};
	charArr[0]->setWeapon("Sword", "A short sword, also practical for defense uses.", 2, 0);
	charArr[1]->setWeapon("Axe", "A heavy axe, its weight helps to maximize the damage but might left your defense wide open.", 6, 1);
	charArr[2]->setWeapon("Spear", "A sharp fast spear, the more you stab the easier it is to aim better.", 4, 2);

	do
	{
		cout << "Welcome to the character creation menu, What would you like to do?:" << endl <<
			"1=Create New Character(Max 10 Characters).\n2=View Created Characters.\n3=Delete A Character.\n0=Exit Menu." << endl;

		cin >> choice;
		if (choice == 1)
		{
			choice = 0;
			if (charIndex == 10)
			{
				cout << "Max amount of Characters Created, Please delete one if you wish to continue.\n" << endl;
			}
			else {
				cout << "Displaying New Characters Data:\n" << endl;
				for (int i = 0; i < 3; ++i)
				{
					cout << (i + 1) << "= ";
					charArr[i]->displayInfo();
					cout << endl;
				}
				cout << "0= Return to Character Creation menu." << endl;
				cin >> choice;
			}
			if (choice == 1)
			{
				cout << "Paladin Created!" << endl;
				createdArr[charIndex] = charArr[0];
				charIndex++;
			}
			else if (choice == 2)
			{
				cout << "Barbarian Created!" << endl;
				createdArr[charIndex] = charArr[1];
				charIndex++;
			}
			else if (choice == 3)
			{
				cout << "Warrior Created!" << endl;
				createdArr[charIndex] = charArr[2];
				charIndex++;
			}
			else if ((choice<0)||(choice>3))
			{
				cout << "\nWrong Input.\n\n" << endl;
			}
		}
		else if (choice==2)
		{
			if(charIndex==0)
			{
				cout << "No Character Created\n\n";
			}
			else
			{
				cout << "Displaying Created Characters:\n\n" << endl;
				for (int i = 0; i < charIndex; ++i)
				{
					createdArr[i]->displayInfo();
					cout << endl;
				}
			}
		}
		else if (choice==3)
		{
			if (charIndex == 0)
			{
				cout << "No Character Created\n\n";
			}
			else
			{
				choice = 0;
				cout << "Which Character do you wish to delete?\n";
				for (int i = 0; i < charIndex; ++i)
				{
					cout << i << "= ";
					createdArr[i]->displayInfo();
					cout << endl;
				}
				cin >> choice;
				if ((choice >= charIndex)||(choice<0))
				{
					cout << "Wrong input\n\n";
				}
				else
				{
					for (int i=choice; i < charIndex-1; ++i)
					{
						createdArr[i] = createdArr[i+1];
					}
					if (charIndex==10)
					{
						createdArr[9] = nullptr;
					}
					charIndex = charIndex - 1;
				}
			}
		}
		else if (choice==0)
		{
			cout << "Exiting Character Creation Menu.\n";
			end = true;
		}
		else
		{
			cout << "\nWrong Input.\n" << endl;
		}
	} while (end != true);
	
	return 0;
}