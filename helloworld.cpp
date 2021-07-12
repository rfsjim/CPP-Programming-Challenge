//my first program in C++

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "***********\n" << "Hello World\n" << "***********\n\n";
	string mystr;
	int age;
	cout << "How Old Are You? ";
	getline (cin, mystr);
	stringstream(mystr)>> age;
	int postcode;
	cout << "\nWhat Is Your Postcode? ";
	getline (cin, mystr);
	stringstream(mystr) >> postcode;
	cout << "\nHello, you are " << age << " years old and your postcode is " << postcode << "\n";
	cout << "*******************\n\n";
	string name, team;
	cout << "What Is Your Name? ";
	getline (cin, mystr);
	name = mystr;
	cout << "What Is Your Favourite Team? ";
	getline (cin, mystr);
	team = mystr;
	cout << "Hello " << name << ".\n" << "I like " << team << " too!\n";
	cout << "*******************\n\n";
	float price=0;
	int quantity=0;
	cout << "Enter price: ";
	getline (cin, mystr);
	stringstream(mystr) >> price;
	cout << "Enter quantity: ";
	getline (cin, mystr);
	stringstream(mystr) >> quantity;
	cout << "Total Price: " << price*quantity << endl;
	return 0;
}
