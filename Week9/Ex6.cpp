//Demostrate write and read of binary files
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file("nums.wallace", ios::out | ios::binary); //ios::out to write, ios::in to read
	if (!file)
	{
		cout << "Error opening the file \n";
		return 1;
	}

	//Integer data to write to binary files
	int buffer[] = { 1,2,3,4,5,6,7,8,9,10 };
	int buffer2[] = { 0,0,0,0,0,0,0,0,0,0 };
	int size = sizeof(buffer) / sizeof(buffer[0]);	//Determines how many elements in the array

	//Write the data and close the file
	cout << "Now writing the data to the file.\n";
	system("PAUSE"); //Makes user need to input a button in order to continue
	system("CLS");	//Clears the console
	file.write(reinterpret_cast<char*>(buffer),sizeof(buffer));
	file.close();

	////Open the file and read the contents of the binary file
	file.open("nums.wallace", ios::in);
	if (!file)
	{
		cout << "Error opening the file \n";
		return 1;
	}

	cout << "Now reading the data back\n";
	file.read(reinterpret_cast<char*>(buffer2), sizeof(buffer2));

	for(int i=0;i<size;i++)
	{
		cout << buffer2[i] << " ";
	}
	//system("CLS");
	file.close();
	return 0;
}