#include<iostream>
using namespace std;
class Solution{
    public:
    int maxLen(vector<int>&v, int n)
   {
       // Your code here
               vector<int> pre(n);
   pre[0] = v[0];
int ans =  0;
   for (int i = 1; i < n; i++)
       pre[i] = pre[i - 1] + v[i];

   map<int, int> m;
   for (int i = 0; i < n; i++)
   {
       if (pre[i] == 0)
       {
           ans = i + 1;
           continue;
       }
       if (m[pre[i]])
       {
           ans = max((i + 1 - m[pre[i]]), ans);
       }
       else
           m[pre[i]] = i + 1;
   }
   return ans;
   }

};
