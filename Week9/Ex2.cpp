//Demonstrating using ostringstream operator with sophisticated formatting
#include <iostream>
#include <iomanip>
#include <sstream> // Requiered for string stream operations

using namespace std;

//Function prototype
string dollarFormat(double);

//int main()
//{
//	const int ROWS = 3, COLS = 2;
//	//2D array
//	double amount[ROWS][COLS] = { 184.45,7,
//									59.15, 64.32,
//									7.29, 1289 };
//	cout << right;
//
//	for (int row = 0; row < ROWS; row++)
//	{
//		for (int col = 0; col < COLS; col++)
//		{
//			cout << setw(10) << dollarFormat(amount[row][col]);
//		}
//		cout << endl;
//	}
//	
//	return 0;
//}

string dollarFormat(double amount)
{
	//Create the ostringstream object
	ostringstream outStr;

	//Set up format information and write to outStr
	outStr << showpoint << fixed << setprecision(2);
	outStr << "$" << amount;
	return outStr.str();
}
