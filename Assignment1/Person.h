#pragma once
#include <string>

using namespace std;

class Person
{
private:
	string m_name;
	string m_lName;
	int m_age;
public:
	Person()
	{
		m_name = "";
		m_lName = "";
		m_age = 0;
	}
	Person(string name,string lName, int age);

	void setName(string name);
	virtual string getName() const;

	void setLName(string lname);
	string getLName() const;
	
	void setAge(int age);
	int getAge() const;

	virtual void displayInfo() const = 0;
};
