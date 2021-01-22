#include <iostream>
#include <string>
#include <array>
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
		m_pAsize = 0;
		//m_pAchievements;
	}
	Games(string name, string publisher, string developer, int size)
	{
		m_name = name;
		m_publisher = publisher;
		m_developer = developer;
		m_pAsize = size;
		//m_pAchievements = achievements;
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

	//void setAchievements(Achievements* achievements) {
	//	m_pAchievements = achievements;
	//}
	//Achievements* getAchievements() {
	//	return m_pAchievements;
	//}

	void imputAchievement()
	{
		
		m_pAchievements = new Achievements[m_pAsize];

		for (int i = 0; i < m_pAsize; ++i)
		{
			string title, descr;
			int score;

			cout << "input title" << endl;
			cin >> title;
			cout << "input descr" << endl;
			cin >> descr;
			cout << "input score" << endl;
			cin >> score;
			
			m_pAchievements[m_pAsize].setTitle(title);
			m_pAchievements[m_pAsize].setDescription(descr);
			m_pAchievements[m_pAsize].setScore(score);
		}
	}

	void dislayAchievementa()
{
		m_pAchievements = new Achievements[m_pAsize];

		for (int i = 0; i < m_pAsize; ++i)
		{
			m_pAchievements[m_pAsize].getTitle();
		}
}
	
};


class Platform
{
private:
	string m_name;
	string m_manufacturer;
	Games* m_pGames;
public:
	Platform() 
	{
		m_name = "";
		m_manufacturer = "";
		m_pGames;
	}

	Platform(string name, string manufacturer,Games* games)
	{
		m_name = name;
		m_manufacturer = manufacturer;
		m_pGames = games;
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

};


int main()
{
	const size_t kSize = 5;
	
	Games* Ps5games[kSize];
	Ps5games[0] = new Games("Game 1", "P 1", "D 1", 0);
	Ps5games[1] = new Games("Game 2", "P 2", "D 2", 0);
	Ps5games[2] = new Games("Game 3", "P 3", "D 3", 0);
	Ps5games[3] = new Games("Game 4", "P 4", "D 4", 0);
	Ps5games[4] = new Games("Game 5", "P 5", "D 5", 0);

	cout << "how many achiev" << endl;
	int s;
	cin >> s;
	Ps5games[0]->setAsize(s);

	cout << "creating achievements" << endl;
	Ps5games[0]->imputAchievement();

	cout << "displaying achievements" << endl;
	Ps5games[0]->dislayAchievementa();
	

		return 0;
}