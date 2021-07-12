/* In this challenge, write a program that takes in three arguments, a start temperature 
(in Celsius), an end temperature (in Celsius) and a step size. Print out a table that goes from the 
start temperature to the end temperature, in steps of the step size; you do not actually need to 
print the final end temperature if the step size does not exactly match. You should perform input 
validation: do not accept start temperatures less than a lower limit (which your code should 
specify as a constant) or higher than an upper limit (which your code should also specify). You 
should not allow a step size greater than the difference in temperatures. */

// Fahrenheit = Celsius * 1.8 + 32, Lower Limit -40Deg C , Upper Limit 5000, Step 0-10

#include <iostream>

using namespace std;

double convertCtoF (double celsius)
{
	return celsius * 1.8 + 32;
}

void printConversion (double start, double end, int step)
{
	double celsius = start, fahrenheit;
	cout << endl << "Celsius" << "\t\t\t" << "Fahrenheit" << endl;
	cout << "*******" << "\t\t\t" << "**********" << endl;
	do
	{
		fahrenheit = convertCtoF(celsius);
		cout << celsius << "\t\t\t" << fahrenheit << endl;
		celsius = celsius + step;
	} while (celsius <= end);
}

int main()
{
	double start = -41, end = -41;
	int step;
	int maxStep;
	const int lowerLimit = -40, upperLimit = 5000;
	
	while (start < lowerLimit)
	{
		cout <<  endl << "Please enter a lower limit, (lower limit >= " << lowerLimit << "): ";
		cin >> start;
	}
	while (end <= start || end >= upperLimit)
	{
		cout <<  endl << "Please enter an upper limit, (" << lowerLimit << "< upper limit <= " << 
		upperLimit << "): ";
		cin >> end;
	}
	maxStep = end - start;
	while (step <= 0 || step >= maxStep)
	{
		cout << endl << "Please enter a step range, (0 < step <= " << maxStep << "): ";
		cin >> step;
	}
	cout << endl;
	printConversion(start, end, step);
	return 0;
}
