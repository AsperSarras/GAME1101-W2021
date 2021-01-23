#include <iostream>
#include <string>
using namespace std;

class Achievements
{
private:
	string m_title;
	string m_description;
	int m_score;
public:
	Achievements()
	{
		m_title = "";
		m_description = "";
		m_score = 0;
	}
	Achievements(string title, string description, int score)
	{
		m_title = title;
		m_description = description;
		m_score = score;
	}

	void setTitle(string title) {
		m_title = title;
	}
	string getTitle() {
		return m_title;
	}

	void setDescription(string description) {
		m_description = description;
	}
	string getDescription() {
		return m_description;
	}

	void setScore(int score) {
		m_score = score;
	}
	int getScore() {
		return m_score;
	}
};

class Games /*: public Achievements*/
{
private:
	string m_name;
	string m_publisher;
	string m_developer;
	int m_pAsize;
	Achievements* m_pAchievements;
public:
	Games()
	{
		m_name = "";
		m_publisher = "";
		m_developer = "";
	}
	Games(string name, string publisher, string developer)
	{
		m_name = name;
		m_publisher = publisher;
		m_developer = developer;
	}

	void setName(string name) {
		m_name = name;
	}
	string getName() {
		return m_name;
	}

	void setPublisher(string publisher) {
		m_publisher = publisher;
	}
	string getPublisher() {
		return m_publisher;
	}

	void setDeveloper(string developer) {
		m_developer = developer;
	}
	string getDeveloper() {
		return m_developer;
	}

	void setAsize(int size){
		m_pAsize = size;
	}

	void inputAchievement()
	{
		
		m_pAchievements = new Achievements[m_pAsize];

		for (int i = 0; i < m_pAsize; ++i)
		{
			string title;
			string description;
			int score;

			cout << "Input a title for the achievement" << endl;
			cin >> title;
			m_pAchievements[i].setTitle(title);
			
			cout << "Input a description for the achievement" << endl;
			cin >> description;
			m_pAchievements[i].setDescription(description);
			
			cout << "Input a score value for the achievement" << endl;
			cin >> score;
			m_pAchievements[i].setScore(score);
		}
	}

	void dislayAchievement()
{
		for (int i = 0; i < m_pAsize; ++i)
		{
			cout << m_pAchievements[i].getTitle() <<endl<< m_pAchievements[i].getDescription()<< endl<< m_pAchievements[i].getScore()<<endl<<endl;
		}
}
	
};

class Platform
{
private:
	string m_name;
	string m_manufacturer;
	
	/*int m_pGsize = 5;*/
public:
	int m_pSize;
	Games m_games[5];
	Platform()
	{
		m_name = "";
		m_manufacturer = "";
		//m_pGames[] = nullptr;
	}

	Platform(string name, string manufacturer/*, Games* games*/)
	{
		m_name = name;
		m_manufacturer = manufacturer;
		//m_pGames = games;
	}

	void setName(string name) {
		m_name = name;
	}
	string getName() {
		return m_name;
	}

	void setManufacturer(string manufacturer) {
		m_manufacturer = manufacturer;
	}
	string getManufacturer() {
		return m_manufacturer;
	}

	void setGames(string name,string p,string f,int i)
	{
		m_games[i].setName(name);
		m_games[i].setPublisher(p);
		m_games[i].setDeveloper(f);
	}

	void displayGames()
	{
		for (int i = 0; i < 5; ++i)
		{
			cout << i << "= " << m_games[i].getName() << endl<< m_games[i].getDeveloper() <<endl<< m_games[i].getPublisher() << endl << endl;
		}
	}
};


int main()
{
	const size_t kSize = 5;
	bool finished = false;
	bool pass = false;
	
	Platform platform[]{ Platform("Ps5","Sony"),Platform("Xbox X","Microsoft"),Platform("Nintendo Switch","Switch") };
		//Playstation games
		platform[0].setGames("Game 1", "P 1", "D 1",0);
		platform[0].setGames("Game 2", "P 2", "D 2",1);
		platform[0].setGames("Game 3", "P 3", "D 3",2);
		platform[0].setGames("Game 4", "P 4", "D 4",3);
		platform[0].setGames("Game 5", "P 5", "D 5",4);
		//Xbox X games
		platform[1].setGames("Game A1", "P 1", "D 1", 0);
		platform[1].setGames("Game 2", "P 2", "D 2", 1);
		platform[1].setGames("Game 3", "P 3", "D 3", 2);
		platform[1].setGames("Game 4", "P 4", "D 4", 3);
		platform[1].setGames("Game 5", "P 5", "D 5", 4);
		//Nintendo Switch games
		platform[2].setGames("Game B1", "P 1", "D 1", 0);
		platform[2].setGames("Game 2", "P 2", "D 2", 1);
		platform[2].setGames("Game 3", "P 3", "D 3", 2);
		platform[2].setGames("Game 4", "P 4", "D 4", 3);
		platform[2].setGames("Game 5", "P 5", "D 5", 4);

		//platform[0].displayGames();

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
						platform[p].displayGames();
						pass = true;
					}
					else if (p == 1)
					{
						platform[p].displayGames();
						pass = true;
					}
					else if (p == 2)
					{
						platform[p].displayGames();
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
				do
				{
					pass = false;
						cout << "0=Exit.\n1=Display Achievements\n2=Create New Achievements" << endl;
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
						else
						{
							cout << "Wrong input" << endl << endl;
						}
				}while (pass==false);
			}
			
		} while (finished == false);
}