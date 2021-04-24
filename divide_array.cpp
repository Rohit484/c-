// CPP program to find quotient of array
// elements
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the quotient
// of every element of the array
void calculate(int a[], int b[], int n, int m)
{
	int mul = 1;

	// Calculate the product of all elements
	for (int i = 0 ; i < m ; i++)
		if (b[i] != 0)
			mul = mul * b[i];

	// To calculate the quotient of every
	// array element
	for (int i = 0 ; i < n ; i++)
	{
		int x = floor(a[i] / mul);
		cout << x << " ";
	}
}

// Driver code
int main()
{
	int a[] = {5 , 100 , 8};
	int b[] = {2 , 3};
	int n = sizeof(a)/sizeof(a[0]);
	int m = sizeof(b)/sizeof(b[0]);
	calculate(a, b, n, m);
	return 0;
}

