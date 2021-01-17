#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* ptr; //Stores an address to an int type in memory
	double numbers[] = { 10,20,30,40,50 };

	cout<<&numbers[0]<<endl;
	cout<<&numbers[1]<<endl;
	cout<<&numbers[2]<<endl;
	cout<<&numbers[3]<<endl;
	cout<<&numbers[4]<<endl;
	cout<<&numbers[5]<<endl;

	ptr = &x;

	cout << *ptr << endl;
	cout << ptr << endl;

	x = 15;
	cout << *ptr << endl;
	cout << ptr << endl;

	*ptr = 100;
	cout << x << endl;


	return 0;
}