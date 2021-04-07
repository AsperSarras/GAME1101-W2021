#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//int main()
//{
//	//Working with a File Stream
//	//Steps:
//	//1 Declare the file stream object to use
//	//2 Open the file stream to a desired file
//	//3 Work on the file
//	//4 Close the stream
//
//	//1
//	fstream inOutFile;
//	string word;
//
//	//2
//	inOutFile.open("inOut.txt");
//	//Error Check
//	if(!inOutFile)
//	{
//		//File not found
//		cout << "File not found" << endl;
//		return 1;
//	}
//
//	//3
//	while(inOutFile>>word)
//	{
//		cout << word << endl;
//	}
//
//	//Clear EOF flag (End Of File Flag) to allow additional  operations
//	inOutFile.clear();
//
//	inOutFile << "Asper" << endl;
//	
//	//4
//	inOutFile.close();
//	
//	return 0;
//}