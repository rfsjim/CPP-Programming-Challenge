/*  In this challenge, given the name of a file, print out the size of the file, in bytes. If no 
file is given, provide a help string to the user that indicates how to use the program. 
You might need help with taking parameters via the command line or file I/O in C++ 
(if you want to solve this problem in C, you might be interested in this article on C file I/O).  */

#include <iostream>
#include <fstream>

using namespace std;
int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "******************************************" << endl;
		cout << "Help - Using: " << argv[0] << endl;
		cout << "******************************************" << endl << endl;
		cout << argv[0] << " calculates the size of a file and outputs the result in bytes" << endl;
		cout << "Usage - " << argv[0] << " <filename>" << endl;
		return 1;
	}
	ifstream calculateFilesize;
	calculateFilesize.open(argv[1], ios::in | ios::ate | ios::binary);
	if (calculateFilesize.fail())
    {
    	cout << "Error, could not open file " << argv[1];
    	return 1;
    }
    long begin, end;
    end = calculateFilesize.tellg();
    calculateFilesize.seekg (0, ios::beg);
    begin = calculateFilesize.tellg();
    calculateFilesize.close();
	cout << "size is: " << (end-begin) << " bytes.\n";
	return 0;
}
