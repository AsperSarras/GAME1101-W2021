#pragma once
#include "Person.h"

using namespace std;

class Student :public Person
{
	string m_college;
	string m_program;
	string m_semester;
public:
	Student()
	{
		m_college = "";
		m_program = "";
		m_semester = "";
	}
	Student(string name, string lName, int age, string college, string program, string semester) : Person(name,lName, age)
	{
		m_college = college;
		m_program = program;
		m_semester = semester;
	}

	void setCollege(string college);
	string getCollege()const;

	void setProgram(string program);
	string getProgram()const;

	void setSemester(string semester);
	string getSemester()const;
};
