#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main()
{
	DynIntQueue iQueue;

	cout << "Enqueu 5 items...\n";
	for(int i=1;i<=5;i++)
	{
		iQueue.enqueue(i * i);
	}

	while(!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}
	
	return 0;
}