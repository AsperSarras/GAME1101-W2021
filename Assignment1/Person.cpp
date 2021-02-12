#include "Person.h"

Person::Person(string name,string lName, int age)
{
	m_name = name;
	m_lName = lName;
	m_age = age;
}


void Person::setName(string name)
{
	m_name = name;
}

string Person::getName() const
{
	return m_name;
}

void Person::setLName(string lname)
{
	m_lName = lname;
}

string Person::getLName() const
{
	return m_lName;
}


void Person::setAge(int age)
{
	m_age = age;
}

int Person::getAge() const
{
	return m_age;
}

