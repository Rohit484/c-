// C++ program to get the
// total number of guests at the party

#include <bits/stdc++.h>
using namespace std;

// Function to find the totalGuests
int findGuest(int array[], int N)
{
	// Total guest before the party are 0
	int count = 0;

	// Checking requirements for each guest
	for (int i = 0; i < N; i++) {

		// If requirements are met
		if (array[i] <= count) {

			// The Gi guest decides to stay
			// So increment total guest by 1
			count++;
		}
	}

	// Return the totalnumber of guest
	return count;
}

// Driver code
int main()
{

	// Get the number of guests invited
	int N = 5;

	// Guests array stores
	// the requirement by each guest
	int guests[] = { 1, 0, 2, 1, 3 };

	// Get the total number of guests present
	int totalGuests = findGuest(guests, N);

	cout << totalGuests << endl;

	return 0;
}

