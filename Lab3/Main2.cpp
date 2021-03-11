#include <iostream>
#include "SearchVect.h"
using namespace std;

int main()
{
	const int SIZE = 10;
	const int CSIZE = 3;

	SearchableVector<int> iTable(SIZE);
	SearchableVector<double>dTable(SIZE);

	iTable.print();

	for (int i = 0; i < SIZE; i++)
	{
		iTable[i] = (i * 2);
		dTable[i] = (15 -(i+1));
	}

	//iTable.print();
	//	//Display the values

	//iTable.push_back(2);
	//
	//cout << "Int Table values: " << endl;
	//iTable.print();
	//
	//iTable.pop_back();
	//cout << "Int Table values: " << endl;
	//iTable.print();
	//
	//iTable.pop_back();
	//cout << "Int Table values: " << endl;
	//iTable.print();

	//iTable.push_back(3);
	//cout << "Int Table values: " << endl;
	//iTable.print();

	//iTable.push_back(0);
	//cout << "Int Table values: " << endl;
	//iTable.print();

	//iTable.push_back(5);
	//cout << "Int Table values: " << endl;
	//iTable.print();
	
	//cout << "Double Table values: " << endl;
	//dTable.print();
	//int r;
	//r=dTable.findItem(7);
	//dTable.print();
	//if(r==-1)
	//{
	//	cout << "bad" << endl;
	//}
	//else
	//cout << r << endl;
	
		//Search in Vector
	int result;
	cout << "Search for number 6 in iTable" << endl;
	iTable.print();
	result = iTable.findItem(3);
	iTable.print();
	if (result==-1)
	{
		cout << "6 Was not found" << endl;
	}
	else
	{
		cout << "6 was found on position " << result << endl;
	}
	return 0;
}