// This program opens a file of the users choice and then scans it for specific letters, counts them, and then output the totals of each and all letters counted.
// Tim Cutts Week 4 Programming Assignment ITCS 2530  Letter counting program.  Using some provided code from ITCS 2530 week 4 programming assignment.  Modified for Github assignment.

#include <iostream> //to use inputs and outputs
#include <string> //to use strings
#include <fstream> //so we can open the file
#include <iomanip> //so we can use fills and width sets

using namespace std; //so we do not have to type std everytime

int main(int argc, char* argv[]) //calls on arguments to be used for the program to be used in main.
{
	

	int sum_A = 0; //setting the variables for all the letter counts in the program lines 15 - 22
	int sum_E = 0;
	int sum_I = 0;
	int sum_O = 0;
	int sum_U = 0;
	int sum_C = 0;
	int sum_M = 0;
	int sum_R = 0;
	int total; //setting the variable for the total of all the counts
	char ch; //seeting the variable for the character counts

	// Code from the sample source file from week 4 programming assignment
	if (argc < 2) // this checks to see if there was only 1 argument
	{
		cout << "Error with input agrs.." << endl; //outputs error message if not enough arguments inputed when opening the file
		return 1; //to indicate there was an error
	}

	ifstream inFile; //variable for the file we choose to open

	inFile.open(argv[1]); //code from the same source file from week 4 programming assignment  this opens the file
	if (!inFile) //code to check if the file is available or exists
	{
		cout << "Error with file name.." << endl; //outputs error message if the file does not exist or match
		return 1; //to indicate there was an error
	}

	cout << setw(92) << setfill('*') << "" << endl; //this line outputs 50 .'s to the screen
	cout << setw(64) << setfill('*') << " Welcome to my Letter Count Program " << setw(28) << setfill('*') << "" << endl; //welcome message to the screen
	cout << setw(92) << setfill('*') << "" << endl; //this line outputs 50 .'s to the screen
	cout << "\n" << "\n" << endl; //creates two blank line spaces

	for (int i = 1; i < argc; i++) //this loop checks the second argument and increases the counter to end the loop
	{
		cout << "Analyzing file '" << argv[i] << "'..." << endl; //outputs analyzing file and then the file name
		cout << "\n" << endl; //new line space
	}

	while (!inFile.eof() && inFile >> ch) //loop to check if it is not at the end of file and to check the characters in the file
	{
		if (ch == 'a' || ch == 'A')  //selection structure to check if the character in the file is a vowel in either upper or lowercase.   Same for lines 55, 57, 59, 61, 65, 67, & 69
			sum_A++;  //increased the count for the vowel by 1.  Same for lines 56, 58, 60, 62, 66, 68, & 70
		else if (ch == 'e' || ch == 'E')
			sum_E++;
		else if (ch == 'i' || ch == 'I')
			sum_I++;
		else if (ch == 'o' || ch == 'O')
			sum_O++;
		else if (ch == 'u' || ch == 'U')
			sum_U++;
		else if (ch == 'c' || ch == 'C')
			sum_C++;
		else if (ch == 'm' || ch == 'M')
			sum_M++;
		else if (ch == 'r' || ch == 'R')
			sum_R++;
	}


	

	total = sum_A + sum_E + sum_I + sum_O + sum_U + sum_C + sum_M + sum_R; //this line adds up all the totals from the letter counts 

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of A's: " << sum_A << endl; //sets the width and fill to '.' while outputting the total # of A's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of E's: " << sum_E << endl; //sets the width and fill to '.' while outputting the total # of E's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of I's: " << sum_I << endl; //sets the width and fill to '.' while outputting the total # of I's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of O's: " << sum_O << endl; //sets the width and fill to '.' while outputting the total # of O's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of U's: " << sum_U << endl; //sets the width and fill to '.' while outputting the total # of U's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of C's: " << sum_C << endl; //sets the width and fill to '.' while outputting the total # of C's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of M's: " << sum_M << endl; //sets the width and fill to '.' while outputting the total # of M's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The number of R's: " << sum_R << endl; //sets the width and fill to '.' while outputting the total # of R's

	cout << left; //sets the justification to the left
	cout << setw(90) << setfill('.') << "The vowel count is: " << total << endl; //sets the width and fill to '.' while outputting the total # of letters


	inFile.close(); //closes the file

	return 0;
}

