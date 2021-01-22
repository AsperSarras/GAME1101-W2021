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
	Achievements* m_pAchievements;
public:
	Games()
	{
		m_name = "";
		m_publisher = "";
		m_developer = "";
		m_pAchievements;
	}
	Games(string name, string publisher, string developer, Achievements* achievements)
	{
		m_name = name;
		m_publisher = publisher;
		m_developer = developer;
		m_pAchievements = achievements;
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

	void setAchievements(Achievements* achievements) {
		m_pAchievements = achievements;
	}
	Achievements* getAchievements() {
		return m_pAchievements;
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
	/*int kSize;*/

	//Games* ps5GamesArray[5];
	Achievements* Clear = new Achievements("All Clear", "Clear All", 100);
	Achievements* Clear2 = new Achievements("All Clear", "Clear All", 100);
	Games* P5 = new Games("Persona 5", "Atlus", "Nose",Clear);

	cout << P5->getName();
	cout << P5->getAchievements()->getTitle();

		return 0;
}