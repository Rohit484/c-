// An Not in-place C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void revereseArray(int arr[], int n)
{
// Create a copy array and store reversed
// elements
int rev[n];
for (int i=0; i<n; i++)
	rev[n-i-1] = arr[i];

// Now copy reversed elements back to arr[]
for (int i=0; i<n; i++)
	arr[i] = rev[i];
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
	cout << arr[i] << " ";
cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, n);
	revereseArray(arr, n);
	cout << "Reversed array is" << endl;
	printArray(arr, n);
	return 0;
}

