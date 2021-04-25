
// C++ implementation of the above approach

#include "bits/stdc++.h"
using namespace std;

// Function to return the word
// of the corresponding digit
void printValue(char digit)
{

	// Switch block to check for each digit c
	switch (digit) {

	// For digit 0
	case '0':
		cout << "Zero ";
		break;

	// For digit 1
	case '1':
		cout << "One ";
		break;

	// For digit 2
	case '2':
		cout << "Two ";
		break;

	// For digit 3
	case '3':
		cout << "Three ";
		break;

	// For digit 4
	case '4':
		cout << "Four ";
		break;

	// For digit 5
	case '5':
		cout << "Five ";
		break;

	// For digit 6
	case '6':
		cout << "Six ";
		break;

	// For digit 7
	case '7':
		cout << "Seven ";
		break;

	// For digit 8
	case '8':
		cout << "Eight ";
		break;

	// For digit 9
	case '9':
		cout << "Nine ";
		break;
	}
}

// Function to iterate through every
// digit in the given number
void printWord(string N)
{
	int i, length = N.length();

	// Finding each digit of the number
	for (i = 0; i < length; i++) {

		// Print the digit in words
		printValue(N[i]);
	}
}

// Driver code
int main()
{
	string N = "123";
	printWord(N);
	return 0;
}
