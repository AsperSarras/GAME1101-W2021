#include <iostream>
using namespace std;

//Function prototype
void messege(int);

//int main()
//{
//	messege(3);
//
//	return 0;
//}

void messege(int time)
{
	if (time > 0) //Base case
	{
		cout << "Message " << time << endl;
		messege(time - 1);
	}
}
