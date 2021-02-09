#include<iostream>
using namespace std;
class Solution{
    public:
    long long sumBitDiff(int arr[], int n)
    {
        long long ans = 0;  // Initialize result

        // traverse over all bits
        for (int i = 0; i < 32; i++)
        {
            // count number of elements with i'th bit set
            int count = 0;
            for (int j = 0; j < n; j++)
                if ( (arr[j] & (1 << i)) )
                    count++;

            // Add "count * (n - count) * 2" to the answer
            ans += (count * (n - count) * 2);
        }

        return ans;
    }

};

