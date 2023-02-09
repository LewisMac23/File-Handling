// FileHandling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//File handling 

#include <iostream>
#include <fstream>//enables use of ifstream and ofstream classes
using namespace std;

/*
What are files and streams
-Files are used to store data permanently.
-A stream is an abstraction that represents a device on which input and output operations are performed.
-A stream can basically be represented as a source or destination of character of indefinite length.
*/

/* 
Data Types
-ofstream:This data type represents the output file stream and is used to create files and to write information
to files.
-ifstream:This data type represents the input file stream and is used to read information from files.
-fstream:This data type reperesents the file stream generally, and has the capabilities of both ofstream and ifstream
which means it can create files, write info to files, and read info from files.
*/
int main()
{
	char arr[100];
	cout << "enter your name and age" << endl;
	cin.getline(arr, 100);			//getLine takes entire inputted line with spaces included

	//writes to file

	ofstream myfile("xyz.txt");		//ofstream is a datatype - this also opens file by default + ios::app means that new content is appended without deletion of old content
	//myfile.open("xyz.txt");		//explicitly opens file(but is open by default in this case)
	myfile << arr;					//whatever is in the array is being written to the file
	myfile.close();
	cout << "File write operation performed succesfully" << endl << endl;

	//reads file

	cout << "READING FROM FILE OPERATION STARTED" << endl;
	char arr1[100];
	ifstream obj("xyz.txt");
	obj.getline(arr1, 100);
	cout << "array content:" << arr1 << endl;
	cout << "READING FROM FILE OPERATION COMPLETE" << endl;
	obj.close();

	return 0;
}

