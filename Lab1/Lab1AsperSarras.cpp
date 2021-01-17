#include <iostream>
#include <string>
using namespace std;

class Platform
{
private:
	string m_name;
	string m_manufacturer;
	string m_games[];
public:
	Platform() 
	{
		m_name = "";
		m_manufacturer = "";
	}

	Platform(string name, string manufacturer)
	{
		m_name = name;
		m_manufacturer = manufacturer;
	}


};


int main()
{

	return 0;
}