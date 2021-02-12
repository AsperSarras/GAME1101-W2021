#pragma once
#include "GamingStudents.h"
#include "Person.h"



class Survey
{
private:
	Person* gArry[500];
	string namesArr[3] = { "Bob","Jorge","William" };
	string lNamesArr[3] = { "Gates","Jackson","Minerva" };
	int agesArr[10] = { 18,19,20,21,22,23,24,25,26,27 };
	string collArr[3] = { "St.Andrew","Castle","Oxford" };
	string progArr[4] = { "Art","Math","Computer","Medicine" };
	string semArr[3] = { "First Semester","Second Semester","Third Semester" };
	string devArr[3] = { "PlayStation 4","Nintendo Switch","X Box" };
	int hoursArr[8] = { 3,6,9,12,15,18,21,24 };
	string sDevArr[3] = { "Fox Sports","Netflix","Disney" };
	int nHoursArr[8] = { 3,6,9,12,15,18,21,24 };

public:
	bool show = false;
	Survey()
	{
		
	}

	void SurveyProcess(int q);
};
