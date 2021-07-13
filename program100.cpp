#include<iostream>
using namespace std;
class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
       // pref[R] - pref[L-1] = k;
            // pref[L-1] = pref[R] - k;

        int ans = 0;

        int pref = 0;

        unordered_map<int,int> countPref;

        countPref[pref]++;

        for(int R = 0; R < N; R++) {

           pref += Arr[R];

           int need = pref - k;

           ans += countPref[need];

           countPref[pref]++;
        }

        return ans;
    }
};
