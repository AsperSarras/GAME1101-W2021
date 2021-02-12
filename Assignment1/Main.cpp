#include <ctime>
#include <iostream>
#include "string"
#include "Survey.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int index;
	int answ = 0;
	bool ready = false;
	Survey survey;

	do
	{
		do
		{
			cout << "Welcome to the Survey Generator.\nHow many Students do you wish to include on the Survey?(Min:1-Max:500)" << endl;
			cin >> index;
		
				if (index > 500 || index <= 0)
				{
					cout << "Wrong Input" << endl << endl;
				}
		} while (index > 500 || index <= 0);
	
		answ = 0;
		cout << "Ready to process the survey?\n1=Yes.\n0=No." << endl;
		cin >> answ;
		if (answ==1)
		{
			ready = true;
		}
		else if (answ==0)
		{
			cout << "Returning to first choice." << endl;
		}
		else
		{
			cout << "Wrong input, returning to First choice" << endl;
		}
	} while (ready != true);
	survey.SurveyProcess(index);
	return 0;
}