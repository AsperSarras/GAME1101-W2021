#include <iostream>
#include <fstream>
using namespace std;

//Function prototype
void showState(fstream&);

//int main()
//{
//	fstream testFile("stuff.dat", ios::out);
//	if(testFile.fail())
//	{
//		cout << "Cannot Open File" << endl;
//		return 1;
//	}
//
//	int num = 10;
//	cout << "Writing to the file.\n";
//	testFile << num;
//	showState(testFile);
//	testFile.close();
//	num = 0;
//
//	//Open file, read number, show status
//	testFile.open("stuff.dat", ios::in);
//	if (testFile.fail())
//	{
//		cout << "Cannot Open File" << endl;
//		return 1;
//	}
//
//	//Read the file
//	cout << "Reading from the file.\n";
//	testFile >> num;
//	cout << "Read in data: " << num << endl;
//	showState(testFile);
//
//	//Force a bad Operation
//	cout << "Forcing a bad read operation.\n";
//	testFile >> num;
//	showState(testFile);
//
//	testFile.close();
//	
//	return 0;
//}

void showState(fstream& file)
{
	cout << "File Status:\n";
	cout << " eof bit: " << file.eof() << endl;		//End of file Bit
	cout << " fail bit: " << file.fail() << endl;	//Fail and hard fail bit
	cout << " bad bit: " << file.bad() << endl;		//Bad bit
	cout << " good bit: " << file.good() << endl;	//Good bit
	file.clear();									//Clear all bits
}	
