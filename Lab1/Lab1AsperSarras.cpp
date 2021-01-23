#include <iostream>
#include <string>
#include <sstream>

#include "Platform.h"
#include "Games.h"
#include "Achievements.h"
using namespace std;

int main()
{
	const size_t kSize = 5;
	bool finished = false;
	bool pass = false;
	
	Platform platform[]{ Platform("Ps5","Sony"),Platform("Xbox X","Microsoft"),Platform("Nintendo Switch","Nintendo") };
		//Playstation games
		platform[0].setGames("Resident Evil Village", "Capcom", "Capcom",0);
		platform[0].setGames("Demon's Souls", "PlayStation Studios", "Bluepoint Games",1);
		platform[0].setGames("Hitman 3", "Io Interactive", "Io Interactive",2);
		platform[0].setGames("Assassin's Creed Valhalla", "Ubisoft", "Ubisoft Montreal",3);
		platform[0].setGames("Yakuza: Like a Dragon", "Sega", "Ryu ga Gotoku Studios",4);
		//Xbox X games
		platform[1].setGames("Call of Duty : Black Ops Cold War", "Activision", "Treyarch", 0);
		platform[1].setGames("Immortals Fenyx Rising", "Ubisoft", "Ubisoft Quebec", 1);
		platform[1].setGames("The Medium", "Bloober Team", "Bloober Team", 2);
		platform[1].setGames("Grand Theft Auto V", "Rockstar Games", "Rockstar North", 3);
		platform[1].setGames("Perfect Dark", "Xbox Game Studios", "The Initiative", 4);
		//Nintendo Switch games
		platform[2].setGames("The Legend of Zelda: Breath of the Wild", "Nintendo", "Nintendo", 0);
		platform[2].setGames("Pokemon Sword", "Nintendo", "Nintendo", 1);
		platform[2].setGames("Super Smash Bros. Ultimate", "Nintendo", "Nintendo", 2);
		platform[2].setGames("Animal Crossing: New Horizons", "Nintendo", "Nintendo", 3);
		platform[2].setGames("Fire Emblem: Three Houses", "Nintendo", "Nintendo", 4);

		do {
			int a, size,p;

			cout << "What would you like to do??" << endl;
			cout << "0=End Program\n1=Display Platforms" << endl;
			cin >> a;
			
			if (a==0)
			{
				finished = true;
			}

			else if (a == 1)
			{
				
					cout << "Displaying Platforms:" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << i << "= Name: " << platform[i].getName() << " by " << platform[i].getManufacturer() << endl << endl;
					}
					cout << "3= Exit" << endl;
					cout << "Choose a Platform to see the games" << endl;
				do
				{
					cin >> p;

					if (p == 0)
					{
						pass = true;
					}
					else if (p == 1)
					{
						pass = true;
					}
					else if (p == 2)
					{
						pass = true;
					}
					else if (p == 3)
					{
						pass = true;
					}
					else
					{
						cout << "Wrong input" << endl << endl;
					}
				} while (pass == false);

				if ((p == 0) || (p == 1) || (p == 2))
				{
					do
					{
						pass = false;
						cout << "\nWhat would you like to do?\n0=Exit.\n1=Display Achievements\n2=Create New Achievements" << endl<<endl;
						platform[p].displayGames();
						cin >> a;
						if (a == 0)
						{
							pass = true;
						}
						else if (a == 1)
						{
							cout << "Choose Game" << endl;
							cin >> a;
							platform[p].m_games[a].dislayAchievement();
						}
						else if (a == 2)
						{
							cout << "Choose Game" << endl;
							cin >> a;
							cout << "How many achievements you would like to create?" << endl;
							cin >> size;
							platform[p].m_games[a].setAsize(size);
							platform[p].m_games[a].inputAchievement();
						}
						else if (!(a == 0) || !(a == 1) || !(a == 2))
						{
							cout << "Wrong input" << endl << endl;
						}
					} while (pass == false);
				}
			}
			
		} while (finished == false);
}