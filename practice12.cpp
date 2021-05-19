#include<iostream>
using namespace std;
class Solution
{
    public:
    long long findNth(long long N)
    {
        long long res = 0;
        long long p = 1;

        while(N)
        {
            res += p * (N % 9);

            N /= 9;

            p *= 10;
        }

        return res;
    }
};
