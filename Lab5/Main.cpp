#include <iostream>
using namespace std;

class Person
{
private:
	string m_name;
public:
	Person(string name)
	{
		m_name = name;
	}
	string getName()
	{
		return m_name;
	}
};


int main()
{
	Person Bob("Bob");
	Person James("James");
	Person Diego("Diego");
	Person Benjamin("Benjamin");
	Person Camila("Camila");
	Person Sofia("Sofia");

	cout << Bob.getName() << endl;
	
	return 0;
}