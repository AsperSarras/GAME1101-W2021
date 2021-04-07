#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int main()
//{
//	char ch;
//	string st;
//	fstream ioFile("rewind.txt", ios::out);
//
//	//Open file
//	if(!ioFile)
//	{
//		cout << "Error in trying to open the file" << endl;
//		return 1;
//	}
//	//Write to the file
//	ioFile << "Is this file too easy?" << endl << "No, you are just super smart." << endl;
//	ioFile.close();
//
//	//Read the file and print to the screen
//	ioFile.open("rewind.txt", ios::in);
//	if (!ioFile)
//	{
//		cout << "Error in trying to open the file" << endl;
//		return 1;
//	}
//
//	ioFile.get(ch);
//	while(!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//
//	while (!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//	
//	//Rewind the file
//	ioFile.clear();
//	//ioFile.seekg(40,ios::beg);			//Offset counting from the beginning
//	ioFile.seekg(-40, ios::end);	//Offset counting from the end
//
//	//Read the file again and print to the screen
//	ioFile.get(ch);
//	while (!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//
//	ioFile.close();
//	return 0;
//}