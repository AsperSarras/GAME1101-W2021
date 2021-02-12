#pragma once
#include <string>

#include "Student.h"

using namespace std;

class GamingStudents: public Student
{
private:
	string m_device;
	int m_hours;

public:
	GamingStudents()
	{
		m_device = "";
		m_hours = 0;
	}
	GamingStudents(string device,int hours, string name, string lName, int age, string college, string program, string semester): Student(name,lName,age,college,program,semester)
	{
		m_device = device;
		m_hours = hours;
	}

	void setDevice(string device);
	string getDevice() const;

	void setHours(int hour);
	int getHours() const;

	virtual string getName()const;

	virtual void displayInfo() const override;
};
