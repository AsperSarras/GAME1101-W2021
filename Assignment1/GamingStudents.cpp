#include "GamingStudents.h"
#include <iostream>

void GamingStudents::setDevice(string device) 
{
	m_device = device;
}

string GamingStudents::getDevice() const
{
	return m_device;
}

void GamingStudents::setHours(int hour) 
{
	m_hours = hour;
}

int GamingStudents::getHours() const
{
	return m_hours;
}

string GamingStudents::getName() const
{
	return Person::getName() + " " + Person::getLName();
}

void GamingStudents::displayInfo() const
{
	cout << "Gamer. Full Name:" << getName() << ". Age: " << getAge() <<
		". Preferred Gaming device: " << getDevice() << ". Hours Watching Playing Weekly: " << getHours() << endl << endl;
}
