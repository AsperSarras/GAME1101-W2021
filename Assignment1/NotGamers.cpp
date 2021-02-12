#include "NotGamers.h"
#include <iostream>

void NotGamers::setSDevice(string sDevice)
{
	m_sDevice = sDevice;
}

string NotGamers::getSDevice() const
{
	return m_sDevice;
}

void NotGamers::setNHour(int nHour)
{
	m_nHours = nHour;
}

int NotGamers::getNHour() const
{
	return m_nHours;
}

string NotGamers::getName() const
{
	return Person::getName() + " " + Person::getLName();
}

void NotGamers::displayInfo() const
{
	cout << "Not Gamer. Full Name:" << getName() << ". Age: " << getAge() <<
		". Preferred Streaming device: " << getSDevice() << ". Hours Watching Streaming Weekly: " << getNHour() << endl << endl;
}
