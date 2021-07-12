/* Here is another mathematical problem, where the trick is as much to discover the algorithm as it 
is to write the code: write a program to display all possible permutations of a given input 
string--if the string contains duplicate characters, you may have multiple repeated results. Input 
should be of the form

permute string
and output should be a word per line.
Here is a sample for the input cat

cat
cta
act
atc
tac
tca
 */

int main(int argc, char *argv[])
{
	string stringToPermutate;
	if (argc != 2)
	{
		cout << "******************************************" << endl;
		cout << "Help - Using: " << argv[0] << endl;
		cout << "******************************************" << endl << endl;
		cout << argv[0] << " displays all possible permutation of a given input string" << endl;
		cout << "Usage - " << argv[0] << " <string>" << endl;
		cout << "******************************************" << endl << endl;
		cout << "Enter a string that you want permuated: ";
		cin >> stringToPermutate;
		cout << endl;
	}
	else stringToPermutate = argv[1];
	if (sizeof(stringToPermutate)<=1)
	{
		cout << stringToPermutate;
		return 0;
	}
	
	return 0;
}
