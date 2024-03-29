#include<iostream>
using namespace std;
class Solution
{
    public:
    vector<int> increment(vector<int> arr ,int N)
    {
        vector<int> res;

        int sum = (arr[N - 1] + 1) % 10;
        int carry = (arr[N - 1] + 1) / 10;

        res.push_back(sum);

        for(int i = N - 2; i >= 0; i--)
        {
            sum = (arr[i] + carry) % 10;
            carry = (arr[i] + carry) / 10;

            res.push_back(sum);
        }

        if(carry != 0)
        {
            res.push_back(carry);
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
