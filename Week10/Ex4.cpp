#include <iostream>
using namespace std;

//Function prototype
int Fib(int);

//int main()
//{
//	cout << "The first 10 Fibonnaci numbers are: " << endl;
//	for(int i=0; i<10;i++)
//	{
//		cout << Fib(i) << " ";
//	}
//	cout << endl;
//	return 0;
//}

int Fib(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return(Fib(n - 1) + Fib(n - 2)); 
	}
}

