#include<iostream>
using namespace std;
class Solution{
public:
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long pref = 1, suff = 1, res = INT_MIN;
	    for(int i=0; i<n; i++) {
	        pref *= arr[i];
	        suff *= arr[n-i-1];
	        res = max(res, max(pref, suff));
	        if(pref == 0) pref = 1;
	        if(suff == 0) suff = 1;
	    }
	    return res;
	}
};
