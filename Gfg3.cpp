#include<iostream>
using namespace std;
class Solution
{
    vector <int> countDistinct (int A[], int n, int k)
{
    unordered_map<int,int> mp;
    vector<int> res;
    for(int i = 0;i<k;i++)
    {
        mp[A[i]]++;
    }
    res.push_back(mp.size());
    int j = 0;
    for(int i=k;i<n;i++)
    {
        mp[A[j]]--;
        mp[A[i]]++;
        if(mp[A[j]] == 0)
        {
            mp.erase(A[j]);
        }
        j++;
        res.push_back(mp.size());
    }
    return res;
}
};
