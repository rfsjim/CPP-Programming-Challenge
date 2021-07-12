/* Line Count Challenge

Here's a simple help free challenge to get you started: write a program that takes a file as an argument and counts the total number of lines. 
Lines are defined as ending with a newline character. Program usage should be

count filename.txt
and the output should be the line count. */

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
      
using namespace std;
int main(int argc,char *argv[])
{
	string filename;
	string text;
	int i = 0;
	
    if (argc != 2)
	{
    	cout << "What is the filename? ";
    	cin >> filename;
    	cout << endl;
    }
    else filename = argv[1];
    ifstream filenameCount;
    filenameCount.open (filename.c_str());
    if (filenameCount.fail())
    {
    	cout << "Error, could not open file " << filename;
    	return 1;
    }
    filenameCount.seekg(0);
    while (!filenameCount.eof())
	{
		getline(filenameCount, text);
		i++;
    }
    filenameCount.close();
	cout << "size is: " << (end-begin) << " bytes.\n";
    getch();
	return 0;
}
