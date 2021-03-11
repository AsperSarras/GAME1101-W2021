#include <iostream>
#include "SearchVect.h"
#include "SearchVect.cpp"
#include "SimpleVector.h"
#include "SimpleVector.cpp"
#include "SortableVector.h"
#include "SortableVector.cpp"

using namespace std;

int main()
{
	const int SIZE = 10;

	SearchableVector<int> iTable(SIZE);
	SearchableVector<double>dTableSearch(SIZE);
	SortableVector<double>dTableSort(SIZE);
	int r;
	for (int i = 0; i < SIZE; i++)
	{
		iTable[i] = (i * 2);
		dTableSearch[i] = (15 -(i*1.2));
		if (i % 2 == 0)
			dTableSort[i] = (20 + i*0.73);
		else
			dTableSort[i] = (20 - i * 0.73);
	}
	cout << "pop_back and push_back Example:\n" << endl;
	//pop_back Example
	cout << "Array values: " << endl;
	iTable.print();
	cout << "Poping last element" << endl;
	iTable.pop_back();
	cout << "Array values: " << endl;
	iTable.print();
	cout << "Poping last element" << endl;
	iTable.pop_back();
	cout << "Array values: " << endl;
	iTable.print();

	//Push_back Example
	cout << "Pushing a 2 into the array" << endl;
	iTable.push_back(2);
	cout << "Array values: " << endl;
	iTable.print();
	cout << "Pushing a 5 into the array" << endl;
	iTable.push_back(5);
	cout << "Array values: " << endl;
	iTable.print();
	//Full Example
	cout << "\nPushing a 7 into the array (When Array is Full)\n" << endl;
	iTable.push_back(5);
	cout << "Array values: " << endl;
	iTable.print();

	//Binary Search Example
	cout << "\nBinary Search Example:\n" << endl;
	cout << "Array values: " << endl;
	dTableSearch.print();
	cout << "Search for 5.4" << endl;
	r=dTableSearch.findItem(5.4);
	if(r==-1)
	{
		cout << "Item is not on the Array" << endl;
	}
	else
	{
		cout << "Array after the Binary Search Sort" << endl;
		dTableSearch.print();
		cout << "Item is on position " << r << endl;
	}
	cout << "\nIf Item is not on the Array:\n" << endl;
	cout << "Search for 100" << endl;
	r = dTableSearch.findItem(100);
	if (r == -1)
	{
		cout << "Item is not on the Array" << endl;
	}
	else
	{
		cout << "Array after the Binary Search Sort" << endl;
		dTableSearch.print();
		cout << "Item is on position " << r << endl;
	}
	
	//Sort
	cout << "\nSort Example\n" << endl;
	cout << "Array Before Sorting" << endl;
	dTableSort.print();
	cout << "Sorting" << endl;
	dTableSort.Sort();
	cout << "Array After Sorting" << endl;
	dTableSort.print();
	return 0;
}