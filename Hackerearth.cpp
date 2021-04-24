
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number
// of operations
int minOperations(int n)
{
	// Storing the minimum operations
	// to obtain all numbers up to N
	int dp[n + 1];

	// Initilal state
	dp[1] = 0;

	// Iterate for the remaining numbers
	for (int i = 2; i <= n; i++) {

		dp[i] = INT_MAX;

		// If the number can be obtained
		// by multiplication by 2
		if (i % 2 == 0) {
			int x = dp[i / 2];
			if (x + 1 < dp[i]) {
				dp[i] = x + 1;
			}
		}
		// If the number can be obtained
		// by multiplication by 3
		if (i % 3 == 0) {
			int x = dp[i / 3];
			if (x + 1 < dp[i]) {
				dp[i] = x + 1;
			}
		}

		// Obtaining the number by adding 1
		int x = dp[i - 1];
		if (x + 1 < dp[i]) {
			dp[i] = x + 1;
		}
	}

	// Return the minm operations
	// to obtain n
	return dp[n];
}

// Driver Code
int main()
{
	int n = 15;
	cout << minOperations(n);
	return 0;
}
