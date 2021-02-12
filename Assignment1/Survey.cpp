#include "Survey.h"
#include <iostream>

#include "NotGamers.h"

void Survey::SurveyProcess(int q)
{
	int n, ln, a, c, p, s, d, h, sd, nh;

	int gamersAgeSum = 0;
	int gamersHoursSum = 0;
	int gamersAmount = 0;
	int dev1 = 0;
	int dev2 = 0;
	int dev3 = 0;

	int nonGamersAgeSum = 0;
	int nonGamersHoursSum = 0;
	int nonGamersAmount = 0;
	int str1 = 0;
	int str2 = 0;
	int str3 = 0;
	int strF = 0;

	for (int i = 0; i < q; i++)
	{
		int type = rand() % 2;

		if (type == 0)
		{
			n = rand() % 3;
			ln = rand() % 3;
			a = rand() % 10;
			c = rand() % 3;
			p = rand() % 4;
			s = rand() % 3;
			d = rand() % 3;
			h = rand() % 8;

			if (d == 0)
			{
				dev1++;
			}
			else if (d == 1)
			{
				dev2++;
			}
			else if (d == 2)
			{
				dev3++;
			}


			gArry[i] = new GamingStudents(devArr[d], hoursArr[h], namesArr[n], lNamesArr[ln],
				agesArr[a], collArr[c], progArr[p], semArr[s]);

			if(show==true)
			{
				gArry[i]->displayInfo();
			}

			gamersAgeSum += gArry[i]->getAge();
			gamersHoursSum += hoursArr[h];
			gamersAmount++;
		}
		else if (type == 1)
		{
			n = rand() % 3;
			ln = rand() % 3;
			a = rand() % 10;
			c = rand() % 3;
			p = rand() % 4;
			s = rand() % 3;
			sd = rand() % 3;
			nh = rand() % 8;

			if (sd == 0)
			{
				str1++;
			}
			else if (sd == 1)
			{
				str2++;
			}
			else if (sd == 2)
			{
				str3++;
			}

			gArry[i] = new NotGamers(sDevArr[sd], nHoursArr[nh], namesArr[n], lNamesArr[ln],
				agesArr[a], collArr[c], progArr[p], semArr[s]);

			if (show==true)
			{
				gArry[i]->displayInfo();
			}

			nonGamersAgeSum += gArry[i]->getAge();
			nonGamersHoursSum += nHoursArr[nh];
			nonGamersAmount++;
		}
	}

	cout << "______________________________________________________________" << endl;
	cout << "Total Gamers: " << gamersAmount << endl;
	if (dev1 > dev2&&dev1 > dev3)
	{
		cout << "Most Preferred Gaming Device is: " << devArr[0] << endl;
	}
	else if (dev2 > dev1&&dev2 > dev3)
	{
		cout << "Most Preferred Gaming Device is: " << devArr[1] << endl;
	}
	else if ((dev3 > dev2) && (dev3 > dev1))
	{
		cout << "Most Preferred Gaming Device is: " << devArr[2] << endl;
	}
	else if ((dev1 == dev2) && (dev1 > dev3))
	{
		cout << "Most Preferred Gaming Device are: " << devArr[0] <<
			" and " << devArr[1] << " Equally" << endl;
	}
	else if ((dev1 == dev3) && (dev1 > dev2))
	{
		cout << "Most Preferred Gaming Device are: " << devArr[0] <<
			" and " << devArr[2] << " Equally" << endl;
	}
	else if ((dev3 == dev2) && (dev3 > dev1))
	{
		cout << "Most Preferred Gaming Device are: " << devArr[1] <<
			" and " << devArr[2] << " Equally" << endl;
	}
	else if ((dev1 == dev2) && (dev1 == dev3))
	{
		cout << "Most Preferred Gaming Device are: " << devArr[0] << ", " << devArr[1] <<
			" and " << devArr[2] << " Equally" << endl;
	}
	cout << "Average Age of Gamers Students: " << gamersAgeSum / gamersAmount << endl;
	cout << "Average Hours Consuming Gaming Entertainment per Week: "<<gamersHoursSum/gamersAmount << endl << endl;

	cout << "______________________________________________________________" << endl;

	cout << "Total Non-Gamers: " << nonGamersAmount << endl;
	if ((str1 > str2) && (str1 > str3))
	{
		cout << "Most Preferred Streaming Service is: " << sDevArr[0] << endl;
	}
	else if ((str2 > dev1) && (str2 > str3))
	{
		cout << "Most Preferred Streaming Service is: " << sDevArr[1] << endl;
	}
	else if ((str3 > str2) && (str3 > str1))
	{
		cout << "Most Preferred Streaming Service is: " << sDevArr[2] << endl;
	}
	else if ((str1 == str2) && (str1 > str3))
	{
		cout << "Most Preferred Streaming Service are: " << sDevArr[0] <<
			" and " << sDevArr[1] << " Equally" << endl;
	}
	else if ((str1 == str3) && (str1 > str2))
	{
		cout << "Most Preferred Streaming Service are: " << sDevArr[0] <<
			" and " << sDevArr[2] << " Equally" << endl;
	}
	else if ((str3 == str2) && (str3 > str1))
	{
		cout << "Most Preferred Streaming Service are: " << sDevArr[1] <<
			" and " << sDevArr[2] << " Equally" << endl;
	}
	else if ((str1 == str2) && (str1 == str3))
	{
		cout << "Most Preferred Streaming Service are: " << sDevArr[0] << ", " << sDevArr[1] <<
			" and " << sDevArr[2] << " Equally" << endl;
	}
	cout << "Average Age of Non-Gamers Students:" << nonGamersAgeSum/nonGamersAmount << endl;
	cout << "Average Hours Consuming Non-Gaming Entertainment per Week: " << nonGamersHoursSum / nonGamersAmount << endl << endl;
}
