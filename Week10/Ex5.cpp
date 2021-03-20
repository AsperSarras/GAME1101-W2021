#include <iostream>
using namespace std;

//Function prototype
int BinarySearch(const int array[],int first,int last,int value);

const int SIZE = 20;

int main()
{
	int test[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int result;
	int empId;

	cout << "Enter the Employee ID you wish to search for: " << endl;
	cin >> empId;
	result = BinarySearch(test, 0, SIZE - 1, empId);
	if (result == -1)
	{
		cout << "That number does not exist in the array" << endl;
	}
	else
	{
		cout << "That ID was founded at element: " << result;
	}
	return 0;
}

int BinarySearch(const int array[], int first, int last, int value)
{
	int mid;

	if(first>last)
	{
		return -1;
	}
	mid = (first + last) / 2;
	if(array[mid]==value)
	{
		return mid;
	}
	if(array[mid]<value)
	{
		return BinarySearch(array, mid + 1, last, value);
	}
	else
	{
		return BinarySearch(array, first, mid - 1, value);
	}
}

