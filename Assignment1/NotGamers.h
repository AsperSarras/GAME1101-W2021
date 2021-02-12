#pragma once
#include <string>

#include "Student.h"

using namespace std;
class NotGamers: public Student
{
private:
	string m_sDevice;
	int m_nHours;
public:
	NotGamers()
	{
		m_sDevice = "";
		m_nHours = 0;
	}
	NotGamers(string sDevice, int nHours, string name, string lName, int age, string college, string program, string semester) : Student(name, lName, age, college, program, semester)
	{
		m_sDevice = sDevice;
		m_nHours = nHours;
	}

	void setSDevice(string sDevice);
	string getSDevice() const;

	void setNHour(int nHour);
	int getNHour() const;

	virtual string getName()const;
	
	virtual void displayInfo() const override;
};
