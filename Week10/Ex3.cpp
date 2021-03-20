#include <iostream>
using namespace std;

//Function prototype
int Factorial(int);

//int main()
//{
//	int number;
//
//	cout << "Enter an integer value and and will display its factorial: " << endl;
//	cin >> number;
//	cout << "The factorial of " << number << " is " << Factorial(number) << endl;
//	
//	return 0;
//}

int Factorial(int num)
{
	 if(num==0)
	 {
		 return 1;
	 }
	 else
	 {
		 return num * Factorial(num - 1);
	 }
}

