#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int Palindrome(string inputstring, int posI, int posF,int times);
int Reverse(string normal,int posI, int posF, int times);

void Swap(int* a, int* b);
int Partition(int arr[], int posI, int posF);
void QuickSort(int arr[], int posI, int posF,int aSize);


int main()
{
	srand(time(NULL));
	bool done = false;
	int chs;
	do
	{
		cout << "Welcome, Please choose an option.\n1-Palindrome Test.\n2-QuickSort Test.\n3-Backward Test.\n0-Exit" << endl << endl;
		cin >> chs;

		if (chs == 0)
		{
			cout << "Exiting Program." << endl;
			done = true;
		}
		else if (chs == 1)
		{
			cout << "Palindrome Test" << endl;
			string inputstring;
			int answ;
			cout << "Type something" << endl;
			cin.ignore();
			getline(cin, inputstring);
			answ = Palindrome(inputstring, 0, inputstring.length() - 1, 0);
			
			if (answ == -1)
			{
				cout << inputstring << " is not a palindrome" << endl<<endl;
			}
			else
			{
				cout << inputstring << " is a palindrome" << endl<<endl;
			}
		}
		else if (chs == 2)
		{
			cout << "QuickSort Test" << endl;
			int aSize;
			cout << "Input the array length" << endl;
			cin >> aSize;
			int* array = new int[aSize];
			cout << "Array before the sort: " << endl;
			for (int i = 0; i < aSize; i++)
			{
				array[i] = rand();
				cout << array[i] << endl;
			}
			QuickSort(array, 0, aSize,aSize);
			cout << "Array after the sort: " << endl;
			for (int i = 0; i < aSize; i++)
			{
				cout << array[i+1] << endl;
			}
			
		}
		else if (chs == 3)
		{
			cout << "Backwards Test"<<endl;
			string normal;
			cout << "Type something" << endl;
			cin.ignore();
			getline(cin, normal);
			cout << "You typed: " << normal << "\nBackwards: ";
			Reverse(normal, 0, normal.length() - 1, 0);
		}
		else
		{
			cout << "Wrong Input." << endl<<endl;
		}
	} while (done == false);
	return 0;
}

int Palindrome(string inputstring, int posI, int posF,int times)
{
	if (times ==inputstring.length()/2)
	{
		return 0;
	}
	if (inputstring[posI]==inputstring[posF])
	{
		Palindrome(inputstring, posI + 1, posF - 1, times + 1);
	}
	else
	{
		return-1;
	}
}

int Reverse(string normal, int posI, int posF, int times)
{
	if (times == normal.length()/2)
	{
		cout << normal << endl << endl;
		return 0;
	}
	else
	{
		char temp={};
		temp = normal[posI];
		normal[posI] = normal[posF];
		normal[posF] = temp;

		Reverse(normal, posI + 1, posF - 1, times + 1);
	}
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int Partition(int arr[], int posI, int posF)
{
	int p = arr[posF];
	int init = posI-1;
	for(int i=posI;i<=posF-1;i++)
	{
		if (arr[i] <= p)
		{
			init++;
			Swap(&arr[init], &arr[i]);
		}
	}
	Swap(&arr[init + 1], &arr[posF]);
	return (init + 1);
}
void QuickSort(int arr[], int posI, int posF,int aSize)
{
	if(posI<posF)
	{
		int p = Partition(arr, posI, posF);

		QuickSort(arr, posI, p - 1,aSize);
		QuickSort(arr, p + 1, posF,aSize);
	}
}