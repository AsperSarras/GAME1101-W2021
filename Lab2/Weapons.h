#pragma once
#include <string>
using namespace std;

class Weapons
{
public:
	Weapons()
	{
		m_wName = "";
		m_description = "";
		m_dmg = 0;
	}
	Weapons(string name, string description, int dmg);

	void setWName(string name);
	string getWNAme();

	void setDescription(string description);
	string getDescription();

	void setDmg(int dmg);
	int getDmg();

	void setAbilities(int i);
	string getAbilities();


	friend ostream& operator<<(ostream& out, Weapons a);

private:
	string m_wName;
	string m_description;
	int m_dmg;
	string m_abilitiesArr[3];
	string m_ability;
	
};
