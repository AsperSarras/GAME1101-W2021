#include <iostream>
#include <string>
using namespace std;

int frequency(char ch, string inputstring, int pos);

//int main()
//{
//	string inputstring;
//	char ch;
//	cout << "Type something" << endl;
//	getline(cin, inputstring);
//
//	cout << "What character do you want to search for the frequency?" << endl;
//	ch = cin.get();
//	cout << "The character " << ch << " appears " << frequency(ch, inputstring, 0) << " times" << endl;
//	return 0;
//}

int frequency(char ch, string inputstring, int pos)
{
	if (pos == inputstring.length()) //base case
	{
		return 0;
	}
	if (inputstring[pos] == ch)
	{
		//character found!
		return 1 + frequency(ch, inputstring, pos + 1);
	}
	else
	{
		return frequency(ch, inputstring, pos + 1);
	}
}
