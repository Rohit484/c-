#include<iostream>
using namespace std;
class Solution
{
public:
    unsigned long long int dp[75];
    Solution()
    {
        dp[0]=1;
        for(int i=1;i<75;i++)
        {
            dp[i]=dp[i-1]+1;
            for(int j=3;j<=i;j++)
                dp[i]=max(dp[i], dp[j-3] +dp[j-3] *(i-j+1));
        }
    }
    unsigned long long int optimalKeys(int N)
    {
        return dp[N-1];
    }
};
