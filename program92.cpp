// C++ program to check if a number is
// even or not using goto statement
#include <iostream>
using namespace std;

// function to check even or not
void checkEvenOrNot(int num)
{
	if (num % 2 == 0)
	// jump to even
		goto even;
	else
	// jump to odd
		goto odd;

even:
	cout << num << " is even";
	// return if even
	return;
odd:
	cout << num << " is odd";
}

// Driver program to test above function
int main()
{
	int num = 26;
	checkEvenOrNot(num);
	return 0;
}

