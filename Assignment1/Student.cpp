#include "Student.h"

#include <iostream>

void Student::setCollege(string college)
{
	m_college = college;
}

string Student::getCollege() const
{
	return m_college;
}

void Student::setProgram(string program)
{
	m_program = program;
}

string Student::getProgram() const
{
	return m_program;
}

void Student::setSemester(string semester)
{
	m_semester = semester;
}

string Student::getSemester() const
{
	return m_semester;
}

